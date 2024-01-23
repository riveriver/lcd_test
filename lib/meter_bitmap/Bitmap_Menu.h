#include <Arduino.h>
#ifndef OLED_Bitmap_Menu_H
#define OLED_Bitmap_Menu_H

// 'V', 64x128px
const unsigned char Menu_V [] PROGMEM = {
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 
	0x01, 0x80, 0x01, 0x80, 0x00, 0x00, 0x00, 0x40, 0x01, 0xc0, 0x03, 0x80, 0x00, 0x00, 0x40, 0x40, 
	0x01, 0xe0, 0x07, 0x80, 0x00, 0x00, 0xe0, 0x40, 0x01, 0xf0, 0x0f, 0x80, 0x00, 0x00, 0xf0, 0x41, 
	0x01, 0xf8, 0x1f, 0x80, 0x00, 0x00, 0xf8, 0x40, 0x01, 0xfc, 0x3f, 0x80, 0x00, 0x00, 0x7c, 0x40, 
	0x01, 0xfe, 0x7f, 0x80, 0x80, 0x00, 0x3e, 0x40, 0x01, 0xff, 0xff, 0x80, 0xc0, 0x01, 0x1f, 0x40, 
	0x81, 0xff, 0xff, 0x81, 0xe0, 0x83, 0x0f, 0x40, 0xc1, 0xff, 0xff, 0x83, 0xc0, 0xc7, 0x07, 0x40, 
	0xe1, 0xff, 0xff, 0x87, 0x80, 0xef, 0x03, 0x40, 0xf1, 0xff, 0xff, 0x8f, 0x00, 0xff, 0x01, 0x40, 
	0x81, 0x00, 0x00, 0x81, 0x00, 0xfe, 0x00, 0x40, 0x81, 0x00, 0x00, 0x81, 0x00, 0x7c, 0x00, 0x40, 
	0x81, 0x00, 0x00, 0x81, 0x00, 0x38, 0x00, 0x40, 0x81, 0xe0, 0x07, 0x81, 0x00, 0x00, 0x00, 0x40, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0x00, 0x00, 0x40, 0x81, 0xe0, 0x07, 0x81, 0x00, 0x00, 0x00, 0x40, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0x00, 0x00, 0x40, 0x81, 0xe0, 0x07, 0x81, 0xf8, 0xff, 0xff, 0x47, 
	0x81, 0xe0, 0x07, 0x81, 0xf8, 0xff, 0xff, 0x47, 0x81, 0xe0, 0x07, 0x81, 0xf8, 0xff, 0xff, 0x47, 
	0x81, 0xe0, 0x07, 0x81, 0xf8, 0xff, 0xff, 0x47, 0x81, 0xff, 0xff, 0x81, 0x00, 0x00, 0x00, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x40, 
	0x01, 0x80, 0x03, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x01, 0x80, 0x07, 0x80, 0x00, 0xf0, 0x03, 0x40, 
	0x01, 0x80, 0x0f, 0x80, 0x00, 0xcc, 0x0c, 0x40, 0x01, 0x80, 0x1f, 0x80, 0x00, 0xc2, 0x10, 0x40, 
	0x01, 0x84, 0x3b, 0x80, 0x00, 0xf1, 0x23, 0x40, 0x01, 0x8e, 0x73, 0x80, 0x80, 0xc8, 0x44, 0x40, 
	0x01, 0x9c, 0x3b, 0x80, 0x40, 0x04, 0x88, 0x40, 0x01, 0xb8, 0x1f, 0x80, 0x40, 0x02, 0x90, 0x40, 
	0x01, 0xf0, 0x0f, 0x80, 0x20, 0x01, 0x22, 0x41, 0x01, 0xe0, 0x07, 0x80, 0x20, 0x81, 0x21, 0x41, 
	0x01, 0xc0, 0x03, 0x80, 0xf8, 0xc3, 0xf1, 0x47, 0x01, 0xc0, 0x03, 0x80, 0xf8, 0xe3, 0xf0, 0x47, 
	0x01, 0xe0, 0x07, 0x80, 0x20, 0x61, 0x20, 0x41, 0x01, 0xf0, 0x0f, 0x80, 0x20, 0x11, 0x20, 0x41, 
	0x01, 0xb8, 0x1f, 0x80, 0x40, 0x02, 0x90, 0x40, 0x01, 0x9c, 0x3b, 0x80, 0x40, 0x04, 0x88, 0x40, 
	0x01, 0x8e, 0x73, 0x80, 0x80, 0xc8, 0x44, 0x40, 0x01, 0x84, 0x3b, 0x80, 0x00, 0xf1, 0x23, 0x40, 
	0x01, 0x80, 0x1f, 0x80, 0x00, 0xc2, 0x10, 0x40, 0x01, 0x80, 0x0f, 0x80, 0x00, 0xcc, 0x0c, 0x40, 
	0x01, 0x80, 0x07, 0x80, 0x00, 0xf0, 0x03, 0x40, 0x01, 0x80, 0x03, 0x80, 0x00, 0xc0, 0x00, 0x40, 
	0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 
	0x01, 0xe0, 0x07, 0x80, 0x00, 0x08, 0x00, 0x40, 0x01, 0xf8, 0x1f, 0x80, 0x00, 0x1c, 0x00, 0x40, 
	0x01, 0x1e, 0x78, 0x80, 0x00, 0x3e, 0x00, 0x40, 0x01, 0x07, 0xe0, 0x80, 0x00, 0x7f, 0x00, 0x40, 
	0x81, 0x03, 0xc0, 0x81, 0x00, 0x1c, 0x00, 0x40, 0xc1, 0x01, 0x80, 0x83, 0x00, 0x1c, 0x00, 0x40, 
	0xc1, 0x00, 0x00, 0x83, 0x00, 0x1c, 0x00, 0x40, 0x61, 0x00, 0x00, 0x86, 0x00, 0x1c, 0x00, 0x40, 
	0x61, 0x00, 0x00, 0x86, 0x00, 0x1c, 0x00, 0x40, 0x31, 0x00, 0x00, 0x8c, 0x00, 0x1c, 0x00, 0x40, 
	0x31, 0x00, 0x00, 0x8c, 0x00, 0x1c, 0x00, 0x40, 0x31, 0x80, 0x01, 0x8c, 0x00, 0x1c, 0x00, 0x40, 
	0x31, 0x80, 0x01, 0x8c, 0x00, 0x1c, 0x80, 0x40, 0x31, 0x00, 0x00, 0x8c, 0x00, 0x1c, 0x80, 0x41, 
	0x31, 0x00, 0x00, 0x8c, 0x00, 0xfc, 0xff, 0x43, 0x61, 0x00, 0x00, 0x86, 0x00, 0xfe, 0xff, 0x47, 
	0x61, 0x00, 0x00, 0x86, 0x00, 0xff, 0xff, 0x43, 0xc1, 0x00, 0x00, 0x83, 0x80, 0x0f, 0x80, 0x41, 
	0xc1, 0x01, 0x80, 0x83, 0xc8, 0x07, 0x80, 0x40, 0x81, 0x03, 0xc0, 0x81, 0xf8, 0x03, 0x00, 0x40, 
	0x01, 0x07, 0xe0, 0x80, 0xf8, 0x01, 0x00, 0x40, 0x01, 0x1e, 0x78, 0x80, 0xf8, 0x00, 0x00, 0x40, 
	0x01, 0xf8, 0x1f, 0x80, 0xf8, 0x00, 0x00, 0x40, 0x01, 0xe0, 0x07, 0x80, 0xf8, 0x01, 0x00, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x0c, 0x0c, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x0b, 0x34, 0x40, 0x01, 0x00, 0x00, 0x80, 0x80, 0x10, 0x42, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x80, 0xf0, 0x43, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x01, 0x20, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x01, 0x20, 0x40, 0xf1, 0xff, 0xff, 0x83, 0x80, 0x00, 0x40, 0x40, 
	0x11, 0x00, 0x00, 0x82, 0x80, 0x00, 0x40, 0x40, 0x11, 0x00, 0x00, 0x82, 0x40, 0xe0, 0x81, 0x40, 
	0x11, 0x00, 0x00, 0x8e, 0x78, 0x10, 0x82, 0x47, 0x11, 0x00, 0x00, 0x8e, 0x08, 0x08, 0x04, 0x44, 
	0x11, 0x00, 0x00, 0x8e, 0x08, 0x08, 0x04, 0x44, 0x11, 0x00, 0x00, 0x8e, 0x08, 0x08, 0x04, 0x44, 
	0x11, 0x00, 0x00, 0x8e, 0x08, 0x08, 0x04, 0x44, 0x11, 0x00, 0x00, 0x8e, 0x78, 0x10, 0x82, 0x47, 
	0x11, 0x00, 0x00, 0x82, 0x40, 0xe0, 0x81, 0x40, 0x11, 0x00, 0x00, 0x82, 0x80, 0x00, 0x40, 0x40, 
	0xf1, 0xff, 0xff, 0x83, 0x80, 0x00, 0x40, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x01, 0x20, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x01, 0x20, 0x40, 0x01, 0x00, 0x00, 0x80, 0x80, 0xf0, 0x43, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x80, 0x10, 0x42, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x0b, 0x34, 0x40, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x0c, 0x0c, 0x40, 0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x20, 0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'H', 128x64px
const unsigned char Menu_H [] PROGMEM = {
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x03, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x08, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0x80, 0x01, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x00, 0xf8, 0x01, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xc0, 0x03, 0x80, 0x00, 0xc0, 0x01, 0x40, 0x00, 0xfe, 0x07, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xe0, 0x07, 0x80, 0x00, 0xc0, 0x03, 0x40, 0x80, 0x07, 0x1e, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xf0, 0x0f, 0x80, 0x00, 0xc0, 0x07, 0x40, 0xc0, 0x01, 0x38, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xf8, 0x1f, 0x80, 0x00, 0xc0, 0x0f, 0x40, 0xe0, 0x00, 0x70, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xfc, 0x3f, 0x80, 0x00, 0xc2, 0x1d, 0x40, 0x70, 0x00, 0xe0, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0xfe, 0x7f, 0x80, 0x00, 0xc7, 0x39, 0x40, 0x30, 0x00, 0xc0, 0x20, 0xfe, 0xff, 0x7f, 0x10, 
	0x01, 0xff, 0xff, 0x80, 0x00, 0xce, 0x1d, 0x40, 0x18, 0x00, 0x80, 0x21, 0x02, 0x00, 0x40, 0x10, 
	0x81, 0xff, 0xff, 0x81, 0x00, 0xdc, 0x0f, 0x40, 0x18, 0x00, 0x80, 0x21, 0x02, 0x00, 0x40, 0x10, 
	0xc1, 0xff, 0xff, 0x83, 0x00, 0xf8, 0x07, 0x40, 0x0c, 0x00, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0xe1, 0xff, 0xff, 0x87, 0x00, 0xf0, 0x03, 0x40, 0x0c, 0x00, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0xf1, 0xff, 0xff, 0x8f, 0x00, 0xe0, 0x01, 0x40, 0x0c, 0x60, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0x81, 0x00, 0x00, 0x81, 0x00, 0xe0, 0x01, 0x40, 0x0c, 0x60, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0x81, 0x00, 0x00, 0x81, 0x00, 0xf0, 0x03, 0x40, 0x0c, 0x00, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0x81, 0x00, 0x00, 0x81, 0x00, 0xf8, 0x07, 0x40, 0x0c, 0x00, 0x00, 0x23, 0x02, 0x00, 0xc0, 0x11, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xdc, 0x0f, 0x40, 0x18, 0x00, 0x80, 0x21, 0x02, 0x00, 0x40, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xce, 0x1d, 0x40, 0x18, 0x00, 0x80, 0x21, 0x02, 0x00, 0x40, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc7, 0x39, 0x40, 0x30, 0x00, 0xc0, 0x20, 0xfe, 0xff, 0x7f, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc2, 0x1d, 0x40, 0x70, 0x00, 0xe0, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc0, 0x0f, 0x40, 0xe0, 0x00, 0x70, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc0, 0x07, 0x40, 0xc0, 0x01, 0x38, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc0, 0x03, 0x40, 0x80, 0x07, 0x1e, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x81, 0xe0, 0x07, 0x81, 0x00, 0xc0, 0x01, 0x40, 0x00, 0xfe, 0x07, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x81, 0xff, 0xff, 0x81, 0x00, 0xc0, 0x00, 0x40, 0x00, 0xf8, 0x01, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x08, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x04, 
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x03, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x04, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x08, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x00, 0x04, 0x00, 0x20, 0x00, 0x03, 0x03, 0x10, 
	0x01, 0x00, 0x80, 0x80, 0x00, 0xc0, 0x00, 0x40, 0x00, 0x0e, 0x00, 0x20, 0xc0, 0x02, 0x0d, 0x10, 
	0x01, 0x00, 0xc0, 0x81, 0x00, 0xf0, 0x03, 0x40, 0x00, 0x1f, 0x00, 0x20, 0x20, 0x84, 0x10, 0x10, 
	0x01, 0x00, 0xe0, 0x83, 0x00, 0xcc, 0x0c, 0x40, 0x80, 0x3f, 0x00, 0x20, 0x20, 0xfc, 0x10, 0x10, 
	0x01, 0x00, 0xf0, 0x81, 0x00, 0xc2, 0x10, 0x40, 0x00, 0x0e, 0x00, 0x20, 0x40, 0x00, 0x08, 0x10, 
	0x01, 0x00, 0xf8, 0x80, 0x00, 0xf1, 0x23, 0x40, 0x00, 0x0e, 0x00, 0x20, 0x40, 0x00, 0x08, 0x10, 
	0x01, 0x01, 0x7c, 0x80, 0x80, 0xc8, 0x44, 0x40, 0x00, 0x0e, 0x00, 0x20, 0x20, 0x00, 0x10, 0x10, 
	0x81, 0x03, 0x3e, 0x80, 0x40, 0x04, 0x88, 0x40, 0x00, 0x0e, 0x00, 0x20, 0x20, 0x00, 0x10, 0x10, 
	0xc1, 0x07, 0x1f, 0x80, 0x40, 0x02, 0x90, 0x40, 0x00, 0x0e, 0x00, 0x20, 0x10, 0x78, 0x20, 0x10, 
	0x81, 0x8f, 0x0f, 0x80, 0x20, 0x01, 0x22, 0x41, 0x00, 0x0e, 0x00, 0x20, 0x1e, 0x84, 0xe0, 0x11, 
	0x01, 0xdf, 0x07, 0x80, 0x20, 0x81, 0x21, 0x41, 0x00, 0x0e, 0x00, 0x20, 0x02, 0x02, 0x01, 0x11, 
	0x01, 0xfe, 0x03, 0x80, 0xf8, 0xc3, 0xf1, 0x47, 0x00, 0x0e, 0x00, 0x20, 0x02, 0x02, 0x01, 0x11, 
	0x01, 0xfc, 0x01, 0x80, 0xf8, 0xe3, 0xf0, 0x47, 0x00, 0x0e, 0x40, 0x20, 0x02, 0x02, 0x01, 0x11, 
	0x01, 0xf8, 0x00, 0x80, 0x20, 0x61, 0x20, 0x41, 0x00, 0x0e, 0xc0, 0x20, 0x02, 0x02, 0x01, 0x11, 
	0x01, 0x70, 0x00, 0x80, 0x20, 0x11, 0x20, 0x41, 0x00, 0xfe, 0xff, 0x21, 0x1e, 0x84, 0xe0, 0x11, 
	0x01, 0x00, 0x00, 0x80, 0x40, 0x02, 0x90, 0x40, 0x00, 0xff, 0xff, 0x23, 0x10, 0x78, 0x20, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x40, 0x04, 0x88, 0x40, 0x80, 0xff, 0xff, 0x21, 0x20, 0x00, 0x10, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x80, 0xc8, 0x44, 0x40, 0xc0, 0x07, 0xc0, 0x20, 0x20, 0x00, 0x10, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0xf1, 0x23, 0x40, 0xe4, 0x03, 0x40, 0x20, 0x40, 0x00, 0x08, 0x10, 
	0xf1, 0xff, 0xff, 0x8f, 0x00, 0xc2, 0x10, 0x40, 0xfc, 0x01, 0x00, 0x20, 0x40, 0x00, 0x08, 0x10, 
	0xf1, 0xff, 0xff, 0x8f, 0x00, 0xcc, 0x0c, 0x40, 0xfc, 0x00, 0x00, 0x20, 0x20, 0xfc, 0x10, 0x10, 
	0xf1, 0xff, 0xff, 0x8f, 0x00, 0xf0, 0x03, 0x40, 0x7c, 0x00, 0x00, 0x20, 0x20, 0x84, 0x10, 0x10, 
	0xf1, 0xff, 0xff, 0x8f, 0x00, 0xc0, 0x00, 0x40, 0x7c, 0x00, 0x00, 0x20, 0xc0, 0x02, 0x0d, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x00, 0x40, 0xfc, 0x00, 0x00, 0x20, 0x00, 0x03, 0x03, 0x10, 
	0x01, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x10, 
	0x02, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x08, 
	0x04, 0x00, 0x00, 0x20, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x04, 
	0xf8, 0xff, 0xff, 0x1f, 0xfc, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 2080)
const int Menu_allArray_LEN = 2;
const unsigned char* Menu_allArray[2] = {
	Menu_V,
	Menu_H
};



const unsigned char Menu_Select [] PROGMEM = {
	0xfc, 0xff, 0xff, 0x03, 0xfe, 0xff, 0xff, 0x07, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 
	0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x03
};
#endif