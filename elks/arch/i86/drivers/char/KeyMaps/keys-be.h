/* Keymap:BE:Belgique:Belgium	*/

#ifndef __KEYMAP_BE__
#define __KEYMAP_BE__

#if defined(CONFIG_KEYMAP_BE)

static unsigned char xtkb_scan[] = {
	0,    033,  '&',  '�',	'\"', '\'', '(',  '�',	'�',  '!',  '�',  '�',
	')',  '-',  '\b', '\t', 'a',  'z',  'e',  'r',	't',  'y',  'u',  'i',
	'o',  'p',  '^',  '$',	015,  0202, 'q',  's',	'd',  'f',  'g',  'h',
	'j',  'k',  'l',  'm',	'�',  '�',  '�',  0134, 'w',  'x',  'c',  'v',
	'b',  'n',  ',',  ';',	':',  '=',  0201, '*',	0203, ' ',  0204, 0241,
	0242, 0243, 0244, 0245, 0246, 0247, 0250, 0251, 0252, 0205, 0210, 0267,
	0270, 0271, 0211, 0264, 0265, 0266, 0214, 0261, 0262, 0263, 0272, 0177
};

static unsigned char xtkb_scan_shifted[] = {
	0,    033,  '1',  '2',	'3',  '4',  '5',  '6',	'7',  '8',  '9',  '0',
	'�',  '_',  '\b', '\t', 'A',  'Z',  'E',  'R',	'T',  'Y',  'U',  'I',
	'O',  'P',  '�',  '*',	015,  0202, 'Q',  'S',	'D',  'F',  'G',  'H',
	'J',  'K',  'L',  'M',	'%',  '�',  0200, '�',	'W',  'X',  'C',  'V',
	'B',  'N',  '?',  '.',	'/',  '+',  0201, '*',	0203, ' ',  0204, 0221,
	0222, 0223, 0224, 0225, 0226, 0227, 0230, 0231, 0232, 0204, 0213, '7',
	'8',  '9',  0211, '4',	'5',  '6',  0214, '1',	'2',  '3',  '0',  0177
};

static unsigned char xtkb_scan_ctrl_alt[] = {
	0,    033,  '|',  '@',	'#',  '\'', '(',  '^',	'�',  '!',  '{',  '}',
	')',  '-',  '\b', '\t', 'a',  'z',  'e',  'r',	't',  'y',  'u',  'i',
	'o',  'p',  '[',  ']',	015,  0202, 'q',  's',	'd',  'f',  'g',  'h',
	'j',  'k',  'l',  'm',	'�',  '�',  '`',  0134, 'w',  'x',  'c',  'v',
	'b',  'n',  ',',  ';',	':',  '~',  0201, '*',	0203, ' ',  0204, 0241,
	0242, 0243, 0244, 0245, 0246, 0247, 0250, 0251, 0252, 0205, 0210, 0267,
	0270, 0271, 0211, 0264, 0265, 0266, 0214, 0261, 0262, 0263, 0272, 0177
};

static unsigned char xtkb_scan_caps[] = {
	0,    033,  '1',  '2',	'3',  '4',  '5',  '6',	'7',  '8',  '9',  '0',
	'�',  '_',  '\b', '\t', 'A',  'Z',  'E',  'R',	'T',  'Y',  'U',  'I',
	'O',  'P',  '�',  '*',	015,  0202, 'Q',  'S',	'D',  'F',  'G',  'H',
	'J',  'K',  'L',  'M',	'%',  '�',  0200, '�',	'W',  'X',  'C',  'V',
	'B',  'N',  '?',  '.',	'/',  '+',  0201, '*',	0203, ' ',  0204, 0221,
	0222, 0223, 0224, 0225, 0226, 0227, 0230, 0231, 0232, 0204, 0213, '7',
	'8',  '9',  0211, '4',	'5',  '6',  0214, '1',	'2',  '3',  '0',  0177
};

#endif

#endif
