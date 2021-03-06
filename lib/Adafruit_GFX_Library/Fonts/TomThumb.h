// Adafruit GFX font TomThumb size: 6x6

const uint8_t TomThumbBitmaps[] PROGMEM = {
  0xE8,	// symbol '!'
  0x69,0x31,0x96,	// symbol
  0xBE,0xFA,	// symbol '#'
  0x79,0xE4,	// symbol '$'
  0xCD,0x24,0xB3,	// symbol '%'
  0xDB,0xD6,	// symbol '&'
  0xC0,	// symbol '''
  0x6A,0x40,	// symbol '('
  0x95,0x80,	// symbol ')'
  0xAA,0x80,	// symbol '*'
  0x21,0x3E,0x42,0x00,	// symbol '+'
  0x60,	// symbol ','
  0xF8,	// symbol '-'
  0x80,	// symbol '.'
  0x25,0x48,	// symbol '/'
  0x69,0x99,0x96,	// digit '0'
  0x59,0x25,0xC0,	// digit '1'
  0x69,0x16,0x8F,	// digit '2'
  0x69,0x21,0x96,	// digit '3'
  0x35,0x9F,0x11,	// digit '4'
  0xF8,0xE1,0x96,	// digit '5'
  0x68,0xE9,0x96,	// digit '6'
  0xF1,0x24,0x88,	// digit '7'
  0x69,0x69,0x96,	// digit '8'
  0x69,0x97,0x16,	// digit '9'
  0x90,	// symbol ':'
  0x46,	// symbol ';'
  0xF8,0xE9,0x9E,	// symbol '<'
  0xE3,0x80,	// symbol '='
  0x95,0x6B,0xDA,0xC8,	// symbol '>'
  0xE5,0x04,	// symbol '?'
  0x57,0xC6,	// symbol '@'
  0x75,0x6B,0x57,0x10,	// eng 'A'
  0x99,0xBD,0x99,	// eng 'B'
  0x69,0x88,0x96,	// eng 'C'
  0xE9,0xE9,0x9E,	// eng 'D'
  0x99,0x97,0x16,	// eng 'E'
  0x69,0x9F,0x99,	// eng 'F'
  0xF9,0x99,0x99,	// eng 'G'
  0xE9,0x9E,0x88,	// eng 'H'
  0x8D,0x6B,0x5A,0xFC,	// eng 'I'
  0x69,0x99,0x96,	// eng 'J'
  0x35,0x55,0x59,	// eng 'K'
  0x32,0x94,0xAF,0xC4,	// eng 'L'
  0xE9,0x9E,0x88,	// eng 'M'
  0xF9,0x08,0x42,0x10,	// eng 'N'
  0x8A,0xAA,0xAA,0xFC,0x10,	// eng 'O'
  0x69,0x21,0x96,	// eng 'P'
  0x60,0x9B,0xD9,	// eng 'Q'
  0x9A,0xCA,0x99,	// eng 'R'
  0x8C,0x73,0x5A,0xE4,	// eng 'S'
  0xF8,0xE8,0x8F,	// eng 'T'
  0xF8,0x88,0x88,	// eng 'U'
  0x8E,0xEB,0x58,0xC4,	// eng 'V'
  0x94,0xA5,0x2F,0x84,	// eng 'W'
  0x99,0x97,0x11,	// eng 'X'
  0x99,0xF9,0x99,	// eng 'Y'
  0x79,0x97,0x99,	// eng 'Z'
  0xB5,0x2B,0x40,	// symbol '['
  0x88,0x80,	// symbol '\'
  0xC4,0x65,0x56,	// symbol ']'
  0x54,	// symbol '^'
  0xE0,	// symbol '_'
  0x90,	// symbol '`'
  0xCE,0xF0,	// eng 'a'
  0x9A,0xDC,	// eng 'b'
  0x98,0x92,0x08,0x24,0x60,	// eng 'c'
  0x2E,0xD6,	// eng 'd'
  0x77,0x30,	// eng 'e'
  0x2B,0xA4,	// eng 'f'
  0x80,	// eng 'g'
  0x9A,0xDA,	// eng 'h'
  0xB8,	// eng 'i'
  0x20,0x9A,0x80,	// eng 'j'
  0x97,0x6A,	// eng 'k'
  0xC9,0x2E,	// eng 'l'
  0x8E,0xEB,0x18,0x80,	// eng 'm'
  0xD6,0xD0,	// eng 'n'
  0x56,0xA0,	// eng 'o'
  0xD6,0xE8,	// eng 'p'
  0x76,0xB2,	// eng 'q'
  0x72,0x40,	// eng 'r'
  0x69,0x88,0x70,	// eng 's'
  0xE9,0x24,	// eng 't'
  0xB6,0xB0,	// eng 'u'
  0xB7,0xA0,	// eng 'v'
  0xBF,0xF0,	// eng 'w'
  0xA9,0x50,	// eng 'x'
  0xB5,0x94,	// eng 'y'
  0xEF,0x70,	// eng 'z'
  0x6A,0x26,	// symbol '{'
  0xD8,	// symbol '|'
  0xC8,0xAC,	// symbol '}'
  0x78	// symbol '~'
};

const GFXglyph TomThumbGlyphs[] PROGMEM = {
  { 0, 0, 0, 2, 0, 0 },	// SPC
  { 0, 1, 5, 2, 0, -5 },	// symbol '!'
  { 1, 4, 6, 5, 0, -5 },	// symbol
  { 4, 3, 5, 4, 0, -5 },	// symbol '#'
  { 6, 3, 5, 4, 0, -5 },	// symbol '$'
  { 8, 4, 6, 4, 0, -5 },	// symbol '%'
  { 11, 3, 5, 4, 0, -5 },	// symbol '&'
  { 13, 1, 2, 2, 0, -5 },	// symbol '''
  { 14, 2, 5, 3, 0, -5 },	// symbol '('
  { 16, 2, 5, 3, 0, -5 },	// symbol ')'
  { 18, 3, 3, 4, 0, -5 },	// symbol '*'
  { 20, 5, 5, 5, 0, -4 },	// symbol '+'
  { 24, 2, 2, 3, 0, -2 },	// symbol ','
  { 25, 5, 1, 5, 0, -2 },	// symbol '-'
  { 26, 1, 1, 1, 0, 0 },	// symbol '.'
  { 27, 3, 5, 4, 0, -5 },	// symbol '/'
  { 29, 4, 6, 5, 0, -5 },	// digit '0'
  { 32, 3, 6, 5, 1, -5 },	// digit '1'
  { 35, 4, 6, 5, 0, -5 },	// digit '2'
  { 38, 4, 6, 5, 0, -5 },	// digit '3'
  { 41, 4, 6, 5, 0, -5 },	// digit '4'
  { 44, 4, 6, 5, 0, -5 },	// digit '5'
  { 47, 4, 6, 5, 0, -5 },	// digit '6'
  { 50, 4, 6, 5, 0, -5 },	// digit '7'
  { 53, 4, 6, 5, 0, -5 },	// digit '8'
  { 56, 4, 6, 5, 0, -5 },	// digit '9'
  { 59, 1, 4, 2, 0, -4 },	// symbol ':'
  { 60, 2, 4, 3, 0, -4 },	// symbol ';'
  { 61, 4, 6, 5, 0, -5 },	// symbol '<'
  { 64, 3, 3, 4, 0, -4 },	// symbol '='
  { 66, 5, 6, 6, 0, -5 },	// symbol '>'
  { 70, 3, 5, 4, 0, -5 },	// symbol '?'
  { 72, 3, 5, 5, 0, -5 },	// symbol '@'
  { 74, 5, 6, 6, 0, -5 },	// eng 'A'
  { 78, 4, 6, 5, 0, -5 },	// eng 'B'
  { 81, 4, 6, 5, 0, -5 },	// eng 'C'
  { 84, 4, 6, 5, 0, -5 },	// eng 'D'
  { 87, 4, 6, 5, 0, -5 },	// eng 'E'
  { 90, 4, 6, 5, 0, -5 },	// eng 'F'
  { 93, 4, 6, 5, 0, -5 },	// eng 'G'
  { 96, 4, 6, 5, 0, -5 },	// eng 'H'
  { 99, 5, 6, 6, 0, -5 },	// eng 'I'
  { 103, 4, 6, 5, 0, -5 },	// eng 'J'
  { 106, 4, 6, 5, 0, -5 },	// eng 'K'
  { 109, 5, 6, 6, 0, -5 },	// eng 'L'
  { 113, 4, 6, 5, 0, -5 },	// eng 'M'
  { 116, 5, 6, 6, 0, -5 },	// eng 'N'
  { 120, 6, 6, 6, 0, -5 },	// eng 'O'
  { 125, 4, 6, 5, 0, -5 },	// eng 'P'
  { 128, 4, 6, 5, 0, -5 },	// eng 'Q'
  { 131, 4, 6, 5, 0, -5 },	// eng 'R'
  { 134, 5, 6, 6, 0, -5 },	// eng 'S'
  { 138, 4, 6, 5, 0, -5 },	// eng 'T'
  { 141, 4, 6, 5, 0, -5 },	// eng 'U'
  { 144, 5, 6, 6, 0, -5 },	// eng 'V'
  { 148, 5, 6, 6, 0, -5 },	// eng 'W'
  { 152, 4, 6, 5, 0, -5 },	// eng 'X'
  { 155, 4, 6, 5, 0, -5 },	// eng 'Y'
  { 158, 4, 6, 5, 0, -5 },	// eng 'Z'
  { 161, 3, 6, 4, 0, -5 },	// symbol '['
  { 164, 3, 3, 4, 0, -4 },	// symbol '\'
  { 166, 4, 6, 5, 0, -5 },	// symbol ']'
  { 169, 3, 2, 4, 0, -5 },	// symbol '^'
  { 170, 3, 1, 4, 0, -1 },	// symbol '_'
  { 171, 2, 2, 3, 0, -5 },	// symbol '`'
  { 172, 3, 4, 4, 0, -4 },	// eng 'a'
  { 174, 3, 5, 4, 0, -5 },	// eng 'b'
  { 176, 6, 6, 6, 0, -5 },	// eng 'c'
  { 181, 3, 5, 4, 0, -5 },	// eng 'd'
  { 183, 3, 4, 4, 0, -4 },	// eng 'e'
  { 185, 3, 5, 4, 0, -5 },	// eng 'f'
  { 187, 1, 1, 4, 0, 0 },	// eng 'g'
  { 188, 3, 5, 4, 0, -5 },	// eng 'h'
  { 190, 1, 5, 2, 0, -5 },	// eng 'i'
  { 191, 3, 6, 4, 0, -5 },	// eng 'j'
  { 194, 3, 5, 4, 0, -5 },	// eng 'k'
  { 196, 3, 5, 4, 0, -5 },	// eng 'l'
  { 198, 5, 5, 6, 0, -4 },	// eng 'm'
  { 202, 3, 4, 4, 0, -4 },	// eng 'n'
  { 204, 3, 4, 4, 0, -4 },	// eng 'o'
  { 206, 3, 5, 4, 0, -4 },	// eng 'p'
  { 208, 3, 5, 4, 0, -4 },	// eng 'q'
  { 210, 3, 4, 4, 0, -4 },	// eng 'r'
  { 212, 4, 5, 4, 0, -4 },	// eng 's'
  { 215, 3, 5, 4, 0, -4 },	// eng 't'
  { 217, 3, 4, 4, 0, -4 },	// eng 'u'
  { 219, 3, 4, 4, 0, -4 },	// eng 'v'
  { 221, 3, 4, 4, 0, -4 },	// eng 'w'
  { 223, 3, 4, 4, 0, -4 },	// eng 'x'
  { 225, 3, 5, 4, 0, -4 },	// eng 'y'
  { 227, 3, 4, 4, 0, -4 },	// eng 'z'
  { 229, 3, 5, 4, 0, -5 },	// symbol '{'
  { 231, 1, 5, 2, 0, -5 },	// symbol '|'
  { 232, 3, 5, 4, 0, -5 },	// symbol '}'
  { 234, 3, 2, 4, 0, -5 }	// symbol '~'
};

const GFXfont TomThumb PROGMEM = {
 (uint8_t *)TomThumbBitmaps,
 (GFXglyph *)TomThumbGlyphs,
 32, 126, 6};
