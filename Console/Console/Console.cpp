// Console.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "amfDecoder.h"
#include "role.h"
unsigned char _data[30000] = {
	0x00, 0x00, 0x00, 0x00, 0x09, 0x8C, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x07, 0x72, 0x65, 0x63, 0x65, 0x69, 0x76, 0x65, 0x05, 0x05, 0x11, 0x0A, 0x07, 0x07, 0x44, 0x53, 0x41, 0x3F, 0x0A, 0x84, 0x73, 0x47, 0x63, 0x6F, 0x6D, 0x2E, 0x72, 0x69, 0x6F, 0x74, 0x67, 0x61, 0x6D, 0x65, 0x73, 0x2E, 0x70, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x2E, 0x67, 0x61, 0x6D, 0x65, 0x2E, 0x47, 0x61, 0x6D, 0x65, 0x44, 0x54, 0x4F, 0x23, 0x73, 0x70, 0x65, 0x63, 0x74, 0x61, 0x74, 0x6F, 0x72, 0x73, 0x41, 0x6C, 0x6C, 0x6F, 0x77, 0x65, 0x64, 0x17, 0x70, 0x61, 0x73, 0x73, 0x77, 0x6F, 0x72, 0x64, 0x53, 0x65, 0x74, 0x45, 0x70, 0x72, 0x61, 0x63, 0x74, 0x69, 0x63, 0x65, 0x47, 0x61, 0x6D, 0x65, 0x52, 0x65, 0x77, 0x61, 0x72, 0x64, 0x73, 0x44, 0x69, 0x73, 0x61, 0x62, 0x6C, 0x65, 0x64, 0x52, 0x65, 0x61, 0x73, 0x6F, 0x6E, 0x73, 0x11, 0x67, 0x61, 0xC3, 0x6D, 0x65, 0x54, 0x79, 0x70, 0x65, 0x21, 0x67, 0x61, 0x6D, 0x65, 0x54, 0x79, 0x70, 0x65, 0x43, 0x6F, 0x6E, 0x66, 0x69, 0x67, 0x49, 0x64, 0x13, 0x67, 0x61, 0x6D, 0x65, 0x53, 0x74, 0x61, 0x74, 0x65, 0x13, 0x6F, 0x62, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x73, 0x29, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73, 0x4F, 0x66, 0x50, 0x61, 0x72, 0x74, 0x69, 0x63, 0x69, 0x70, 0x61, 0x6E, 0x74, 0x73, 0x05, 0x69, 0x64, 0x19, 0x6F, 0x77, 0x6E, 0x65, 0x72, 0x53, 0x75, 0x6D, 0x6D, 0x61, 0x72, 0x79, 0x25, 0x74, 0x65, 0x61, 0x6D, 0x54, 0x77, 0x6F, 0x50, 0x69, 0x63, 0x6B, 0x4F, 0x75, 0x74, 0x63, 0x6F, 0x6D, 0x65, 0x0F, 0x74, 0x65, 0x61, 0x6D, 0x54, 0x77, 0x6F, 0x1F, 0x62, 0x61, 0x6E, 0x6E, 0x65, 0x64, 0x43, 0x68, 0x61, 0x6D, 0x70, 0x69, 0x6F, 0x6E, 0x73, 0x17, 0x64, 0x61, 0x74, 0x61, 0xC3, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x11, 0x72, 0x6F, 0x6F, 0x6D, 0x4E, 0x61, 0x6D, 0x65, 0x09, 0x6E, 0x61, 0x6D, 0x65, 0x1D, 0x73, 0x70, 0x65, 0x63, 0x74, 0x61, 0x74, 0x6F, 0x72, 0x44, 0x65, 0x6C, 0x61, 0x79, 0x0F, 0x74, 0x65, 0x61, 0x6D, 0x4F, 0x6E, 0x65, 0x27, 0x74, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x74, 0x65, 0x64, 0x43, 0x6F, 0x6E, 0x64, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x1B, 0x71, 0x75, 0x65, 0x75, 0x65, 0x54, 0x79, 0x70, 0x65, 0x4E, 0x61, 0x6D, 0x65, 0x21, 0x66, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x64, 0x47, 0x61, 0x6D, 0x65, 0x49, 0x6E, 0x66, 0x6F, 0x17, 0x70, 0x61, 0x73, 0x73, 0x62, 0x61, 0x63, 0x6B, 0x55, 0x72, 0x6C, 0x19, 0x72, 0x6F, 0x6F, 0x6D, 0x50, 0x61, 0x73, 0x73, 0x77, 0x6F, 0x72, 0x64, 0x1D, 0x6F, 0x70, 0x74, 0x69, 0x6D, 0x69, 0x73, 0xC3, 0x74, 0x69, 0x63, 0x4C, 0x6F, 0x63, 0x6B, 0x25, 0x74, 0x65, 0x61, 0x6D, 0x4F, 0x6E, 0x65, 0x50, 0x69, 0x63, 0x6B, 0x4F, 0x75, 0x74, 0x63, 0x6F, 0x6D, 0x65, 0x1B, 0x6D, 0x61, 0x78, 0x4E, 0x75, 0x6D, 0x50, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x73, 0x1B, 0x71, 0x75, 0x65, 0x75, 0x65, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x33, 0x74, 0x65, 0x72, 0x6D, 0x69, 0x6E, 0x61, 0x74, 0x65, 0x64, 0x43, 0x6F, 0x6E, 0x64, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x15, 0x66, 0x75, 0x74, 0x75, 0x72, 0x65, 0x44, 0x61, 0x74, 0x61, 0x11, 0x67, 0x61, 0x6D, 0x65, 0x4D, 0x6F, 0x64, 0x65, 0x15, 0x65, 0x78, 0x70, 0x69, 0x72, 0x79, 0x54, 0x69, 0x6D, 0x65, 0x0B, 0x6D, 0x61, 0x70, 0x49, 0x64, 0x11, 0x62, 0x61, 0x6E, 0x4F, 0x72, 0x64, 0x65, 0x72, 0x1F, 0x67, 0xC3, 0x61, 0x6D, 0x65, 0x53, 0x74, 0x61, 0x74, 0x65, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x11, 0x70, 0x69, 0x63, 0x6B, 0x54, 0x75, 0x72, 0x6E, 0x31, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x43, 0x68, 0x61, 0x6D, 0x70, 0x69, 0x6F, 0x6E, 0x53, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x19, 0x67, 0x61, 0x6D, 0x65, 0x4D, 0x75, 0x74, 0x61, 0x74, 0x6F, 0x72, 0x73, 0x23, 0x6A, 0x6F, 0x69, 0x6E, 0x54, 0x69, 0x6D, 0x65, 0x72, 0x44, 0x75, 0x72, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x25, 0x70, 0x61, 0x73, 0x73, 0x62, 0x61, 0x63, 0x6B, 0x44, 0x61, 0x74, 0x61, 0x50, 0x61, 0x63, 0x6B, 0x65, 0x74, 0x06, 0x09, 0x4E, 0x4F, 0x4E, 0x45, 0x02, 0x0A, 0x07, 0x43, 0x66, 0x6C, 0x65, 0x78, 0x2E, 0x6D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x69, 0x6E, 0x67, 0x2E, 0x69, 0x6F, 0x2E, 0x41, 0x72, 0xC3, 0x72, 0x61, 0x79, 0x43, 0x6F, 0x6C, 0x6C, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x09, 0x01, 0x01, 0x06, 0x17, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x5F, 0x47, 0x41, 0x4D, 0x45, 0x04, 0x01, 0x06, 0x19, 0x43, 0x48, 0x41, 0x4D, 0x50, 0x5F, 0x53, 0x45, 0x4C, 0x45, 0x43, 0x54, 0x0A, 0x09, 0x09, 0x01, 0x01, 0x01, 0x05, 0x41, 0xEA, 0x3D, 0x58, 0x85, 0x80, 0x00, 0x00, 0x01, 0x01, 0x0A, 0x09, 0x09, 0x0B, 0x01, 0x0A, 0x73, 0x63, 0x63, 0x6F, 0x6D, 0x2E, 0x72, 0x69, 0x6F, 0x74, 0x67, 0x61, 0x6D, 0x65, 0x73, 0x2E, 0x70, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x2E, 0x67, 0x61, 0x6D, 0x65, 0x2E, 0x4F, 0x62, 0x66, 0x75, 0x73, 0x63, 0x61, 0x74, 0x65, 0x64, 0x50, 0x61, 0x72, 0x74, 0x69, 0x63, 0x69, 0x70, 0x61, 0x6E, 0x74, 0x0D, 0x62, 0x61, 0x64, 0x67, 0x65, 0x73, 0x0B, 0x69, 0xC3, 0x6E, 0x64, 0x65, 0x78, 0x1E, 0x1B, 0x63, 0x6C, 0x69, 0x65, 0x6E, 0x74, 0x49, 0x6E, 0x53, 0x79, 0x6E, 0x63, 0x68, 0x19, 0x67, 0x61, 0x6D, 0x65, 0x55, 0x6E, 0x69, 0x71, 0x75, 0x65, 0x49, 0x64, 0x11, 0x70, 0x69, 0x63, 0x6B, 0x4D, 0x6F, 0x64, 0x65, 0x3C, 0x04, 0x00, 0x04, 0x06, 0x04, 0x00, 0x02, 0x04, 0x06, 0x04, 0x01, 0x01, 0x0A, 0x0D, 0x04, 0x00, 0x04, 0x07, 0x04, 0x00, 0x02, 0x04, 0x07, 0x04, 0x01, 0x01, 0x0A, 0x0D, 0x04, 0x00, 0x04, 0x08, 0x04, 0x00, 0x02, 0x04, 0x08, 0x04, 0x01, 0x01, 0x0A, 0x0D, 0x04, 0x00, 0x04, 0x09, 0x04, 0x00, 0x02, 0x04, 0x09, 0x04, 0x01, 0x01, 0x0A, 0x0D, 0x04, 0x00, 0x04, 0x0A, 0x04, 0x00, 0x02, 0x04, 0x0A, 0x04, 0x01, 0x01, 0x0A, 0x09, 0x09, 0x01, 0x01, 0x04, 0x00, 0x06, 0x49, 0x47, 0x76, 0x42, 0x30, 0x4D, 0x41, 0x6D, 0x63, 0x41, 0xC3, 0x31, 0x65, 0x78, 0x75, 0x41, 0x35, 0x68, 0x54, 0x7A, 0x57, 0x34, 0x61, 0x49, 0x76, 0x4B, 0x2B, 0x6A, 0x6F, 0x4A, 0x30, 0x79, 0x30, 0x45, 0x40, 0x73, 0x65, 0x63, 0x06, 0x01, 0x04, 0x00, 0x0A, 0x09, 0x09, 0x0B, 0x01, 0x0A, 0x83, 0x63, 0x5B, 0x63, 0x6F, 0x6D, 0x2E, 0x72, 0x69, 0x6F, 0x74, 0x67, 0x61, 0x6D, 0x65, 0x73, 0x2E, 0x70, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x2E, 0x67, 0x61, 0x6D, 0x65, 0x2E, 0x50, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x50, 0x61, 0x72, 0x74, 0x69, 0x63, 0x69, 0x70, 0x61, 0x6E, 0x74, 0x13, 0x61, 0x63, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x49, 0x64, 0x17, 0x71, 0x75, 0x65, 0x75, 0x65, 0x52, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x1B, 0x62, 0x6F, 0x74, 0x44, 0x69, 0x66, 0x66, 0x69, 0x63, 0x75, 0x6C, 0x74, 0x79, 0x0B, 0x6D, 0x69, 0x6E, 0x6F, 0x72, 0x0D, 0xC3, 0x6C, 0x6F, 0x63, 0x61, 0x6C, 0x65, 0x2B, 0x6C, 0x61, 0x73, 0x74, 0x53, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x65, 0x64, 0x53, 0x6B, 0x69, 0x6E, 0x49, 0x6E, 0x64, 0x65, 0x78, 0x23, 0x67, 0x61, 0x6D, 0x65, 0x43, 0x75, 0x73, 0x74, 0x6F, 0x6D, 0x69, 0x7A, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x13, 0x70, 0x61, 0x72, 0x74, 0x6E, 0x65, 0x72, 0x49, 0x64, 0x1B, 0x70, 0x72, 0x6F, 0x66, 0x69, 0x6C, 0x65, 0x49, 0x63, 0x6F, 0x6E, 0x49, 0x64, 0x1F, 0x72, 0x61, 0x6E, 0x6B, 0x65, 0x64, 0x54, 0x65, 0x61, 0x6D, 0x47, 0x75, 0x65, 0x73, 0x74, 0x15, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x49, 0x64, 0x17, 0x76, 0x6F, 0x74, 0x65, 0x72, 0x52, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x1E, 0x19, 0x73, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x65, 0x64, 0x52, 0x6F, 0x6C, 0x65, 0x64, 0x23, 0x74, 0x65, 0x61, 0xC3, 0x6D, 0x50, 0x61, 0x72, 0x74, 0x69, 0x63, 0x69, 0x70, 0x61, 0x6E, 0x74, 0x49, 0x64, 0x21, 0x74, 0x69, 0x6D, 0x65, 0x41, 0x64, 0x64, 0x65, 0x64, 0x54, 0x6F, 0x51, 0x75, 0x65, 0x75, 0x65, 0x5E, 0x2B, 0x6F, 0x72, 0x69, 0x67, 0x69, 0x6E, 0x61, 0x6C, 0x41, 0x63, 0x63, 0x6F, 0x75, 0x6E, 0x74, 0x4E, 0x75, 0x6D, 0x62, 0x65, 0x72, 0x29, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x49, 0x6E, 0x74, 0x65, 0x72, 0x6E, 0x61, 0x6C, 0x4E, 0x61, 0x6D, 0x65, 0x1F, 0x61, 0x64, 0x6A, 0x75, 0x73, 0x74, 0x6D, 0x65, 0x6E, 0x74, 0x46, 0x6C, 0x61, 0x67, 0x73, 0x13, 0x74, 0x65, 0x61, 0x6D, 0x4F, 0x77, 0x6E, 0x65, 0x72, 0x3C, 0x5C, 0x15, 0x74, 0x65, 0x61, 0x6D, 0x52, 0x61, 0x74, 0x69, 0x6E, 0x67, 0x48, 0x60, 0x19, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x4E, 0x61, 0x6D, 0xC3, 0x65, 0x25, 0x6F, 0x72, 0x69, 0x67, 0x69, 0x6E, 0x61, 0x6C, 0x50, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x49, 0x64, 0x21, 0x73, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x65, 0x64, 0x50, 0x6F, 0x73, 0x69, 0x74, 0x69, 0x6F, 0x6E, 0x05, 0x41, 0xEC, 0xB9, 0x04, 0xEF, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x52, 0x02, 0x01, 0x04, 0x00, 0x0A, 0x03, 0x01, 0x06, 0x01, 0x04, 0x8A, 0x15, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x04, 0x01, 0x01, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xAF, 0x89, 0x70, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x25, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x33, 0x38, 0x35, 0x35, 0x30, 0x39, 0x39, 0x37, 0x36, 0x38, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC3, 0x00, 0x02, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x02, 0x06, 0x01, 0x01, 0x01, 0x0A, 0x11, 0x05, 0x41, 0xF2, 0x46, 0x28, 0x7A, 0xF0, 0x00, 0x00, 0x04, 0x00, 0x06, 0x52, 0x02, 0x01, 0x04, 0x00, 0x0A, 0x15, 0x06, 0x01, 0x04, 0x8A, 0x5E, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x04, 0x01, 0x01, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xB0, 0x19, 0x70, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x25, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x34, 0x39, 0x30, 0x35, 0x34, 0x30, 0x34, 0x33, 0x33, 0x35, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x02, 0x06, 0x01, 0x01, 0x01, 0x0A, 0x11, 0x05, 0x41, 0xF4, 0x89, 0x7D, 0xC3, 0xC3, 0xB0, 0x00, 0x00, 0x04, 0x00, 0x06, 0x52, 0x02, 0x01, 0x04, 0x00, 0x0A, 0x15, 0x06, 0x01, 0x04, 0x8A, 0x5F, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x04, 0x01, 0x01, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xAF, 0xFD, 0xC0, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x25, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x35, 0x35, 0x31, 0x32, 0x38, 0x37, 0x39, 0x31, 0x36, 0x33, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x02, 0x06, 0x01, 0x01, 0x01, 0x0A, 0x11, 0x05, 0x41, 0xE6, 0x0B, 0xBD, 0x57, 0x40, 0x00, 0x00, 0x04, 0x00, 0x06, 0x52, 0x02, 0x01, 0x04, 0x00, 0x0A, 0x15, 0x06, 0x01, 0x04, 0x8A, 0x15, 0x02, 0x05, 0x41, 0xE6, 0xC3, 0x0B, 0xBD, 0x57, 0x40, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x04, 0x01, 0x01, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xB0, 0x82, 0xA0, 0x00, 0x04, 0x00, 0x05, 0x41, 0xE6, 0x0B, 0xBD, 0x57, 0x40, 0x00, 0x00, 0x06, 0x31, 0xE8, 0xAF, 0xB7, 0xE7, 0xBB, 0x99, 0xE6, 0x88, 0x91, 0xE4, 0xB8, 0x80, 0xE4, 0xB8, 0xAA, 0xE7, 0x91, 0x9E, 0xE6, 0x96, 0x87, 0xE4, 0xB8, 0xB6, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x02, 0x06, 0x81, 0x1E, 0x06, 0x07, 0x48, 0x4E, 0x31, 0x01, 0x0A, 0x11, 0x05, 0x41, 0xF2, 0x2E, 0x8F, 0x19, 0xF0, 0x00, 0x00, 0x04, 0x00, 0x06, 0x52, 0x02, 0x01, 0x04, 0x00, 0x0A, 0x15, 0x06, 0x01, 0x04, 0x8A, 0x65, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0xC3, 0x04, 0x01, 0x01, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xB1, 0x21, 0x30, 0x00, 0x04, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x25, 0x73, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0x34, 0x38, 0x38, 0x30, 0x36, 0x35, 0x38, 0x38, 0x34, 0x37, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x01, 0x04, 0x00, 0x04, 0x00, 0x04, 0x01, 0x02, 0x06, 0x01, 0x01, 0x01, 0x06, 0x1D, 0x4E, 0x4F, 0x54, 0x5F, 0x54, 0x45, 0x52, 0x4D, 0x49, 0x4E, 0x41, 0x54, 0x45, 0x44, 0x06, 0x0D, 0x4E, 0x4F, 0x52, 0x4D, 0x41, 0x4C, 0x0A, 0x33, 0x59, 0x63, 0x6F, 0x6D, 0x2E, 0x72, 0x69, 0x6F, 0x74, 0x67, 0x61, 0x6D, 0x65, 0x73, 0x2E, 0x70, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x2E, 0x67, 0x61, 0x6D, 0x65, 0x2E, 0x46, 0x65, 0x61, 0x74, 0x75, 0x72, 0x65, 0x64, 0xC3, 0x47, 0x61, 0x6D, 0x65, 0x49, 0x6E, 0x66, 0x6F, 0x1E, 0x29, 0x63, 0x68, 0x61, 0x6D, 0x70, 0x69, 0x6F, 0x6E, 0x56, 0x6F, 0x74, 0x65, 0x49, 0x6E, 0x66, 0x6F, 0x4C, 0x69, 0x73, 0x74, 0x3C, 0x04, 0x00, 0x0A, 0x09, 0x09, 0x01, 0x01, 0x01, 0x01, 0x06, 0x21, 0x53, 0x4E, 0x47, 0x37, 0x36, 0x4F, 0x61, 0x72, 0x6C, 0x44, 0x67, 0x62, 0x67, 0x46, 0x4D, 0x46, 0x05, 0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x04, 0x0A, 0x04, 0x00, 0x06, 0x81, 0x24, 0x01, 0x06, 0x0F, 0x43, 0x4C, 0x41, 0x53, 0x53, 0x49, 0x43, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0B, 0x0A, 0x09, 0x09, 0x01, 0x01, 0x06, 0x58, 0x04, 0x01, 0x0A, 0x09, 0x09, 0x0B, 0x01, 0x0A, 0x73, 0x6D, 0x63, 0x6F, 0x6D, 0x2E, 0x72, 0x69, 0x6F, 0x74, 0x67, 0x61, 0x6D, 0x65, 0x73, 0x2E, 0x70, 0xC3, 0x6C, 0x61, 0x74, 0x66, 0x6F, 0x72, 0x6D, 0x2E, 0x67, 0x61, 0x6D, 0x65, 0x2E, 0x50, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x43, 0x68, 0x61, 0x6D, 0x70, 0x69, 0x6F, 0x6E, 0x53, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x44, 0x54, 0x4F, 0x81, 0x0A, 0x1E, 0x11, 0x73, 0x70, 0x65, 0x6C, 0x6C, 0x32, 0x49, 0x64, 0x23, 0x73, 0x65, 0x6C, 0x65, 0x63, 0x74, 0x65, 0x64, 0x53, 0x6B, 0x69, 0x6E, 0x49, 0x6E, 0x64, 0x65, 0x78, 0x15, 0x63, 0x68, 0x61, 0x6D, 0x70, 0x69, 0x6F, 0x6E, 0x49, 0x64, 0x11, 0x73, 0x70, 0x65, 0x6C, 0x6C, 0x31, 0x49, 0x64, 0x3C, 0x06, 0x81, 0x22, 0x04, 0x00, 0x05, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x40, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x1D, 0x06, 0x81, 0x1C, 0x04, 0x00, 0x05, 0x40, 0x1C, 0xC3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x1D, 0x06, 0x81, 0x1E, 0x04, 0x00, 0x05, 0x40, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x1D, 0x06, 0x81, 0x1A, 0x04, 0x00, 0x05, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x40, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x1D, 0x06, 0x81, 0x18, 0x04, 0x00, 0x05, 0x40, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x05, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0A, 0x09, 0x09, 0x05, 0x01, 0x06, 0x33, 0x4E, 0x65, 0x77, 0x53, 0x75, 0x6D, 0x6D, 0x6F, 0x6E, 0x65, 0x72, 0xC3, 0x42, 0x61, 0x64, 0x67, 0x65, 0x53, 0x79, 0x73, 0x74, 0x65, 0x6D, 0x28, 0x30, 0x29, 0x06, 0x27, 0x53, 0x74, 0x61, 0x72, 0x47, 0x75, 0x61, 0x72, 0x64, 0x69, 0x61, 0x6E, 0x4D, 0x69, 0x6E, 0x69, 0x6F, 0x6E, 0x73, 0x04, 0x00, 0x01, 0x06, 0x1B, 0x67, 0x6E, 0x2D, 0x32, 0x39, 0x35, 0x38, 0x39, 0x34, 0x34, 0x39, 0x35, 0x34, 0x06, 0x29, 0x6D, 0x65, 0x73, 0x73, 0x61, 0x67, 0x69, 0x6E, 0x67, 0x44, 0x65, 0x73, 0x74, 0x69, 0x6E, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x0A, 0x13, 0x01, 0x15, 0x44, 0x53, 0x53, 0x75, 0x62, 0x74, 0x6F, 0x70, 0x69, 0x63, 0x06, 0x81, 0x3E, 0x06, 0x49, 0x36, 0x35, 0x36, 0x35, 0x65, 0x32, 0x66, 0x31, 0x2D, 0x33, 0x33, 0x30, 0x37, 0x2D, 0x34, 0x64, 0x30, 0x38, 0x2D, 0x61, 0x38, 0x64, 0x62, 0x2D, 0x32, 0x35, 0x30, 0x31, 0x61, 0x65, 0x61, 0x39, 0x63, 0x64, 0xC3, 0x61, 0x30, 0x05, 0x42, 0x75, 0x7D, 0x59, 0xB5, 0x65, 0x50, 0x00, 0x00

};

unsigned char _data1[1] = { 0x03 };
int _tmain(int argc, _TCHAR* argv[])
{
	amfDecoder deco;
	//std::shared_ptr<Amf_Object> obj = deco.decodeInvoke(data, 30000);
	
	std::shared_ptr<DATA_PROPERTY> data(new DATA_PROPERTY);
	std::shared_ptr<unsigned char> pdata;
	pdata.reset(_data);
	data->type = 0x3;
	data->len = 2474;
	data->_ptr = pdata;
	data->index = 1;
	role::m_mutex.lock();
	role::m_pDataList.push_back(data);
	role::m_mutex.unlock();


	getchar();
	return 0;
}
