#include <stdio.h>
#include <string.h>
#include <sys/time.h>

#include "test.h"

TEST_CASE(stdio_init)
{
	char sector[512];
	for (size_t i = 0; i < sizeof(sector); i++)
		sector[i] = i & 0xff;

	FILE* fp = fopen("/dev/null", "w");
	if (!fp) {
		perror("/dev/null");
		return;
	}

	struct timeval start, end, diff;
	gettimeofday(&start, NULL);

	/* Every fread/fwrite ensures atexit handlers are registered,
	 * so that all buffered file handles can be flushed on exit,
	 * but if this registration check is naive it could impact throughput.
	 */
	const long iter = 2L * 1024;
	for (long i = 0; i < iter; ++i) {
		size_t n = fwrite(sector, sizeof(sector), 1, fp);
		if (n != 1) {
			perror("fwrite");
			tests_fail++;
			break;
		}
	}

	gettimeofday(&end, NULL);
	timeval_sub(&end, &start, &diff);

	long bytes = sizeof(sector) * iter;
	struct timeval per;
	per.tv_sec = diff.tv_sec / bytes;
	per.tv_usec = diff.tv_sec % bytes * 1000000L + diff.tv_usec / bytes;
	timeval_norm(&per);

	TEST_INFO("fwrite: %ld bytes, %ld usec\n", bytes, diff.tv_sec * 1000000L + diff.tv_usec);

	fclose(fp);
}
