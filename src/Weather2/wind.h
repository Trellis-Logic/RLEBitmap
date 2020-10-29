
//
//  This file is AUTOMATICALLY GENERATED, and should not be edited unless you are certain
//  that it will not be re-generated anytime in the future.  As generated code, the
//  copyright owner(s) of the generating program do NOT claim any copyright on the code
//  generated.
//
//  Run Length Encoded (RLE) bitmaps.  Each run is encoded as either one or two bytes,
//  with NO PADDING.  Thus, the data for each line of the bitmap is VARIABLE LENGTH, and
//  there is no way of determining where any line other than the first starts without
//  walking though the data.  
//
//  Note that one byte encoding ONLY occurs if the total number of colors is 16 or less,
//  and in that case the 'flags' member of the 'RLEBitmapInfo' will have the first bit
//  (0x01) set.
//
//  In that case, if the high 4 bits of the first byte are ZERO, then this is a 2 byte
//  run.  The first byte is the index of the color in the color palette, and the second
//  byte is the length.
//
//  Else, the lower 4 bits are the color index, and the upper 4 bits are the run length.
//
//  If the 'flags' member first bit is zero, then ALL runs are 2 byte runs.  The first
//  byte is the palette index, and the second is the run length.
//
//  In order to save PROGMEM for other uses, the bitmap data is placed in a section that
//  occurs near the END of the used FLASH.  So, this data should only be accessed using
//  the 'far' versions of the progmem functions - the usual versions are limited to the
//  first 64K of FLASH.
//
//  Data is from file '.\Processed\wind.bmp'.
//

const byte wind_RLEBM_data[] PROGMEM_LATE = 
{
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0xf0, 0x31, 0x00, 0x52, 
	0xe0, 0x11, 0x32, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x60, 0x11, 0x00, 0x4a, 
	0xe0, 0x42, 0x11, 0x60, 0x83, 0x11, 0x00, 0x42, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x44, 0x32, 0x21, 0x00, 0x38, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0x43, 0x11, 0x00, 0x30, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xb3, 0x22, 0x11, 0x00, 0x27, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0x74, 0x32, 0x21, 0x00, 0x1e, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0x93, 0x11, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0xa3, 0x00, 0x15, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0xb4, 0x63, 0x11, 0x00, 0x18, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x12, 0x44, 0x32, 0x21, 0x00, 0x21, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x12, 0xa4, 0x12, 0xa3, 0x11, 0x00, 0x2a, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0xa4, 0x12, 0x23, 0x11, 0x00, 0x33, 
	0xe0, 0x42, 0x11, 0x60, 0xa3, 0x42, 0x21, 0x00, 0x3b, 
	0xe0, 0x42, 0x11, 0x60, 0x53, 0x11, 0x00, 0x45, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x51, 
	0xe0, 0x42, 0x11, 0x00, 0x1b, 0x11, 0x32, 0x11, 0x00, 0x11, 0x21, 0x22, 0x21, 0x00, 0x1a, 
	0xe0, 0x42, 0x11, 0x00, 0x18, 0x11, 0x84, 0x12, 0x11, 0xb0, 0x11, 0x12, 0x94, 0x12, 0x11, 0x00, 0x16, 
	0xe0, 0x42, 0x11, 0x00, 0x17, 0x12, 0xb4, 0x12, 0x80, 0x12, 0xf4, 0x11, 0x00, 0x14, 
	0xe0, 0x42, 0x11, 0x00, 0x16, 0x12, 0xe4, 0x50, 0x11, 0x04, 0x12, 0x12, 0x00, 0x13, 
	0xe0, 0x42, 0x11, 0x00, 0x16, 0x04, 0x10, 0x40, 0x04, 0x15, 0x00, 0x12, 
	0xe0, 0x42, 0x11, 0x00, 0x16, 0x12, 0x54, 0x21, 0x12, 0x74, 0x11, 0x20, 0x11, 0x84, 0x22, 0x11, 0x22, 0x94, 0x00, 0x11, 
	0xe0, 0x42, 0x11, 0x00, 0x17, 0x12, 0x24, 0x11, 0x50, 0x11, 0x64, 0x20, 0x11, 0x54, 0x12, 0x80, 0x11, 0x84, 0x00, 0x10, 
	0xe0, 0x42, 0x11, 0x00, 0x21, 0x11, 0x54, 0x11, 0x20, 0x12, 0x24, 0x12, 0xc0, 0x11, 0x74, 0xf0, 
	0xe0, 0x42, 0x11, 0x00, 0x22, 0x12, 0x44, 0x12, 0x00, 0x14, 0x64, 0x11, 0xe0, 
	0xe0, 0x42, 0x11, 0x00, 0x23, 0x54, 0x00, 0x15, 0x64, 0xe0, 
	0xe0, 0x42, 0x11, 0x00, 0x23, 0x54, 0x00, 0x16, 0x54, 0x12, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x23, 0x54, 0x00, 0x16, 0x12, 0x54, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x22, 0x11, 0x54, 0x00, 0x17, 0x54, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x22, 0x54, 0x12, 0x00, 0x17, 0x54, 0x11, 0xc0, 
	0xe0, 0x42, 0x11, 0x00, 0x21, 0x11, 0x54, 0x11, 0x00, 0x17, 0x11, 0x44, 0x12, 0xc0, 
	0xe0, 0x42, 0x11, 0x00, 0x20, 0x12, 0x64, 0x00, 0x18, 0x11, 0x44, 0x12, 0xc0, 
	0xe0, 0x42, 0x11, 0x60, 0x11, 0x02, 0x18, 0x74, 0x11, 0x00, 0x18, 0x11, 0x54, 0xc0, 
	0xe0, 0x42, 0x11, 0x50, 0x04, 0x21, 0x00, 0x19, 0x11, 0x54, 0xc0, 
	0xe0, 0x42, 0x11, 0x40, 0x11, 0x04, 0x20, 0x00, 0x1a, 0x11, 0x44, 0x12, 0xc0, 
	0xe0, 0x42, 0x11, 0x40, 0x11, 0x04, 0x1e, 0x12, 0x00, 0x1b, 0x12, 0x44, 0x12, 0xc0, 
	0xe0, 0x42, 0x11, 0x50, 0x04, 0x1c, 0x12, 0x11, 0x00, 0x1c, 0x54, 0x11, 0xc0, 
	0xe0, 0x42, 0x11, 0x60, 0x01, 0x19, 0x00, 0x1f, 0x11, 0x54, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x3e, 0x64, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x3d, 0x12, 0x54, 0x11, 0xd0, 
	0xe0, 0x42, 0x11, 0x00, 0x3c, 0x11, 0x64, 0xe0, 
	0xe0, 0x42, 0x11, 0x00, 0x3b, 0x11, 0x64, 0x11, 0xe0, 
	0xe0, 0x42, 0x11, 0x00, 0x3a, 0x12, 0x64, 0x12, 0xf0, 
	0xe0, 0x42, 0x11, 0x00, 0x38, 0x11, 0x84, 0x00, 0x10, 
	0xe0, 0x42, 0x11, 0xc0, 0x11, 0x02, 0x26, 0x24, 0x12, 0xa4, 0x00, 0x11, 
	0xe0, 0x42, 0x11, 0xb0, 0x12, 0x04, 0x33, 0x00, 0x12, 
	0xe0, 0x42, 0x11, 0xb0, 0x04, 0x32, 0x12, 0x00, 0x13, 
	0xe0, 0x42, 0x11, 0xb0, 0x04, 0x31, 0x11, 0x00, 0x14, 
	0xe0, 0x11, 0x32, 0xc0, 0x11, 0x04, 0x2d, 0x12, 0x11, 0x00, 0x16, 
	0x00, 0x20, 0x01, 0x2a, 0x00, 0x1a, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x64, 
	
}; // 100x100 Bitmap (10000 pixels) in 851 bytes

const uint16_t wind_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 5 entries
	0x0000, 0x4a68, 0xb575, 0xf800, 0xffff, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_wind_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(wind_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(wind_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
