#ifndef OLED_Bitmap_Page_Flatness_H
#define OLED_Bitmap_Page_Flatness_H
#include <Arduino.h>

// 'Page2', 128x64px
const unsigned char Open_Page2 [] PROGMEM = {
    0xfc, 0xf0, 0xcf, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0xf0, 0xcf, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xcc, 0x30, 0xc0, 0xf8, 0xf8, 0xf9, 0xe1, 0xc3, 0x8f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xcc, 0x30, 0xc0, 0xf8, 0xf9, 0xf9, 0xf3, 0xe7, 0xcf, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x66, 0xf0, 0xc7, 0x80, 0x61, 0x18, 0x33, 0x66, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x66, 0xf0, 0xc7, 0xf8, 0x61, 0x18, 0xf3, 0xe7, 0xc7, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x30, 0xc0, 0xfc, 0x61, 0x18, 0xf3, 0xc7, 0x8f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x33, 0x30, 0xc0, 0x8c, 0x61, 0x18, 0x33, 0x00, 0x0c, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3f, 0x30, 0xc0, 0xfc, 0xe1, 0x19, 0xf3, 0xe7, 0xcf, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3f, 0x30, 0xc0, 0xf8, 0xc1, 0x19, 0xe3, 0xe7, 0xc7, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x07, 0xe0, 0x0f, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0xe0, 0x1f, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x02, 0x60, 0x18, 0x1f, 0x3e, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x03, 0x60, 0x18, 0x3f, 0x7f, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8c, 0xff, 0xe0, 0x0f, 0x30, 0x63, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x8c, 0xff, 0xe0, 0x1f, 0x3f, 0x03, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x03, 0x60, 0x98, 0x3f, 0x03, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x02, 0x60, 0x98, 0x31, 0x63, 0x76, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x0c, 0x00, 0xe0, 0x9f, 0x3f, 0x7f, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x07, 0xe0, 0x0f, 0x3f, 0x3e, 0xc6, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x7e, 0xc0, 0x1f, 0x00, 0x0c, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x66, 0xe0, 0x1f, 0x00, 0x0c, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x66, 0x60, 0x00, 0x1f, 0x3f, 0x00, 0x70, 0x7c, 0xfc, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x66, 0x60, 0x80, 0x3f, 0x3f, 0x00, 0x38, 0xfe, 0xfc, 0xf9, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x66, 0xe0, 0x8f, 0x31, 0x0c, 0x00, 0x1c, 0xc6, 0x8c, 0x19, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0x7e, 0xc0, 0x9f, 0x3f, 0x0c, 0x00, 0x0e, 0xfe, 0x0c, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x78, 0x3c, 0x00, 0x98, 0x3f, 0x0c, 0x00, 0x07, 0xfe, 0x0c, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x30, 0x00, 0x00, 0x98, 0x01, 0x0c, 0x80, 0x03, 0x06, 0x0c, 0x18, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0xe0, 0x9f, 0x3f, 0x3c, 0x80, 0x7f, 0xfe, 0x0c, 0xf8, 0x03, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0xff, 0xe0, 0x0f, 0x3f, 0x38, 0x80, 0x7f, 0xfc, 0x0c, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 
	0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc0, 0x3f, 0x00, 0x03, 0x00, 0x0c, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xe0, 0x70, 0x80, 0x07, 0x00, 0x0c, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x60, 0x60, 0xc0, 0x8f, 0x31, 0x3f, 0x3e, 0x00, 0xe0, 0xf8, 0xf8, 0xe1, 0x03, 0x03, 0x00, 0x00, 
	0x30, 0xc0, 0xe0, 0x9c, 0x31, 0x3f, 0x7f, 0x00, 0x70, 0xfc, 0xf9, 0xf3, 0x07, 0x03, 0x00, 0x00, 
	0xfc, 0xc0, 0x60, 0x98, 0x31, 0x0c, 0x63, 0x00, 0x38, 0x8c, 0x19, 0x33, 0x06, 0x00, 0x00, 0x00, 
	0x78, 0xc0, 0xe0, 0x9f, 0x31, 0x0c, 0x63, 0x00, 0x1c, 0xfc, 0x19, 0x30, 0x06, 0x00, 0x00, 0x00, 
	0x30, 0xc0, 0xe0, 0x9f, 0x31, 0x0c, 0x63, 0x00, 0x0e, 0xfc, 0x19, 0x30, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x60, 0x98, 0x31, 0x0c, 0x63, 0x00, 0x07, 0x0c, 0x18, 0x30, 0x06, 0x03, 0x00, 0x00, 
	0x80, 0x70, 0x60, 0x98, 0x3f, 0x3c, 0x7f, 0x00, 0xff, 0xfc, 0x19, 0xf0, 0x07, 0x03, 0x00, 0x00, 
	0xc0, 0x3f, 0x60, 0x18, 0x3f, 0x38, 0x3e, 0x00, 0xff, 0xf8, 0x19, 0xe0, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// 'Lock', 13x12px
const unsigned char Lock_Lock [] PROGMEM = {
	0x00, 0x00, 0x38, 0x00, 0x7c, 0x00, 0xee, 0x00, 0xc6, 0x00, 0xc6, 0x00, 0xff, 0x01, 0xef, 0x01, 
	0xef, 0x01, 0xef, 0x01, 0xe7, 0x01, 0xff, 0x01
};
// 'Unlock', 13x12px
const unsigned char Lock_Unlock [] PROGMEM = {
	0x00, 0x07, 0x80, 0x0f, 0xc0, 0x1d, 0xc0, 0x18, 0xc0, 0x18, 0xc0, 0x00, 0xff, 0x01, 0xef, 0x01, 
	0xef, 0x01, 0xef, 0x01, 0xe7, 0x01, 0xff, 0x01
};

// 'NC', 128x64px
const unsigned char Addr_NC [] PROGMEM = {
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x0c, 0x83, 0x18, 0x06, 0x31, 0x0c, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x0c, 0x86, 0x18, 0x0c, 0x31, 0x18, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x70, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x38, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x1c, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x38, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x70, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0xa1, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0x00, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xfc, 0x81, 0x30, 0x0f, 0xe1, 0x1d, 0xe2, 0x7f, 0xc4, 0x1f, 0x08, 0xf3, 0x10, 0xde, 0x21, 0x00, 
	0xfc, 0x83, 0xb8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xfb, 0x11, 0xff, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x8e, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0xe6, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0xfc, 0x83, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x81, 0xf0, 0x0f, 0xe1, 0x1d, 0xc2, 0x3b, 0xc4, 0x1f, 0x08, 0xff, 0x10, 0xde, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x70, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x38, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x0e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x07, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xff, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x3e, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x7f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xe3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xc1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xc1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xc1, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0xe3, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x63, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00
};
// 'CP', 128x64px
const unsigned char Addr_CP [] PROGMEM = {
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x0c, 0x83, 0x18, 0x06, 0x31, 0x0c, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x0c, 0x86, 0x18, 0x0c, 0x31, 0x18, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x70, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x38, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x1c, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x38, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x70, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0xa1, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0x00, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xfc, 0x81, 0x30, 0x0f, 0xe1, 0x1d, 0xe2, 0x7f, 0xc4, 0x1f, 0x08, 0xf3, 0x10, 0xde, 0x21, 0x00, 
	0xfc, 0x83, 0xb8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xfb, 0x11, 0xff, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x8e, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0xe6, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0xfc, 0x83, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x81, 0xf0, 0x0f, 0xe1, 0x1d, 0xc2, 0x3b, 0xc4, 0x1f, 0x08, 0xff, 0x10, 0xde, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xf8, 0x87, 0xf0, 0x0f, 0xe1, 0x1f, 0xc2, 0x3f, 0xc4, 0x30, 0x88, 0x61, 0x10, 0xc3, 0x20, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x60, 0x88, 0xc1, 0x10, 0x83, 0x21, 0x00, 
	0x0c, 0x8c, 0x18, 0x18, 0x31, 0x30, 0x62, 0x60, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x0c, 0x8c, 0x18, 0x18, 0x31, 0x30, 0x62, 0x60, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x0c, 0x8c, 0x18, 0x18, 0x31, 0x30, 0x62, 0x60, 0xc4, 0x00, 0x88, 0x01, 0x10, 0x03, 0x20, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x00, 0x88, 0x01, 0x10, 0x03, 0x20, 0x00, 
	0xf8, 0x87, 0xf0, 0x0f, 0xe1, 0x1f, 0xc2, 0x3f, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0x71, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xf9, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xd9, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0xa0, 0xd9, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0xa3, 0xd9, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0xa3, 0xd9, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xd9, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xdf, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0xcf, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0x00, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x78, 0x87, 0x30, 0x0f, 0xf1, 0x07, 0xe2, 0x7f, 0x84, 0x77, 0x08, 0xf3, 0x10, 0x7f, 0x20, 0x00, 
	0xfc, 0x8f, 0xb8, 0x1f, 0xf1, 0x0f, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xfb, 0x11, 0xff, 0x20, 0x00, 
	0xcc, 0x8c, 0x98, 0x19, 0x81, 0x1d, 0x62, 0x66, 0xc4, 0xcc, 0x88, 0x99, 0x11, 0xd8, 0x21, 0x00, 
	0xcc, 0x8c, 0x98, 0x19, 0x81, 0x39, 0x62, 0x66, 0xc4, 0xcc, 0x88, 0x99, 0x11, 0x98, 0x23, 0x00, 
	0xcc, 0x8c, 0x98, 0x19, 0x81, 0x1d, 0x62, 0x66, 0xc4, 0xcc, 0x88, 0x99, 0x11, 0xd8, 0x21, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x0f, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x20, 0x00, 
	0x78, 0x87, 0xf0, 0x0f, 0xf1, 0x07, 0xc2, 0x3b, 0x84, 0x77, 0x08, 0xff, 0x10, 0x7f, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00
};
// 'CS', 128x64px
const unsigned char Addr_CS [] PROGMEM = {
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x0c, 0x83, 0x18, 0x06, 0x31, 0x0c, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x0c, 0x86, 0x18, 0x0c, 0x31, 0x18, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xff, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x70, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x38, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x1c, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0x23, 0x38, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x70, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0xa1, 0xff, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0x00, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xfc, 0x81, 0x30, 0x0f, 0xe1, 0x1d, 0xe2, 0x7f, 0xc4, 0x1f, 0x08, 0xf3, 0x10, 0xde, 0x21, 0x00, 
	0xfc, 0x83, 0xb8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xfb, 0x11, 0xff, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x8e, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0xe6, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0xfc, 0x83, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x81, 0xf0, 0x0f, 0xe1, 0x1d, 0xc2, 0x3b, 0xc4, 0x1f, 0x08, 0xff, 0x10, 0xde, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0x0c, 0x83, 0x18, 0x06, 0x31, 0x0c, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x0c, 0x86, 0x18, 0x0c, 0x31, 0x18, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0xfc, 0x8f, 0xf8, 0x1f, 0xf1, 0x3f, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0x62, 0x60, 0xc4, 0xc0, 0x88, 0x81, 0x11, 0x03, 0x23, 0x00, 
	0x0c, 0x80, 0x18, 0x00, 0x31, 0x00, 0xe2, 0x7f, 0xc4, 0xff, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0xc2, 0x3f, 0x84, 0x7f, 0x08, 0xff, 0x10, 0xfe, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0x20, 0x00, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0x71, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xf9, 
	0xc0, 0x80, 0x80, 0x01, 0x01, 0x03, 0x02, 0x06, 0x04, 0x0c, 0x08, 0x18, 0x10, 0x30, 0xa0, 0xd9, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0xa0, 0xd9, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0xa3, 0xd9, 
	0xe0, 0x8f, 0xc0, 0x1f, 0x81, 0x3f, 0x02, 0x7f, 0x04, 0xfe, 0x08, 0xfc, 0x11, 0xf8, 0xa3, 0xd9, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xd9, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0xa0, 0xdf, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0xcf, 
	0xfc, 0x87, 0xf8, 0x0f, 0xf1, 0x1f, 0xe2, 0x3f, 0xc4, 0x7f, 0x88, 0xff, 0x10, 0xff, 0x21, 0x00, 
	0x60, 0x80, 0xc0, 0x00, 0x81, 0x01, 0x02, 0x03, 0x04, 0x06, 0x08, 0x0c, 0x10, 0x18, 0x20, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 
	0xfc, 0x81, 0x30, 0x0f, 0xe1, 0x1d, 0xe2, 0x7f, 0xc4, 0x1f, 0x08, 0xf3, 0x10, 0xde, 0x21, 0x00, 
	0xfc, 0x83, 0xb8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xfb, 0x11, 0xff, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x8e, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0xe6, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0x60, 0x87, 0x98, 0x19, 0x31, 0x33, 0x62, 0x66, 0x04, 0x76, 0x88, 0x99, 0x11, 0x33, 0x23, 0x00, 
	0xfc, 0x83, 0xf8, 0x1f, 0xf1, 0x3f, 0xe2, 0x7f, 0xc4, 0x3f, 0x88, 0xff, 0x11, 0xff, 0x23, 0x00, 
	0xfc, 0x81, 0xf0, 0x0f, 0xe1, 0x1d, 0xc2, 0x3b, 0xc4, 0x1f, 0x08, 0xff, 0x10, 0xde, 0x21, 0x00, 
	0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3120)
const int Addr_allArray_LEN = 3;
const unsigned char* Addr_allArray[3] = {
	Addr_CP,
	Addr_CS,
	Addr_NC
};



// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 96)
const int Lock_allArray_LEN = 2;
const unsigned char* Lock_allArray[2] = {
	Lock_Lock,
	Lock_Unlock
};




#endif