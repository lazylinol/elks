/* Keymap:DV:Dvorak:Dvorak */

#ifndef __KEYMAP_DV__
#define __KEYMAP_DV__

#if defined(CONFIG_KEYMAP_DV)

/************************************************************************
 * First attempt at Dvorak keyboard layout * Peter Vachuska * July 2000 *
 ************************************************************************/

static unsigned char xtkb_scan[] = {
	0,    033,  '1',  '2',	'3',  '4',  '5',  '6',	'7',  '8',  '9',  '0',
	'[',  ']',  '\b', '\t', '\'', ',',  '.',  'p',	'y',  'f',  'g',  'c',
	'r',  'l',  '/',  '=',	015,  0202, 'a',  'o',	'e',  'u',  'i',  'd',
	'h',  't',  'n',  's',	'-',  0140, 0200, 0134, ';',  'q',  'j',  'k',
	'x',  'b',  'm',  'w',	'v',  'z',  0201, '*',	0203, ' ',  0204, 0241,
	0242, 0243, 0244, 0245, 0246, 0247, 0250, 0251, 0252, 0205, 0210, 0267,
	0270, 0271, 0211, 0264, 0265, 0266, 0214, 0261, 0262, 0263, 0272, 0177
};

static unsigned char xtkb_scan_shifted[] = {
	0,    033,  '!',  '@',	'#',  '$',  '%',  '^',	'&',  '*',  '(',  ')',
	'{',  '}',  '\b', '\t', 042,  '<',  '>',  'P',	'Y',  'F',  'G',  'C',
	'R',  'L',  '?',  '+',	015,  0202, 'A',  'O',	'E',  'U',  'I',  'D',
	'H',  'T',  'N',  'S',	'_',  '~',  0200, '|',	':',  'Q',  'J',  'K',
	'X',  'B',  'M',  'W',	'V',  'Z',  0201, '*',	0203, ' ',  0204, 0221,
	0222, 0223, 0224, 0225, 0226, 0227, 0230, 0231, 0232, 0204, 0213, '7',
	'8',  '9',  0211, '4',	'5',  '6',  0214, '1',	'2',  '3',  '0',  0177
};

static unsigned char xtkb_scan_ctrl_alt[] = {
	0,    033,  '!',  '@',	'#',  '$',  '%',  '^',	'&',  '*',  '(',  ')',
	'[',  ']',  '\b', '\t', '\'', ',',  '.',  'P',	'Y',  'F',  'G',  'C',
	'R',  'L',  '/',  '=',	015,  0202, 'A',  'O',	'E',  'U',  'I',  'D',
	'H',  'T',  'N',  'S',	'-',  0140, 0200, 0134, ';',  'Q',  'J',  'K',
	'X',  'B',  'M',  'W',	'V',  'Z',  0201, '*',	0203, ' ',  0204, 0241,
	0242, 0243, 0244, 0245, 0246, 0247, 0250, 0251, 0252, 0205, 0210, 0267,
	0270, 0271, 0211, 0264, 0265, 0266, 0214, 0261, 0262, 0263, 0272, 0177
};

static unsigned char xtkb_scan_caps[] = {
	0,    033,  '1',  '2',	'3',  '4',  '5',  '6',	'7',  '8',  '9',  '0',
	'[',  ']',  '\b', '\t', '\'', ',',  '.',  'P',	'Y',  'F',  'G',  'C',
	'R',  'L',  '/',  '=',	015,  0202, 'A',  'O',	'E',  'U',  'I',  'D',
	'H',  'T',  'N',  'S',	'-',  0140, 0200, 0134, ';',  'Q',  'J',  'K',
	'X',  'B',  'M',  'W',	'V',  'Z',  0201, '*',	0203, ' ',  0204, 0221,
	0222, 0223, 0224, 0225, 0226, 0227, 0230, 0231, 0232, 0204, 0213, '7',
	'8',  '9',  0211, '4',	'5',  '6',  0214, '1',	'2',  '3',  '0',  0177
};

#endif

#endif
