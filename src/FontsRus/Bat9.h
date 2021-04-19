const uint8_t Bat9pt7bBitmaps[] PROGMEM = {
  0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xEC, 0x00, 0x01, 0xF0, 0x00, 0x07, 0xC0,
  0x00, 0x0F, 0x00, 0x00, 0x3C, 0x00, 0x00, 0xF0, 0x00, 0x07, 0xC0, 0x00,
  0x1F, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF,
  0xEC, 0x00, 0x01, 0xF7, 0xC0, 0x07, 0xDF, 0x00, 0x0F, 0x7C, 0x00, 0x3D,
  0xF0, 0x01, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xEF, 0xFF,
  0xFF, 0x80, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xEC, 0x00, 0x01, 0xF7, 0xF8,
  0x07, 0xDF, 0xE0, 0x0F, 0x7F, 0x80, 0x3D, 0xFE, 0x01, 0xF0, 0x00, 0x07,
  0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFB,
  0xFF, 0xFF, 0xEC, 0x00, 0x01, 0xF3, 0xFF, 0x87, 0xCF, 0xFE, 0x0F, 0x3F,
  0xF8, 0x3C, 0xFF, 0xE1, 0xF0, 0x00, 0x07, 0xC0, 0x00, 0x1F, 0xFF, 0xFF,
  0xEF, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xFB, 0xFF, 0xFF, 0xEC, 0x00, 0x01,
  0xF7, 0xFF, 0xF7, 0xDF, 0xFF, 0xCF, 0x7F, 0xFF, 0x3D, 0xFF, 0xFD, 0xF0,
  0x00, 0x07, 0xC0, 0x00, 0x1F, 0xFF, 0xFF, 0xEF, 0xFF, 0xFF, 0x80 };

const GFXglyph Bat9pt7bGlyphs[] PROGMEM = {
  {     0,  22,  11,  22,    0,  -11 },   // 0x30 '0'
  {    31,  22,  11,  22,    0,  -11 },   // 0x31 '1'
  {    62,  22,  11,  22,    0,  -11 },   // 0x32 '2'
  {    93,  22,  11,  22,    0,  -11 },   // 0x33 '3'
  {   124,  22,  11,  22,    0,  -11 } }; // 0x34 '4'

const GFXfont Bat9pt7b PROGMEM = {
  (uint8_t  *)Bat9pt7bBitmaps,
  (GFXglyph *)Bat9pt7bGlyphs,
  0x30, 0x34, 18 };

// Approx. 197 bytes