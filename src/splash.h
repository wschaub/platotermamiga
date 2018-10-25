#include "protocol.h"

padByte splash[] = {
  0x1b,
  0x02,
  0x1B,
  0x0C,
  0x1B,
  0x12,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x1B,
  0xE1,
  0xFF,
  0xFF,
  0xFF,
  0xFF,
  0x1B,
  0xE2,
  0xC0,
  0xC0,
  0xC0,
  0xC0,
  0x1B,
  0x0C,
  0x1B,
  0x12,
  0x1D,
  0xAF,
  0xF0,
  0xC0,
  0x1B,
  0x5A,
  0x1B,
  0xD1,
  0xC0,
  0x44,
  0x41,
  0x1D,
  0x2E,
  0x6C,
  0xC5,
  0x1B,
  0x5A,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x1D,
  0xC5,
  0xF3,
  0xC5,
  0xC6,
  0x74,
  0x47,
  0xC9,
  0xF5,
  0x4B,
  0xCC,
  0xF6,
  0x4D,
  0x77,
  0xCF,
  0x78,
  0x50,
  0xF9,
  0xD1,
  0xFA,
  0xD2,
  0x7B,
  0x53,
  0xFC,
  0xD4,
  0x7D,
  0x55,
  0x7E,
  0x56,
  0xFF,
  0xD7,
  0xAF,
  0xE2,
  0xD7,
  0xE4,
  0xD8,
  0x66,
  0x59,
  0xE8,
  0x59,
  0x6A,
  0x59,
  0x6C,
  0x5A,
  0xEE,
  0x5A,
  0x7B,
  0xDB,
  0xDE,
  0xF3,
  0xDE,
  0xF0,
  0xDE,
  0xEB,
  0xDE,
  0xE8,
  0xDE,
  0x65,
  0xDD,
  0xE1,
  0xDD,
  0x2E,
  0x7D,
  0x5C,
  0xF9,
  0x5A,
  0xF6,
  0xD8,
  0x74,
  0x56,
  0x72,
  0x53,
  0xF0,
  0xD1,
  0x6F,
  0x4E,
  0xEE,
  0xCC,
  0xED,
  0xC9,
  0x6C,
  0xC6,
  0xC5,
  0x1D,
  0x5F,
  0xAF,
  0x7B,
  0x5F,
  0x7B,
  0x21,
  0xC6,
  0x2E,
  0x6C,
  0xC6,
  0x6C,
  0xA0,
  0x5F,
  0x1D,
  0x6C,
  0x22,
  0x41,
  0x6C,
  0x21,
  0xDE,
  0xED,
  0x5C,
  0xEE,
  0x5A,
  0xD8,
  0xF0,
  0x56,
  0x71,
  0xD4,
  0x72,
  0xD1,
  0x74,
  0xCF,
  0xF6,
  0x4E,
  0xF9,
  0xCC,
  0xFC,
  0xCA,
  0xFF,
  0xC9,
  0xAF,
  0xE2,
  0xC9,
  0x66,
  0x48,
  0x69,
  0x48,
  0x6C,
  0x48,
  0x7B,
  0x48,
  0xCC,
  0x71,
  0xCC,
  0xEE,
  0xCC,
  0xEB,
  0x4D,
  0x69,
  0x4D,
  0x66,
  0x4E,
  0xE4,
  0x4E,
  0xE2,
  0xCF,
  0x2E,
  0xFF,
  0x50,
  0x7D,
  0xD2,
  0xFA,
  0xD4,
  0x78,
  0x56,
  0xF6,
  0x59,
  0xF5,
  0xDB,
  0x74,
  0xDE,
  0xF3,
  0x22,
  0x41,
  0x6C,
  0x41,
  0x1D,
  0x2D,
  0x72,
  0xA0,
  0x44,
  0x2E,
  0x65,
  0xC9,
  0x66,
  0xCA,
  0xE7,
  0x4B,
  0x4B,
  0xCC,
  0xE8,
  0xCC,
  0xE7,
  0x4E,
  0x66,
  0x4E,
  0x65,
  0xCF,
  0x2D,
  0x72,
  0xD4,
  0xD1,
  0x77,
  0xCF,
  0xC9,
  0x72,
  0x48,
  0x44,
  0x1D,
  0x7B,
  0xCF,
  0xCA,
  0x2E,
  0xE2,
  0xCC,
  0x2D,
  0xFA,
  0xCF,
  0x1D,
  0x72,
  0xD7,
  0x2E,
  0xE4,
  0xD7,
  0xD2,
  0xE8,
  0xD2,
  0xDE,
  0xE4,
  0xDE,
  0x5A,
  0x2D,
  0x72,
  0x5A,
  0x56,
  0x1D,
  0x5C,
  0x2E,
  0xE4,
  0x21,
  0x41,
  0x66,
  0x42,
  0x42,
  0xE7,
  0xC3,
  0xE8,
  0x44,
  0xE7,
  0x44,
  0xC5,
  0xC6,
  0x66,
  0x47,
  0xE4,
  0x47,
  0x2D,
  0x72,
  0x4D,
  0xC9,
  0x77,
  0x47,
  0x41,
  0x72,
  0xA0,
  0x5F,
  0x5C,
  0x1D,
  0x7B,
  0x21,
  0x42,
  0x2E,
  0xE2,
  0x44,
  0x2D,
  0xFA,
  0xC6,
  0x42,
  0x1D,
  0x72,
  0x4E,
  0x2E,
  0xE4,
  0x4E,
  0x66,
  0x4E,
  0xE7,
  0xCF,
  0xCF,
  0xCF,
  0xE8,
  0x50,
  0x56,
  0xE7,
  0xD7,
  0xD8,
  0x66,
  0xD8,
  0x59,
  0x65,
  0x59,
  0x59,
  0xE4,
  0x5A,
  0x63,
  0x5A,
  0xE2,
  0x5A,
  0xDB,
  0xE1,
  0x5A,
  0x60,
  0x5A,
  0x2D,
  0xFF,
  0x5A,
  0x7E,
  0x5A,
  0x7D,
  0x59,
  0x59,
  0xFC,
  0xD8,
  0xD8,
  0x7B,
  0xD7,
  0xD7,
  0xFA,
  0x56,
  0xD7,
  0x72,
  0xDB,
  0xD8,
  0xF9,
  0xD4,
  0x53,
  0xFA,
  0x53,
  0x7B,
  0x53,
  0x53,
  0xFC,
  0x53,
  0x7D,
  0x53,
  0x53,
  0xD4,
  0x7E,
  0x55,
  0x56,
  0xFF,
  0x56,
  0xD7,
  0x2E,
  0x60,
  0xD7,
  0xD7,
  0xE1,
  0xD7,
  0xE2,
  0xD7,
  0x63,
  0xD7,
  0xE4,
  0xD7,
  0x56,
  0x55,
  0xD2,
  0xD2,
  0xD2,
  0x2D,
  0x72,
  0xD2,
  0x4E,
  0x1D,
  0xDD,
  0x2E,
  0xE8,
  0xDD,
  0xE8,
  0x22,
  0x41,
  0x2D,
  0x72,
  0x41,
  0x72,
  0x21,
  0xDD,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x1D,
  0x2E,
  0xF0,
  0xA3,
  0x50,
  0x1B,
  0x5A,
  0x1D,
  0x2D,
  0xF3,
  0x22,
  0x5C,
  0xAF,
  0xED,
  0x5C,
  0xF0,
  0xDD,
  0x72,
  0x5F,
  0x74,
  0xA3,
  0xC0,
  0xF5,
  0x42,
  0xC6,
  0x53,
  0xD8,
  0xF3,
  0x5A,
  0x71,
  0xDD,
  0x6F,
  0x5F,
  0xED,
  0x24,
  0xC0,
  0xEB,
  0x42,
  0xE8,
  0xC3,
  0xE4,
  0x44,
  0x2E,
  0xFF,
  0x44,
  0xFA,
  0xC3,
  0x78,
  0x41,
  0xF6,
  0xC0,
  0x74,
  0xA3,
  0xDD,
  0x72,
  0xDB,
  0x71,
  0xD8,
  0x6F,
  0x53,
  0xEE,
  0x4B,
  0xCA,
  0x2D,
  0xF3,
  0xCA,
  0xF3,
  0x22,
  0x5C,
  0x1D,
  0x2E,
  0xFA,
  0xA3,
  0xCA,
  0xAF,
  0xE8,
  0xCA,
  0x50,
  0xD2,
  0x53,
  0xE7,
  0x53,
  0x66,
  0xD4,
  0xE4,
  0x55,
  0xE2,
  0x56,
  0x2E,
  0xFF,
  0x55,
  0x7D,
  0x53,
  0x7B,
  0xD1,
  0xFA,
  0x50,
  0xCA,
  0x1D,
  0x2D,
  0xFA,
  0x24,
  0x48,
  0xAF,
  0xF5,
  0x48,
  0x56,
  0x2E,
  0x60,
  0x56,
  0x60,
  0xA5,
  0xC9,
  0x2D,
  0xF3,
  0xC9,
  0xF3,
  0x24,
  0xCF,
  0x4D,
  0xF5,
  0x4B,
  0x77,
  0x48,
  0xFA,
  0x48,
  0x1D,
  0xF3,
  0xA5,
  0x48,
  0xAF,
  0xF0,
  0x5A,
  0x72,
  0xDB,
  0xF3,
  0x5C,
  0xF5,
  0xDD,
  0xDE,
  0xF6,
  0xA6,
  0xC0,
  0x77,
  0x42,
  0x44,
  0xF6,
  0xC6,
  0xF5,
  0xC9,
  0xF3,
  0xCA,
  0x71,
  0xCC,
  0x2D,
  0xF3,
  0xDE,
  0x50,
  0x2E,
  0x60,
  0x4D,
  0x60,
  0xA5,
  0x5A,
  0x2D,
  0xF3,
  0x56,
  0x48,
  0x1D,
  0x2E,
  0xED,
  0xDD,
  0xAF,
  0x69,
  0xA6,
  0xC3,
  0x2E,
  0xED,
  0xC9,
  0xED,
  0xA5,
  0xDD,
  0x1D,
  0x2D,
  0xF3,
  0x27,
  0xC5,
  0xAF,
  0x69,
  0xC5,
  0x69,
  0xA6,
  0xD8,
  0xF5,
  0xD8,
  0xF5,
  0x27,
  0x5F,
  0x69,
  0x5F,
  0xD2,
  0x2D,
  0xF3,
  0xD2,
  0xC5,
  0x1D,
  0x2E,
  0xF0,
  0x28,
  0x59,
  0x1B,
  0x59,
  0x50,
  0x41,
  0xC0,
  0x1D,
  0x2D,
  0xF3,
  0x5C,
  0x74,
  0xD4,
  0xF5,
  0x50,
  0xF6,
  0x4D,
  0xFA,
  0xC9,
  0xFC,
  0x47,
  0x2E,
  0x60,
  0x44,
  0x63,
  0x41,
  0x65,
  0x41,
  0xE8,
  0x27,
  0x5F,
  0xEE,
  0xDE,
  0x74,
  0x5C,
  0xF5,
  0x5C,
  0x78,
  0x5C,
  0xFC,
  0xDD,
  0xFF,
  0xDE,
  0xAF,
  0xE2,
  0x5F,
  0x65,
  0x28,
  0x41,
  0xE8,
  0xC3,
  0xEB,
  0xC5,
  0x6C,
  0xC6,
  0xEE,
  0x48,
  0xF0,
  0x4B,
  0x72,
  0x4D,
  0xF3,
  0xCF,
  0xF5,
  0x53,
  0xF6,
  0x59,
  0x77,
  0x5F,
  0x77,
  0xA9,
  0xC0,
  0xF6,
  0xC5,
  0xF5,
  0xC9,
  0x74,
  0x4E,
  0x72,
  0x50,
  0x71,
  0xD2,
  0x6F,
  0xD4,
  0xED,
  0x56,
  0xEB,
  0x59,
  0xE7,
  0xDB,
  0x63,
  0xDD,
  0x2E,
  0xFF,
  0x5F,
  0xFA,
  0xAA,
  0xC0,
  0xF9,
  0xC0,
  0xF5,
  0xC0,
  0x72,
  0xC0,
  0xEE,
  0xC0,
  0x6A,
  0xA9,
  0x5F,
  0xE7,
  0xDD,
  0xE4,
  0x5C,
  0x60,
  0x59,
  0x2D,
  0x7D,
  0xD7,
  0xFA,
  0xD4,
  0x78,
  0xD2,
  0xF6,
  0x4E,
  0x74,
  0x4B,
  0xF3,
  0x47,
  0xF3,
  0x28,
  0x5C,
  0x1D,
  0xAF,
  0xE8,
  0x5C,
  0x5F,
  0xE8,
  0xA9,
  0xC3,
  0xE7,
  0xC6,
  0xE4,
  0xCA,
  0xE2,
  0xCC,
  0x2E,
  0xFF,
  0xCF,
  0xFC,
  0x50,
  0xF9,
  0xD1,
  0xF6,
  0xD2,
  0xF3,
  0xD2,
  0xEE,
  0xD1,
  0xEB,
  0xCF,
  0x69,
  0x4E,
  0xE7,
  0xCC,
  0x65,
  0xCA,
  0xE4,
  0xC9,
  0xE2,
  0xC5,
  0xE1,
  0x42,
  0x60,
  0x28,
  0x5F,
  0x5C,
  0xE1,
  0x59,
  0x63,
  0x55,
  0xE4,
  0x53,
  0x66,
  0xD1,
  0xE8,
  0xCF,
  0x6A,
  0x4D,
  0x6C,
  0xCC,
  0xEE,
  0x4B,
  0x71,
  0x4B,
  0x74,
  0x4B,
  0x77,
  0x4B,
  0xFC,
  0xCC,
  0xFF,
  0x4E,
  0xAF,
  0xE1,
  0x50,
  0x63,
  0xD2,
  0xE4,
  0x53,
  0x65,
  0xD4,
  0x66,
  0x55,
  0xE7,
  0x56,
  0xE8,
  0x59,
  0x5C,
  0x1D,
  0x2D,
  0xF3,
  0xAA,
  0xCC,
  0xAF,
  0x69,
  0xCC,
  0x69,
  0xA9,
  0x5F,
  0xF5,
  0x5F,
  0xF5,
  0x2B,
  0xC6,
  0x69,
  0xC6,
  0x69,
  0xAA,
  0x59,
  0x2D,
  0xF3,
  0x59,
  0xCC,
  0x1D,
  0x2E,
  0x60,
  0x2B,
  0x4B,
  0xAF,
  0xED,
  0x4B,
  0x6F,
  0xCC,
  0x72,
  0x4D,
  0xF3,
  0x4E,
  0x74,
  0x4E,
  0xF5,
  0xCF,
  0xD1,
  0xF6,
  0x53,
  0xF6,
  0xAC,
  0xCC,
  0xE8,
  0xCC,
  0xE8,
  0x2B,
  0xD8,
  0x2E,
  0x7D,
  0xD8,
  0x7D,
  0xAC,
  0x4B,
  0x71,
  0x4B,
  0x71,
  0x2B,
  0xD8,
  0xE1,
  0xD8,
  0xE1,
  0xAC,
  0xCC,
  0x2D,
  0xF3,
  0xCC,
  0xF3,
  0x2B,
  0xD4,
  0x74,
  0xD1,
  0xF5,
  0x50,
  0xF6,
  0xCF,
  0x77,
  0x4E,
  0xF9,
  0xCC,
  0xFA,
  0x4B,
  0x2E,
  0x60,
  0x4B,
  0x1D,
  0x2D,
  0xF3,
  0xAC,
  0x4E,
  0xAF,
  0xED,
  0x4E,
  0xF0,
  0xCF,
  0x72,
  0x50,
  0xD1,
  0xF3,
  0xD2,
  0x74,
  0xD2,
  0xF5,
  0x53,
  0x55,
  0xF5,
  0x2D,
  0xC5,
  0x47,
  0xCA,
  0x74,
  0xCC,
  0xF3,
  0x4E,
  0x72,
  0xCF,
  0x71,
  0xD1,
  0xF0,
  0xD2,
  0xEE,
  0x53,
  0xD4,
  0xED,
  0x55,
  0xEB,
  0x56,
  0x6A,
  0x56,
  0xE8,
  0xD7,
  0x66,
  0xD8,
  0xE4,
  0xD8,
  0x63,
  0xD8,
  0xE1,
  0xD8,
  0x2E,
  0x7E,
  0xD7,
  0x7B,
  0x56,
  0xFA,
  0x56,
  0x78,
  0x55,
  0x77,
  0x53,
  0xF5,
  0xD2,
  0x74,
  0xCF,
  0xF3,
  0x4D,
  0x72,
  0xCC,
  0x71,
  0x4B,
  0x2D,
  0xF3,
  0x5C,
  0xCC,
  0x2E,
  0xF0,
  0xAC,
  0xDE,
  0x71,
  0xDD,
  0x74,
  0xDD,
  0x77,
  0xDE,
  0x78,
  0x5F,
  0xF9,
  0x2D,
  0x41,
  0xFA,
  0x42,
  0xC3,
  0x7B,
  0xC5,
  0x7D,
  0x47,
  0x7E,
  0x48,
  0xAF,
  0x60,
  0xC9,
  0xE4,
  0xC9,
  0x66,
  0x48,
  0xE8,
  0xC6,
  0x69,
  0xC5,
  0x69,
  0xAC,
  0x5C,
  0x2D,
  0xF3,
  0x5C,
  0x4E,
  0x1D,
  0xF3,
  0x2D,
  0xDB,
  0xAF,
  0xF0,
  0xDB,
  0xF3,
  0x5C,
  0xF5,
  0xDE,
  0xF5,
  0x2E,
  0xC0,
  0xF6,
  0x42,
  0x44,
  0xF5,
  0x48,
  0xCA,
  0xF3,
  0xCC,
  0x72,
  0x4D,
  0xF0,
  0x4D,
  0x2E,
  0x65,
  0x5A,
  0xAF,
  0xF0,
  0xAF,
  0x44,
  0x72,
  0xC5,
  0x74,
  0x47,
  0xF5,
  0x47,
  0x48,
  0xF6,
  0xCA,
  0x77,
  0xCC,
  0xCF,
  0xF6,
  0xD2,
  0xF5,
  0xD4,
  0xF3,
  0x56,
  0xF0,
  0xD8,
  0xEE,
  0xD8,
  0x2D,
  0xF3,
  0xD8,
  0xCC,
  0xAF,
  0xE2,
  0xCC,
  0x2D,
  0xFA,
  0x41,
  0x77,
  0xC0,
  0xF5,
  0x2E,
  0x5F,
  0xF3,
  0xDD,
  0xD7,
  0xF5,
  0x55,
  0xF6,
  0xD4,
  0x77,
  0xD4,
  0xFC,
  0xD2,
  0x2E,
  0xE1,
  0x50,
  0xE7,
  0xCF,
  0x6C,
  0x4D,
  0xAF,
  0xE1,
  0xC6,
  0x2D,
  0xF3,
  0xC6,
  0xF3,
  0x2D,
  0xDB,
  0x1D,
  0x60,
  0xA6,
  0xD8,
  0x1B,
  0x5A,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x9F,
  0x1B,
  0x12,
  0xE1,
  0xA0,
  0x50,
  0xCC,
  0x41,
  0xD4,
  0xCF,
  0xA0,
  0x74,
  0x65,
  0x72,
  0xED,
  0x69,
  0xEE,
  0xE1,
  0x6C,
  0xA0,
  0x66,
  0x6F,
  0x72,
  0xA0,
  0xF9,
  0x6F,
  0xF5,
  0x72,
  0xA0,
  0x41,
  0x74,
  0xE1,
  0x72,
  0x69,
  0x1D,
  0x2B,
  0xF0,
  0xA0,
  0xC0,
  0x1B,
  0x5A,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x9F,
  0x1B,
  0x12,
  0xC3,
  0x6F,
  0xF0,
  0xF9,
  0x72,
  0x69,
  0xE7,
  0xE8,
  0x74,
  0xA0,
  0x28,
  0x1B,
  0xC3,
  0xC0,
  0x1B,
  0x42,
  0xA9,
  0xA0,
  0xB2,
  0x30,
  0xB1,
  0xB8,
  0xA0,
  0xC9,
  0xD2,
  0x41,
  0xD4,
  0x41,
  0x2E,
  0xCF,
  0x4E,
  0xCC,
  0xC9,
  0x4E,
  0xC5,
  0x2E,
  0xA0,
  0xD4,
  0xE8,
  0x69,
  0xF3,
  0xA0,
  0x74,
  0x65,
  0x72,
  0xED,
  0x69,
  0xEE,
  0xE1,
  0x6C,
  0xA0,
  0x69,
  0xF3,
  0xA0,
  0x72,
  0x65,
  0x6C,
  0x65,
  0xE1,
  0xF3,
  0x65,
  0xE4,
  0xA0,
  0xF5,
  0xEE,
  0xE4,
  0x65,
  0x72,
  0x8D,
  0x74,
  0xE8,
  0x65,
  0xA0,
  0x47,
  0x4E,
  0x55,
  0xA0,
  0x50,
  0xF5,
  0xE2,
  0x6C,
  0x69,
  0x63,
  0xA0,
  0xCC,
  0x69,
  0x63,
  0x65,
  0xEE,
  0xF3,
  0x65,
  0x2E,
  0xA0,
  0xD2,
  0xF5,
  0xEE,
  0xA0,
  0x74,
  0xE8,
  0x65,
  0xA0,
  0xF0,
  0x72,
  0x6F,
  0xE7,
  0x72,
  0xE1,
  0xED,
  0xA0,
  0x47,
  0x50,
  0xCC,
  0xAC,
  0xA0,
  0x66,
  0x6F,
  0x72,
  0xA0,
  0xE4,
  0x65,
  0x74,
  0xE1,
  0x69,
  0x6C,
  0xF3,
  0x2E,
  0x1D,
  0x1B,
  0x12,
  0x60,
  0x2E,
  0x48,
  0x1D,
  0xAC,
  0xE4,
  0xA0,
  0xC0,
  0xE4,
  0xAF,
  0x5F,
  0x1D,
  0xAA,
  0xFC,
  0xA0,
  0xC0,
  0xFC,
  0xAF,
  0x5F,
  0x1D,
  0x2E,
  0x6C,
  0xA0,
  0xC5,
  0x1B,
  0x5A,
  0x1B,
  0xD1,
  0xC0,
  0x50,
  0xC0,
  0x1D,
  0xC5,
  0xF3,
  0xC5,
  0xC6,
  0x74,
  0x47,
  0xC9,
  0xF5,
  0x4B,
  0xCC,
  0xF6,
  0x4D,
  0x77,
  0xCF,
  0x78,
  0x50,
  0xF9,
  0xD1,
  0xFA,
  0xD2,
  0x7B,
  0x53,
  0xFC,
  0xD4,
  0x7D,
  0x55,
  0x7E,
  0x56,
  0xFF,
  0xD7,
  0xAF,
  0xE2,
  0xD7,
  0xE4,
  0xD8,
  0x66,
  0x59,
  0xE8,
  0x59,
  0x6A,
  0x59,
  0x6C,
  0x5A,
  0xEE,
  0x5A,
  0x7B,
  0xDB,
  0xDE,
  0xF3,
  0xDE,
  0xF0,
  0xDE,
  0xEB,
  0xDE,
  0xE8,
  0xDE,
  0x65,
  0xDD,
  0xE1,
  0xDD,
  0x2E,
  0x7D,
  0x5C,
  0xF9,
  0x5A,
  0xF6,
  0xD8,
  0x74,
  0x56,
  0x72,
  0x53,
  0xF0,
  0xD1,
  0x6F,
  0x4E,
  0xEE,
  0xCC,
  0xED,
  0xC9,
  0x6C,
  0xC6,
  0xC5,
  0x1D,
  0x5F,
  0xAF,
  0x7B,
  0x5F,
  0x7B,
  0x21,
  0xC6,
  0x2E,
  0x6C,
  0xC6,
  0x6C,
  0xA0,
  0x5F,
  0x1D,
  0x6C,
  0x22,
  0x41,
  0x6C,
  0x21,
  0xDE,
  0xED,
  0x5C,
  0xEE,
  0x5A,
  0xD8,
  0xF0,
  0x56,
  0x71,
  0xD4,
  0x72,
  0xD1,
  0x74,
  0xCF,
  0xF6,
  0x4E,
  0xF9,
  0xCC,
  0xFC,
  0xCA,
  0xFF,
  0xC9,
  0xAF,
  0xE2,
  0xC9,
  0x66,
  0x48,
  0x69,
  0x48,
  0x6C,
  0x48,
  0x7B,
  0x48,
  0xCC,
  0x71,
  0xCC,
  0xEE,
  0xCC,
  0xEB,
  0x4D,
  0x69,
  0x4D,
  0x66,
  0x4E,
  0xE4,
  0x4E,
  0xE2,
  0xCF,
  0x2E,
  0xFF,
  0x50,
  0x7D,
  0xD2,
  0xFA,
  0xD4,
  0x78,
  0x56,
  0xF6,
  0x59,
  0xF5,
  0xDB,
  0x74,
  0xDE,
  0xF3,
  0x22,
  0x41,
  0x6C,
  0x41,
  0x1D,
  0x2D,
  0x72,
  0xA0,
  0x44,
  0x2E,
  0x65,
  0xC9,
  0x66,
  0xCA,
  0xE7,
  0x4B,
  0x4B,
  0xCC,
  0xE8,
  0xCC,
  0xE7,
  0x4E,
  0x66,
  0x4E,
  0x65,
  0xCF,
  0x2D,
  0x72,
  0xD4,
  0xD1,
  0x77,
  0xCF,
  0xC9,
  0x72,
  0x48,
  0x44,
  0x1D,
  0x7B,
  0xCF,
  0xCA,
  0x2E,
  0xE2,
  0xCC,
  0x2D,
  0xFA,
  0xCF,
  0x1D,
  0x72,
  0xD7,
  0x2E,
  0xE4,
  0xD7,
  0xD2,
  0xE8,
  0xD2,
  0xDE,
  0xE4,
  0xDE,
  0x5A,
  0x2D,
  0x72,
  0x5A,
  0x56,
  0x1D,
  0x5C,
  0x2E,
  0xE4,
  0x21,
  0x41,
  0x66,
  0x42,
  0x42,
  0xE7,
  0xC3,
  0xE8,
  0x44,
  0xE7,
  0x44,
  0xC5,
  0xC6,
  0x66,
  0x47,
  0xE4,
  0x47,
  0x2D,
  0x72,
  0x4D,
  0xC9,
  0x77,
  0x47,
  0x41,
  0x72,
  0xA0,
  0x5F,
  0x5C,
  0x1D,
  0x7B,
  0x21,
  0x42,
  0x2E,
  0xE2,
  0x44,
  0x2D,
  0xFA,
  0xC6,
  0x42,
  0x1D,
  0x72,
  0x4E,
  0x2E,
  0xE4,
  0x4E,
  0x66,
  0x4E,
  0xE7,
  0xCF,
  0xCF,
  0xCF,
  0xE8,
  0x50,
  0x56,
  0xE7,
  0xD7,
  0xD8,
  0x66,
  0xD8,
  0x59,
  0x65,
  0x59,
  0x59,
  0xE4,
  0x5A,
  0x63,
  0x5A,
  0xE2,
  0x5A,
  0xDB,
  0xE1,
  0x5A,
  0x60,
  0x5A,
  0x2D,
  0xFF,
  0x5A,
  0x7E,
  0x5A,
  0x7D,
  0x59,
  0x59,
  0xFC,
  0xD8,
  0xD8,
  0x7B,
  0xD7,
  0xD7,
  0xFA,
  0x56,
  0xD7,
  0x72,
  0xDB,
  0xD8,
  0xF9,
  0xD4,
  0x53,
  0xFA,
  0x53,
  0x7B,
  0x53,
  0x53,
  0xFC,
  0x53,
  0x7D,
  0x53,
  0x53,
  0xD4,
  0x7E,
  0x55,
  0x56,
  0xFF,
  0x56,
  0xD7,
  0x2E,
  0x60,
  0xD7,
  0xD7,
  0xE1,
  0xD7,
  0xE2,
  0xD7,
  0x63,
  0xD7,
  0xE4,
  0xD7,
  0x56,
  0x55,
  0xD2,
  0xD2,
  0xD2,
  0x2D,
  0x72,
  0xD2,
  0x4E,
  0x1D,
  0xDD,
  0x2E,
  0xE8,
  0xDD,
  0xE8,
  0x22,
  0x41,
  0x2D,
  0x72,
  0x41,
  0x72,
  0x21,
  0xDD,
  0x1b,
  0x03
};