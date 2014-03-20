// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_7_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_7_latin_ext'.
//
/* // Example usage:

static stb_fontchar fontdata[STB_SOMEFONT_NUM_CHARS];

static void init(void)
{
    // optionally replace both STB_SOMEFONT_BITMAP_HEIGHT with STB_SOMEFONT_BITMAP_HEIGHT_POW2
    static unsigned char fontpixels[STB_SOMEFONT_BITMAP_HEIGHT][STB_SOMEFONT_BITMAP_WIDTH];
    STB_SOMEFONT_CREATE(fontdata, fontpixels, STB_SOMEFONT_BITMAP_HEIGHT);
    ... create texture ...
    // for best results rendering 1:1 pixels texels, use nearest-neighbor sampling
    // if allowed to scale up, use bilerp
}

// This function positions characters on integer coordinates, and assumes 1:1 texels to pixels
// Appropriate if nearest-neighbor sampling is used
static void draw_string_integer(int x, int y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0, cd->t0); glVertex2i(x + cd->x0, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t0); glVertex2i(x + cd->x1, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t1); glVertex2i(x + cd->x1, y + cd->y1);
        glTexCoord2f(cd->s0, cd->t1); glVertex2i(x + cd->x0, y + cd->y1);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance_int;
    }
    glEnd();
}

// This function positions characters on float coordinates, and doesn't require 1:1 texels to pixels
// Appropriate if bilinear filtering is used
static void draw_string_float(float x, float y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0f, cd->t0f); glVertex2f(x + cd->x0f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t0f); glVertex2f(x + cd->x1f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t1f); glVertex2f(x + cd->x1f, y + cd->y1f);
        glTexCoord2f(cd->s0f, cd->t1f); glVertex2f(x + cd->x0f, y + cd->y1f);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance;
    }
    glEnd();
}
*/

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF
typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;
#endif

#define STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT         52
#define STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_consolas_bold_7_latin_ext_FIRST_CHAR            32
#define STB_FONT_consolas_bold_7_latin_ext_NUM_CHARS            560

#define STB_FONT_consolas_bold_7_latin_ext_LINE_SPACING           5

static unsigned int stb__consolas_bold_7_latin_ext_pixels[]={
    0x4c102600,0x0dc1dc00,0x822040e2,0x43881048,0xb88ae1cc,0x706a1dc4,
    0x30b83a83,0x55c39862,0x20ee0442,0x82e61dc0,0x23c8803c,0x5c02741a,
    0x86eea143,0x0ee1dc3a,0x15c3b877,0x4d8710ae,0x263750e6,0x22c46a2b,
    0x2e3986e5,0x81bb8a61,0x1cc15c5b,0x5a8570f2,0x4933715c,0x8a944a2b,
    0xcbc97628,0x0ba86ea2,0x86547319,0x31e4188a,0x22648333,0x46139518,
    0x32865c18,0xa858eee3,0x7542ea48,0x5417930b,0x3770ee1b,0x239506ee,
    0x70ddc4b8,0xb8e54907,0x23b7719c,0x73a8392b,0x5c372643,0xbc87d31b,
    0x96e0f22e,0x4b2f23c8,0x59790bcc,0x65e53772,0x2ae55572,0x5a1b732a,
    0x2a139549,0x2731909c,0x731909ca,0x98c84ccc,0x2321db13,0x98c83939,
    0x4643d713,0x16779739,0x272a17d5,0x22b83d10,0x437719cb,0x47d31cab,
    0x437719cb,0x03771cab,0x46c672e9,0x2e1b972c,0x910560d1,0x1cab8dc7,
    0x4973d164,0x8975dc5d,0x5526d2c8,0xcca4da4f,0x6c526d4c,0xedb97625,
    0x072931b2,0x9398c839,0x2e398c83,0x273192a9,0x4e6323ab,0xd9cc642c,
    0x4e6320c9,0xe88b399b,0x2e1a0721,0x74cb2362,0x4b2136a3,0x47d32c8d,
    0x20fa64da,0x236591b4,0x84cd573a,0x44426d06,0x936a372d,0x27360edb,
    0x5ec1b734,0x325b953a,0x64f2e498,0x25999498,0xb136498c,0xe9a4c6c9,
    0x42c8590d,0xc8590dda,0x4ae6e398,0x49b5398c,0x5bd1398c,0x0cb4e632,
    0x6edce632,0x82c8d0b0,0x8d8ae1cc,0xcdb9643a,0x2361db70,0xcdb9643a,
    0x46d21640,0x2e7bd33a,0x036572b9,0x6e546e93,0x8336e372,0xb86fd40a,
    0x437e62ed,0x1bb32ddb,0x6ecc37ae,0x6ecc3390,0x06cc1b30,0x22595154,
    0x45bd12de,0x54b7a21b,0x4b7aa0dd,0xa8ee0dda,0xda86a0dd,0x541db90d,
    0x1e8570dd,0x2de88e64,0x74c13066,0x321db73d,0xe98323ba,0x321db73d,
    0x41db73ba,0x4c7bd34a,0x459804c0,0x376e370d,0x8eeb2372,0x4c6c2881,
    0x38000a24,0x0a803500,0x4c188054,0x00188000,0x000a8000,0x40880000,
    0x3030001a,0x05510200,0x85510200,0x40c01a80,0x08820401,0x01544220,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xb8000000,0x8ee15c2a,0x1c43c848,0x22083133,0x570ea20c,
    0xbb88c4cc,0x06217730,0x4dc790ae,0x9898ee2a,0x43c88351,0x2031e43b,
    0x710e663c,0x231c4388,0x8350f218,0x570e663c,0x2ea23b85,0x88e20f20,
    0x9115dc3c,0x40ae1dc1,0x8b30ea26,0xb85b30c8,0x570c4542,0x4370c44c,
    0x71b91889,0x570aa2dc,0x71b90dc4,0x1e44272a,0x5c3b8873,0x2613131b,
    0x9b96ae3b,0x8998ae09,0x03213131,0x332e1313,0x18998312,0x1cc645b3,
    0x705dcc77,0x771665c5,0x5b50bb98,0xb982ee65,0x5642ee62,0x41a8ee0e,
    0x8ee6188a,0x282e188a,0x97915451,0xbc9cc645,0x3273192c,0x273192cb,
    0x5d793bcc,0x2cbc8644,0x9d664571,0x986e0cea,0x9572cc43,0x4c4aa6e3,
    0x5bb8bae6,0x46e4b2f2,0x26a55373,0x4dcaa6e3,0x8dc8732a,0x398c8aa3,
    0x8f225957,0x55372cab,0x3c88b2ae,0xb87910aa,0xb47911db,0x5dc1952e,
    0x988e6323,0x6c4e6326,0x2a8aaae0,0x731924da,0x398ca4da,0x9cc6526d,
    0x973d3e8c,0x49368644,0x54fa722a,0x0730dc0b,0x26e4da96,0x4997342a,
    0xca4da3db,0x257373ac,0x57372cca,0x21ccaa6e,0xc8aa3acc,0x4731b398,
    0x5ce6361b,0x8731b2a9,0x06e0aa1b,0xd0dc1b97,0x32e1d716,0xd07bb92c,
    0x4589cc64,0x191545d8,0xc9cc6493,0x27319498,0x7319498c,0x49cd9dd2,
    0x5498c8a6,0xa9ed23db,0x23bd51de,0xb72c1de9,0xd0aa6e19,0xd9b964dc,
    0x27293191,0x2a5bd53e,0x45bd52aa,0xd390e609,0x3b591547,0x21b837aa,
    0xa8ec0dea,0x260dc0de,0x1aae0dc0,0x99fed437,0x255370dc,0x32683a8c,
    0x9b02e398,0xdd98f6d4,0x6cc376a0,0x261bb50d,0x81bb50dd,0x221bf52c,
    0x9037661c,0x206404c3,0x5da8660c,0x1c88eeb2,0x4c098d33,0xda437660,
    0x00aaaa03,0x291de983,0x003db53d,0x4401dea8,0x21dea801,0x370ef541,
    0x0077aa57,0x192a9b81,0xb534cc73,0x1b31d41b,0x00000198,0x85114000,
    0x18620018,0x22098130,0x26154400,0x30302a62,0x00000000,0x00000000,
    0x00000000,0x40000000,0x543000a9,0x00000880,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2e200000,0x3b877002,0x850ee1dc,0x2e1dc4c8,0x13131543,0x7906a15c,
    0x321e43b8,0x5571e443,0x215c42b8,0x8ea15c3b,0x2e1dc3a8,0x886a0c83,
    0x0f21c43b,0x1e43c877,0x11c42440,0x6443b897,0xbb820910,0x64497128,
    0x43221dc4,0x2215cc48,0xb81951a9,0x3b86eea4,0x4c4c2faa,0x0bb88ee0,
    0x2a6e5977,0x0bb88ee2,0x20bb88ee,0xb82ee22a,0x9413132e,0x7506ea28,
    0x42ea28a1,0x42ea288a,0x42ea1bb9,0x59111bb9,0x1dc46ee6,0x543b886a,
    0xb8a56cc1,0x44c2ee23,0x26131309,0x41313098,0xb833725b,0x70ee1dc3,
    0x36ee3b87,0x43ae0e61,0x42f260ca,0x42ba60ca,0x59772a9b,0x5e64272a,
    0x2ee57371,0x2e13952c,0x213952cb,0x13952cbb,0x54dc72ae,0xad86eae2,
    0x9613952d,0x2ae13954,0x2213951b,0x213951e9,0x5b951e98,0x64447a62,
    0x2c889762,0x888aa176,0x2e13952c,0x255372a9,0x55372a9b,0x22a8baee,
    0x59572cab,0x655cb2ae,0x32e59572,0xb930e60d,0x857075c1,0x217f50eb,
    0x37992b9b,0x66cc33aa,0x3325bd51,0x3219d51b,0x219d51bc,0x19d51bcc,
    0x5cdc6e36,0x26362ec2,0x4abd8574,0x15cbb057,0x95057254,0x49516edc,
    0x1b732dca,0x6dccb72a,0x5b951540,0x5cdc33aa,0x26e57372,0x3657372b,
    0x6cf723ab,0x2731b398,0x731b398d,0x355ce636,0xc982e0e6,0xdc98ae0d,
    0x6f547320,0x2ea39b32,0x98642440,0x4c1751cd,0x4c1751cd,0x541751cd,
    0x85bd51dd,0x89d46c2b,0x2999b0de,0x88ae0de8,0xe88b10de,0x4320b10d,
    0xb96edc58,0x25bb72ed,0x71542edb,0xa82ea5bb,0x25bd52de,0x5bd52dea,
    0x645c37e6,0x3aa1bd53,0x2a1bd50d,0x21bd50de,0x37a62b9b,0x215c0401,
    0x3aa00000,0x004c141d,0x75403bd5,0x077aa01d,0x3760dc00,0x0f2f600d,
    0xdeb80370,0x30b7ae02,0xd80b7ae1,0x26360498,0xa807b6a4,0x000001de,
    0x00000051,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x33622440,0x44710ae0,0x12e2143c,
    0x910c8877,0x8e661750,0x713224b8,0x8910c887,0x88a20dd8,0x8a2506a3,
    0x543322d8,0x0ee1e441,0xb815c191,0x70f22130,0x0ae1d447,0x2a224471,
    0x42ea15c3,0x54154311,0x83a88ee1,0x5c46ee1a,0x1b82ee23,0x177105cc,
    0xa8351b22,0x17d51541,0x770ee1d4,0x4272a3b8,0x47713bcb,0x88ee23b8,
    0xb570d43b,0x25129441,0x8aaae3bb,0x8b07a22b,0xa832a59b,0x877370bb,
    0x26a131b9,0x5cc37718,0x2617730b,0x217730bb,0x17710bb8,0x4c64aeee,
    0x45859573,0x36a1543c,0x26239572,0xcbc8b2a5,0x9ca83932,0x2ec57770,
    0x744bb176,0x5dcb2ee1,0x2e59772c,0x9b8572cb,0x22591139,0x259112c8,
    0xb9762c88,0xbab9dc5b,0x36277971,0x5e477aa5,0x9fa8321e,0x5dc43ae0,
    0xdd871b74,0x4e372350,0x88f223e9,0xc88f223c,0x654272a3,0x32571b09,
    0x49b5b398,0x9762ec3a,0x09b52bbb,0x26d2754b,0x7541bb94,0x26751b0c,
    0x21b730db,0x991a0db9,0x646f3237,0x237991bc,0x1bb70dd8,0x6e54b72a,
    0x32a5b952,0x2e1b732d,0x6c1953c9,0x4d8e66e5,0x479d506c,0x4cba7648,
    0x259990dc,0x3ae23acc,0x0eb32372,0x06e0dc59,0x3aa1b837,0x2a19d50c,
    0x273192ed,0x731639bd,0x6c36e61b,0x819b72b8,0x93192c85,0x0ba8ea6e,
    0x76dc3baa,0x36e5db72,0x6cc7322e,0x2639b31c,0x439b31cd,0xbb70ae1a,
    0x6dcb76e5,0x2e5bb72d,0x25b772ed,0xdb8ae2e9,0x8681b30d,0xd990d868,
    0x5b9b0547,0x5cb8332a,0xb9f4e4ae,0x3706e0ed,0x750dc1b8,0x95405d41,
    0x1bb30dda,0x25db7122,0x5bb52edb,0x2ed4eeb2,0x37661bb3,0x7543bb30,
    0x5263601d,0x931b498d,0x80000000,0x40000008,0x0c40498d,0x640a8037,
    0x0cc26542,0x8d800060,0x1ed2113e,0xd51dea81,0x5477aa3b,0x23bd51de,
    0x00441dea,0x931b02a0,0xa8812636,0x00000002,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0xb1000000,
    0x98984c5b,0x0b986ea0,0x6c3b8571,0x2e603323,0x08990f21,0x1b98c44c,
    0x25b70b66,0x36a0c409,0xba866441,0x88a8ee0b,0x41730431,0x330130c8,
    0x47706e61,0x155328ab,0x23b8a2ea,0x209128ab,0x2213130c,0x9711dc4c,
    0x8a28ddd4,0x9450e22b,0x2206a2d9,0x2ff2130c,0x8dcdc6a3,0x139519cb,
    0x5d5c3662,0x82bc8ec2,0x443710dd,0xbbb0d41b,0xca8b6b29,0xc9855160,
    0x86e20e42,0x43714bb8,0x3db70cc9,0x1d4c2762,0x37661bd7,0x2a65b592,
    0x5e432a63,0x2619974b,0x219530bb,0xb86e21b8,0x547332a9,0xbb86e20c,
    0xcaba4b3a,0x399d92a2,0x1099b8aa,0x7dc6a175,0x5cdc223b,0x072591b1,
    0x5c6e89b2,0xb88776e5,0x5c45712e,0x664b7aa2,0x2293bd2d,0x26aa2c4d,
    0xc9c83d74,0x66645711,0x24d85712,0x47d71caa,0x75372ccb,0x4ef43726,
    0x15459974,0x8aa25959,0x88aa0ea8,0x9b8ae22b,0x5c59972b,0x4dc5710e,
    0x36957b3b,0x54362398,0xbb8aa1cb,0x440ab6a5,0x6edcee3a,0x0b2751b3,
    0x22cab95c,0x970dcdc2,0x21542a8b,0x64aeb21a,0x585513a9,0x84a94554,
    0xd8aa0a9c,0xd98aa2dc,0x261bb30d,0x5caa6e0c,0x25dd91dd,0x55373a9c,
    0x2dcc9664,0x641d8b32,0x4550aa3a,0x55372dea,0x22a83726,0x5333672b,
    0x41b10dea,0xb71546d8,0x50b21547,0x20dc7227,0x5bd13de9,0x6ed4372a,
    0x1b9b8361,0x76d4fa36,0x32a3db51,0x3255391c,0x43db50dd,0xe986f545,
    0x541bd72d,0x3b6a01ed,0x26e1bb31,0x2e3bd92a,0xa98572a9,0x4dc37724,
    0x4079372a,0x3bf53c9b,0x76d4f62e,0x5c03db51,0xdb5022a9,0x5ecef723,
    0x24e8003c,0x3b371eda,0x41b900aa,0x00000220,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x80000000,0x21c06a2b,0xba8aa2d9,0x5cc2ea1b,0x8570ee22,0x770ae219,
    0x46eea388,0x4a251bb9,0x10ee198a,0x86a06219,0x43751989,0x46ee62b9,
    0x33131899,0x0bb88ae6,0x8ae21771,0x46230bb9,0x42ee6512,0x15731889,
    0x4175128a,0x8ae1ccc0,0x20aa0bc8,0x43506a20,0x104c4c10,0x47770dc4,
    0x7706c1d8,0x542f2659,0x23b7709c,0x17732c88,0x1d998f6a,0x33641751,
    0x47a62179,0x1b951bab,0x2177328a,0x2ae5d839,0x5dcb6b65,0x323b532c,
    0x27b9938d,0x13951cab,0x6564272a,0x4c647911,0x2a255573,0x361bb10e,
    0x2933b4bb,0x19912ada,0x25b8b32e,0x19733bbb,0x774436e6,0x36613510,
    0x3b8b770d,0x9665c571,0x4b7ae0d9,0xb8ae1bcc,0xca86e5c2,0x4c1d512d,
    0x55b50d83,0x0dd896e6,0x4e8bb12a,0x75452676,0x0db98730,0xa4c6c5d7,
    0xc9a22bab,0x279993ac,0x19d50edb,0x66642f6a,0x3ddc86e3,0x6c1d8bb1,
    0x66d26b65,0x5ba8553d,0x2644aa6e,0x93625757,0x17731cc8,0x2ec46eea,
    0x50e447b7,0xb1154dc5,0x873660d8,0x5c37a22b,0xd8b76e6a,0xa8b21cc1,
    0x791feec2,0xb115c2c4,0x3b1ee6cd,0x4bb6e1cc,0x4ea364cb,0x3915c2db,
    0x5d26b27d,0x541753b9,0x37164c1c,0x49b1d464,0x59771dfa,0x6e6526b6,
    0x21350552,0x89912a9b,0x8893222a,0x2261b802,0x043b3709,0x2a6e3db5,
    0x5c006c02,0x015cdc02,0x3baa3bf5,0x0aa5df72,0x75c57162,0xb9c86e2d,
    0x3ea5b993,0x363bd31d,0x25937498,0xd0370ddd,0x74927b48,0x477aa1bb,
    0xd526d43a,0x00e6323b,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x98371000,0x64426620,0x399504c4,0x16c09322,0x11999932,0x21a8dc97,
    0x3c832219,0x4b88d491,0x00000d2a,0x00000000,0x00000000,0x00000000,
    0x00000000,0x22b88000,0x59730bb8,0x24c832e6,0xc96e1bb9,0x54930aa3,
    0x255002aa,0x2a0003b8,0x6cdc9711,0x00000002,0x00000000,0x00000000,
    0x00000000,0x00000000,0x1cda8aa0,0x45455044,0x64411119,0x744bb103,
    0x00000005,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xeda80000,0x000006a1,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__consolas_bold_7_latin_ext_x[560]={ 0,1,0,0,0,0,0,1,0,0,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,-1,0,
0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__consolas_bold_7_latin_ext_y[560]={ 5,0,0,0,-1,0,0,0,-1,-1,0,1,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,-1,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,-1,0,0,0,
-1,0,0,0,0,1,2,2,0,0,0,0,0,0,0,1,0,2,5,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
-1,0,-1,0,0,1,-1,0,-1,0,-1,0,-1,0,-1,-1,0,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,0,-1,0,0,-1,-1,-1,0,0,-1,0,-1,0,-1,0,0,0,-1,1,0,0,-1,0,0,0,1,-1,-1,0,
0,-1,-1,0,0,0,0,-1,0,0,1,-1,0,-1,0,1,-1,0,-1,0,-1,0,0,1,-1,0,0,1,-1,0,
-1,0,-1,0,0,1,-1,0,0,0,-1,-1,0,0,-1,0,-1,0,-1,0,-1,-1,-1,0,0,1,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-2,-2,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__consolas_bold_7_latin_ext_w[560]={ 0,2,4,4,4,4,4,2,4,3,4,4,3,3,
2,4,4,4,4,4,4,4,4,4,4,4,2,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,3,4,4,3,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,4,4,4,4,
2,4,4,4,4,4,4,3,4,3,4,4,4,4,4,4,4,2,2,4,4,4,4,4,4,3,4,4,4,4,
4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,5,5,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,5,4,4,5,4,4,4,5,4,
4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,5,5,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,5,4,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__consolas_bold_7_latin_ext_h[560]={ 0,6,2,5,7,6,6,2,8,8,4,4,4,2,
3,6,6,5,5,6,5,6,6,5,6,5,5,6,5,3,5,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,7,5,6,5,6,5,5,5,5,5,7,6,7,3,2,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,4,4,4,6,4,7,8,7,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,7,5,5,5,
8,6,2,6,4,4,3,2,4,2,3,5,3,3,2,6,6,2,2,3,4,4,5,5,5,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,7,7,7,7,7,6,5,6,6,6,
6,6,6,7,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,6,6,6,6,6,7,7,7,
6,6,6,6,7,6,7,6,7,6,7,6,7,6,6,7,5,6,6,6,6,6,6,6,7,6,6,6,7,7,
7,7,7,7,7,8,6,6,5,5,6,5,6,5,6,5,7,7,6,4,6,7,7,7,7,7,4,6,6,7,
7,6,6,5,5,5,5,6,5,7,6,6,5,6,7,6,7,6,7,6,7,6,6,5,6,5,7,6,6,5,
7,6,7,6,7,6,7,6,7,7,6,7,5,6,7,6,7,6,7,6,7,7,7,6,7,6,6,5,6,7,
6,6,5,6,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,8,6,6,7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,6,7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__consolas_bold_7_latin_ext_s[560]={ 253,253,85,142,58,226,125,82,1,6,231,
6,251,65,36,209,204,51,56,25,66,239,249,126,30,156,252,6,11,26,227,
35,68,106,141,20,116,146,151,15,166,161,234,111,101,136,131,244,121,93,36,
159,26,199,232,217,86,81,76,170,120,234,21,49,78,41,100,31,224,21,16,
229,6,1,1,242,237,186,206,222,56,194,196,202,26,192,171,191,181,105,176,
11,18,67,90,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,253,151,134,
127,122,117,10,115,54,140,211,201,11,65,216,74,16,61,44,31,69,10,1,
62,59,39,221,226,157,177,167,91,81,16,11,21,219,214,45,144,1,196,189,
184,179,174,169,164,71,154,53,63,73,132,72,241,62,42,52,32,6,95,137,
86,191,76,71,66,61,48,107,51,46,41,36,31,182,187,112,207,6,197,251,
246,241,236,231,236,221,216,211,206,201,16,165,78,180,175,170,165,88,155,103,
145,98,135,113,125,179,115,109,154,147,93,88,83,78,73,68,63,87,53,48,
43,194,204,214,107,238,224,243,21,249,244,66,40,229,102,218,56,208,51,92,
77,187,1,177,112,102,117,122,127,246,162,172,97,21,7,185,86,96,91,76,
167,132,82,157,137,152,147,57,197,47,192,37,182,26,202,234,162,223,247,248,
213,1,61,229,239,219,18,209,13,199,28,189,184,23,173,71,33,160,38,149,
152,139,142,129,124,118,98,108,58,120,91,104,83,130,160,96,150,46,140,172,
81,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,110,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,37,13,145,135,31,42,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,26,130,189,184,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212, };
static unsigned short stb__consolas_bold_7_latin_ext_t[560]={ 8,1,45,32,1,18,25,45,1,1,39,
45,39,45,45,25,25,39,39,32,39,25,25,39,32,39,32,32,39,45,32,
32,1,39,39,32,39,39,39,32,39,39,25,39,39,39,39,25,39,1,39,
25,39,25,32,32,39,39,39,1,25,1,45,45,45,39,25,39,25,39,39,
25,39,39,10,32,32,39,39,32,25,25,39,32,25,32,39,39,39,25,39,
10,1,9,45,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,8,25,1,
32,32,32,1,25,45,25,39,39,45,45,39,45,45,32,45,45,45,32,32,
45,45,45,39,39,32,32,32,25,25,25,25,25,25,25,32,1,25,18,25,
25,25,25,25,25,32,25,1,1,1,9,9,39,9,9,9,9,10,25,32,
25,18,25,25,25,25,1,32,25,25,25,25,25,32,32,32,32,25,32,18,
18,18,18,18,39,18,18,18,18,18,10,1,1,18,18,18,18,1,18,1,
18,1,18,1,18,1,18,18,1,32,18,18,18,18,18,18,18,9,18,18,
18,1,1,1,9,1,1,1,1,9,9,32,32,9,32,9,32,9,32,9,
9,9,45,9,9,9,9,9,9,39,9,9,9,10,18,18,32,32,32,32,
9,32,9,9,9,32,9,9,9,9,9,9,9,9,9,9,32,9,32,1,
9,18,39,1,9,1,18,1,18,1,18,1,1,18,1,39,18,1,18,1,
9,1,9,1,1,1,18,1,18,18,39,18,1,18,18,39,18,39,18,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,25,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,1,1,25,25,1,1,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,1,25,1,1,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32, };
static unsigned short stb__consolas_bold_7_latin_ext_a[560]={ 62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT or STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_7_latin_ext(stb_fontchar font[STB_FONT_consolas_bold_7_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT][STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_7_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_7_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_7_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_7_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_7_latin_ext_s[i] + stb__consolas_bold_7_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_7_latin_ext_t[i] + stb__consolas_bold_7_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_7_latin_ext_x[i];
            font[i].y0 = stb__consolas_bold_7_latin_ext_y[i];
            font[i].x1 = stb__consolas_bold_7_latin_ext_x[i] + stb__consolas_bold_7_latin_ext_w[i];
            font[i].y1 = stb__consolas_bold_7_latin_ext_y[i] + stb__consolas_bold_7_latin_ext_h[i];
            font[i].advance_int = (stb__consolas_bold_7_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_7_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_7_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_7_latin_ext_s[i] + stb__consolas_bold_7_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_7_latin_ext_t[i] + stb__consolas_bold_7_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_7_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_7_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_7_latin_ext_x[i] + stb__consolas_bold_7_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_7_latin_ext_y[i] + stb__consolas_bold_7_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_7_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_7_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_7_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_7_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_7_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_7_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_7_latin_ext_LINE_SPACING
#endif
