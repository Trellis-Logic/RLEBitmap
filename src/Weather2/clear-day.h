
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
//  Data is from file '.\Processed\clear-day.bmp'.
//

const byte clear_day_RLEBM_data[] PROGMEM_LATE = 
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
	0x00, 0x64, 
	0x00, 0x64, 
	0x00, 0x2f, 0x11, 0x32, 0x00, 0x31, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x21, 0x11, 0xd0, 0x12, 0x33, 0x11, 0xd0, 0x11, 0x00, 0x22, 
	0x00, 0x1f, 0x12, 0x23, 0xd0, 0x12, 0x33, 0x11, 0xd0, 0x23, 0x12, 0x00, 0x20, 
	0x00, 0x1e, 0x43, 0x12, 0xc0, 0x12, 0x33, 0x11, 0xc0, 0x12, 0x43, 0x00, 0x1f, 
	0x00, 0x1e, 0x11, 0x43, 0xc0, 0x12, 0x33, 0x11, 0xc0, 0x43, 0x12, 0x00, 0x1f, 
	0x00, 0x1f, 0x53, 0xb0, 0x12, 0x33, 0x11, 0xb0, 0x12, 0x43, 0x00, 0x20, 
	0x00, 0x20, 0x43, 0x11, 0xa0, 0x12, 0x33, 0x11, 0xb0, 0x43, 0x11, 0x00, 0x20, 
	0x00, 0x20, 0x53, 0xa0, 0x12, 0x33, 0x11, 0xa0, 0x53, 0x00, 0x21, 
	0x00, 0x21, 0x43, 0x12, 0x90, 0x12, 0x33, 0x11, 0x90, 0x11, 0x43, 0x00, 0x22, 
	0x00, 0x21, 0x12, 0x43, 0x90, 0x12, 0x33, 0x11, 0x90, 0x43, 0x12, 0x00, 0x22, 
	0x00, 0x22, 0x43, 0x12, 0x80, 0x12, 0x33, 0x11, 0x80, 0x12, 0x43, 0x00, 0x23, 
	0x00, 0x22, 0x11, 0x43, 0x80, 0x11, 0x32, 0x90, 0x43, 0x11, 0x00, 0x23, 
	0x00, 0x23, 0x53, 0x00, 0x13, 0x53, 0x00, 0x24, 
	0x00, 0x24, 0x43, 0x70, 0x51, 0x70, 0x43, 0x11, 0x00, 0x24, 
	0x00, 0x13, 0x13, 0x12, 0xf0, 0x12, 0x13, 0x12, 0x40, 0x12, 0xb3, 0x11, 0x40, 0x12, 0x23, 0xf0, 0x12, 0x13, 0x00, 0x14, 
	0x00, 0x12, 0x11, 0x33, 0x11, 0x00, 0x12, 0x03, 0x11, 0x00, 0x12, 0x11, 0x33, 0x12, 0x00, 0x13, 
	0x00, 0x12, 0x63, 0xf0, 0x03, 0x14, 0x12, 0xf0, 0x63, 0x00, 0x13, 
	0x00, 0x11, 0x11, 0x83, 0xb0, 0x11, 0x03, 0x17, 0xc0, 0x12, 0x73, 0x11, 0x00, 0x12, 
	0x00, 0x13, 0x11, 0x73, 0x12, 0x80, 0x12, 0x03, 0x19, 0x11, 0x80, 0x12, 0x73, 0x12, 0x00, 0x14, 
	0x00, 0x15, 0x12, 0x73, 0x11, 0x50, 0x03, 0x1c, 0x12, 0x50, 0x11, 0x83, 0x00, 0x16, 
	0x00, 0x17, 0x83, 0x30, 0x12, 0x03, 0x1d, 0x11, 0x30, 0x83, 0x00, 0x18, 
	0x00, 0x18, 0x11, 0x63, 0x20, 0x11, 0x03, 0x1f, 0x30, 0x63, 0x11, 0x00, 0x19, 
	0x00, 0x1a, 0x12, 0x33, 0x12, 0x20, 0x03, 0x21, 0x20, 0x12, 0x33, 0x12, 0x00, 0x1b, 
	0x00, 0x1c, 0x12, 0x13, 0x20, 0x03, 0x22, 0x12, 0x20, 0x23, 0x00, 0x1d, 
	0x00, 0x1f, 0x11, 0x03, 0x23, 0x00, 0x21, 
	0x00, 0x1f, 0x03, 0x25, 0x00, 0x20, 
	0x00, 0x1f, 0x03, 0x25, 0x00, 0x20, 
	0x00, 0x1e, 0x12, 0x03, 0x25, 0x11, 0x00, 0x1f, 
	0x00, 0x1e, 0x03, 0x27, 0x00, 0x1f, 
	0x00, 0x1e, 0x03, 0x27, 0x00, 0x1f, 
	0x00, 0x1d, 0x11, 0x03, 0x27, 0x00, 0x1f, 
	0xe0, 0xd2, 0x11, 0x10, 0x12, 0x03, 0x27, 0x20, 0x11, 0xd2, 0xf0, 
	0xe0, 0xe3, 0x10, 0x12, 0x03, 0x27, 0x11, 0x10, 0x12, 0xd3, 0x11, 0xe0, 
	0xe0, 0xe3, 0x10, 0x12, 0x03, 0x27, 0x11, 0x10, 0x12, 0xd3, 0x11, 0xe0, 
	0xe0, 0xe3, 0x10, 0x12, 0x03, 0x27, 0x11, 0x10, 0x12, 0xd3, 0x11, 0xe0, 
	0xe0, 0xd2, 0x11, 0x10, 0x12, 0x03, 0x27, 0x20, 0x11, 0xd2, 0xf0, 
	0x00, 0x1d, 0x11, 0x03, 0x27, 0x00, 0x1f, 
	0x00, 0x1e, 0x03, 0x27, 0x00, 0x1f, 
	0x00, 0x1e, 0x03, 0x27, 0x00, 0x1f, 
	0x00, 0x1e, 0x03, 0x26, 0x12, 0x00, 0x1f, 
	0x00, 0x1e, 0x11, 0x03, 0x25, 0x00, 0x20, 
	0x00, 0x1f, 0x03, 0x25, 0x00, 0x20, 
	0x00, 0x1f, 0x11, 0x03, 0x23, 0x00, 0x21, 
	0x00, 0x1c, 0x12, 0x13, 0x20, 0x03, 0x22, 0x12, 0x20, 0x13, 0x12, 0x00, 0x1d, 
	0x00, 0x1a, 0x12, 0x33, 0x20, 0x11, 0x03, 0x21, 0x20, 0x12, 0x33, 0x11, 0x00, 0x1b, 
	0x00, 0x18, 0x11, 0x63, 0x20, 0x12, 0x03, 0x1f, 0x11, 0x20, 0x63, 0x00, 0x1a, 
	0x00, 0x17, 0x83, 0x30, 0x03, 0x1e, 0x12, 0x20, 0x11, 0x83, 0x00, 0x18, 
	0x00, 0x15, 0x12, 0x73, 0x11, 0x50, 0x03, 0x1d, 0x50, 0x12, 0x73, 0x12, 0x00, 0x16, 
	0x00, 0x13, 0x11, 0x73, 0x12, 0x80, 0x03, 0x1a, 0x12, 0x80, 0x12, 0x73, 0x11, 0x00, 0x14, 
	0x00, 0x12, 0x83, 0xb0, 0x12, 0x03, 0x17, 0x11, 0xb0, 0x83, 0x00, 0x13, 
	0x00, 0x11, 0x11, 0x63, 0xf0, 0x03, 0x15, 0xe0, 0x11, 0x63, 0x00, 0x13, 
	0x00, 0x12, 0x43, 0x11, 0x00, 0x11, 0x11, 0x03, 0x11, 0x00, 0x12, 0x12, 0x33, 0x12, 0x00, 0x13, 
	0x00, 0x13, 0x13, 0x12, 0xf0, 0x23, 0x11, 0x40, 0xc3, 0x12, 0x40, 0x11, 0x13, 0x12, 0xf0, 0x23, 0x00, 0x14, 
	0x00, 0x23, 0x11, 0x43, 0x60, 0x11, 0x52, 0x70, 0x43, 0x00, 0x25, 
	0x00, 0x23, 0x43, 0x12, 0x00, 0x13, 0x53, 0x00, 0x24, 
	0x00, 0x22, 0x12, 0x43, 0x80, 0x11, 0x32, 0x90, 0x43, 0x11, 0x00, 0x23, 
	0x00, 0x22, 0x43, 0x12, 0x80, 0x12, 0x33, 0x11, 0x80, 0x12, 0x43, 0x00, 0x23, 
	0x00, 0x21, 0x53, 0x90, 0x12, 0x33, 0x11, 0x90, 0x43, 0x12, 0x00, 0x22, 
	0x00, 0x21, 0x43, 0x11, 0x90, 0x12, 0x33, 0x11, 0x90, 0x12, 0x43, 0x00, 0x22, 
	0x00, 0x20, 0x53, 0xa0, 0x12, 0x33, 0x11, 0xa0, 0x53, 0x00, 0x21, 
	0x00, 0x1f, 0x11, 0x43, 0xb0, 0x12, 0x33, 0x11, 0xa0, 0x11, 0x43, 0x00, 0x21, 
	0x00, 0x1f, 0x43, 0x12, 0xb0, 0x12, 0x33, 0x11, 0xb0, 0x53, 0x00, 0x20, 
	0x00, 0x1e, 0x12, 0x43, 0xc0, 0x12, 0x33, 0x11, 0xc0, 0x43, 0x11, 0x00, 0x1f, 
	0x00, 0x1e, 0x43, 0x11, 0xc0, 0x12, 0x33, 0x11, 0xc0, 0x12, 0x43, 0x00, 0x1f, 
	0x00, 0x1f, 0x33, 0xd0, 0x12, 0x33, 0x11, 0xd0, 0x33, 0x00, 0x20, 
	0x00, 0x20, 0x11, 0xe0, 0x12, 0x33, 0x11, 0xd0, 0x11, 0x00, 0x22, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x2f, 0x12, 0x33, 0x11, 0x00, 0x30, 
	0x00, 0x2f, 0x11, 0x32, 0x00, 0x31, 
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
	
}; // 100x100 Bitmap (10000 pixels) in 848 bytes

const uint16_t clear_day_RLEBM_palette[] PROGMEM_LATE = 
{
	// Palette has 4 entries
	0x0000, 0x3a02, 0xad41, 0xffe0, 
};



//  Some platforms don't fully implement the pgmspace.h interface.  Assume ordinary
//  addresses will do.
#if not defined pgm_get_far_address
#define pgm_get_far_address(x) ((uint32_t)(&(x)))
#endif

//  Returns the info needed to render the bitmap.
inline void get_clear_day_RLEBM(
	RLEBitmapInfo &bmInfo)
{
	bmInfo.pRLEBM_data_far = pgm_get_far_address(clear_day_RLEBM_data);
	bmInfo.pRLEBM_palette_far = pgm_get_far_address(clear_day_RLEBM_palette);
	bmInfo.width = 100;
	bmInfo.height = 100;
	bmInfo.flags = 0x01;
}
