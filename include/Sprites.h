namespace Sprites {
    namespace Walls {
        static const unsigned char PROGMEM Unknown[] = {
            0x0f, 0xe0, 
            0x10, 0x10, 
            0x10, 0x10, 
            0x10, 0x10, 
            0x10, 0x10, 
            0x08, 0x10, 
            0x00, 0x20, 
            0x00, 0x40, 
            0x00, 0x80, 
            0x01, 0x00, 
            0x01, 0x00, 
            0x01, 0x00, 
            0x01, 0x00, 
            0x01, 0x00, 
            0x00, 0x00, 
            0x01, 0x00, 
        };

        static const unsigned char PROGMEM Empty[] {
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff, 
            0xff, 0xff,
        };
        
        static const unsigned char PROGMEM Wall[] {
            0x7f, 0xfe, 
            0xff, 0xff, 
            0xe8, 0x17, 
            0xd0, 0x0b, 
            0xff, 0xff, 
            0xd2, 0x4b, 
            0xd2, 0x4b, 
            0xff, 0xff, 
            0xd0, 0x0b, 
            0xe8, 0x17, 
            0xff, 0xff, 
            0x75, 0xae, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x35, 0xac, 
            0x35, 0xac, 
            0x3f, 0xfc, 
            0x3f, 0xfc,
        };
    }
    namespace Character {
        static const unsigned char PROGMEM Shogo[] {
            0x00, 0x1f, 0xe0, 0x00, 
            0x00, 0x60, 0x18, 0x00, 
            0x00, 0x80, 0x04, 0x00, 
            0x00, 0x80, 0x04, 0x00, 
            0x03, 0x00, 0x02, 0x00, 
            0x02, 0x00, 0x01, 0x00, 
            0x04, 0x00, 0x01, 0x00, 
            0x04, 0x00, 0xc1, 0x00, 
            0x04, 0x01, 0x31, 0x00, 
            0x04, 0x01, 0x29, 0x00, 
            0x02, 0x01, 0x09, 0x00, 
            0x02, 0x03, 0x7d, 0x00, 
            0x02, 0x02, 0x75, 0x00, 
            0x02, 0x06, 0x05, 0x00, 
            0x03, 0x0c, 0x05, 0x00, 
            0x03, 0x18, 0x05, 0x00, 
            0x01, 0x90, 0x05, 0x00, 
            0x02, 0x90, 0x0d, 0x00, 
            0x02, 0x93, 0x8a, 0x00, 
            0x00, 0x90, 0x12, 0x00, 
            0x00, 0x98, 0x32, 0x00, 
            0x00, 0x9f, 0xd2, 0x00, 
            0x00, 0xb0, 0x12, 0x00, 
            0x00, 0xb0, 0x18, 0x00, 
            0x00, 0x50, 0x14, 0x00, 
            0x00, 0xa0, 0x0a, 0x00, 
            0x01, 0x20, 0x09, 0x00, 
            0x02, 0x10, 0x10, 0x80, 
            0x3e, 0x08, 0x20, 0xfc, 
            0x41, 0xcf, 0xe7, 0x02, 
            0x40, 0x37, 0xd8, 0x02, 
            0x80, 0x07, 0xc0, 0x01, 
        };

        static const unsigned char PROGMEM Car[] = {
            0x80, 0x00, 
            0xff, 0x80, 
            0x8b, 0x40, 
            0xf2, 0xa0, 
            0xf2, 0x70, 
            0x89, 0x10, 
            0xff, 0xf0, 
            0x80, 0x00
        };

        static const unsigned char PROGMEM Helicopter[] {
            0x1f, 0xf0, 
            0x81, 0x00, 
            0xff, 0xe0, 
            0x87, 0x90, 
            0x03, 0xf0, 
            0x01, 0xe0, 
            0x06, 0x10
        };
    }
};