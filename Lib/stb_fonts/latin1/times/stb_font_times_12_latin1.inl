// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_12_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_12_latin1'.
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

#define STB_FONT_times_12_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_12_latin1_BITMAP_HEIGHT         52
#define STB_FONT_times_12_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_times_12_latin1_FIRST_CHAR            32
#define STB_FONT_times_12_latin1_NUM_CHARS            224

#define STB_FONT_times_12_latin1_LINE_SPACING           8

static unsigned int stb__times_12_latin1_pixels[]={
    0x18805100,0x3002e020,0x05540233,0x22029800,0x04423300,0x9106a600,
    0x80088280,0x3500e200,0x4c000000,0x00220099,0x48811071,0x2e000000,
    0x0d405101,0x5072ee04,0x0300b809,0x577dc0a6,0x30488512,0x0ddc0759,
    0x27262454,0xb50314b8,0x02e16039,0x18814428,0x100d40a2,0x0e6d4095,
    0x5301cab8,0x26e604c1,0x103500b9,0x6d403503,0x0395701c,0x20557024,
    0x3002d838,0x98900809,0x7c131119,0x886a18ef,0x1310ccc4,0x20998666,
    0x703a209c,0x22209862,0x00c42c09,0x1a0a0570,0x0022004c,0x30088031,
    0x4c1d0a03,0x4c426664,0x80110310,0x98804008,0x26620999,0x26662099,
    0x86547609,0x87af660c,0x224190ca,0xfd1621f8,0x1225831d,0xf12c43f1,
    0x87a62c43,0xe886205a,0xb9961622,0x234c0ba9,0x20f54c2a,0x05d4dcc5,
    0x302ea6e6,0xb9817537,0x371c0ba9,0x21a6113b,0x2c43f10f,0xc8059031,
    0xae816402,0x4cd74499,0x924cd744,0x55985343,0x8398a68b,0x37261c0e,
    0xd0913418,0x0e074381,0x012e3b17,0x20e1fc81,0x684a83a5,0x0aa72054,
    0xd12a0e87,0xa83a2541,0x44950744,0xb8c5a372,0x703a2e84,0x202ec0c4,
    0xd82ec05d,0x2043b021,0x2e0b821d,0x8f24c0ab,0x20ee0abb,0x18a81c0e,
    0x0e848874,0x44703a1c,0x00166714,0x560e1d57,0x9a07c469,0x50164c19,
    0x261f11a6,0x46987c46,0xf88d30f8,0x562b1150,0x41f11aa1,0xa8311c0e,
    0x1d1500e8,0x3603a2a0,0x131d8131,0x414131d8,0x0915983e,0x0e84a87d,
    0x3418a81c,0x4381d091,0x26f21c0e,0x022307a1,0xbac1d6e7,0x2a341e84,
    0x9204ba21,0x0971e84b,0x47a12e3d,0x3131e84b,0x1d114f27,0x4703a2d4,
    0x704b9c18,0x84b9c12e,0x66c0cacd,0x6566c0ca,0x74c0dc00,0x441b81a9,
    0xa81c0e85,0x84892218,0x703a1c0e,0xabd98990,0x66c70622,0x788d3583,
    0x3b21d468,0x88d3340c,0x4cf11a67,0x88d33c46,0x5cd6c547,0x2eb2618a,
    0x311c0e83,0x4c3dd5cc,0xab987bab,0xb021d87b,0x20876043,0x0c981c1c,
    0x0ec1c0e0,0xa862a071,0x88761221,0x28710ec3,0x83103209,0x1d2c2743,
    0x0ae2c254,0xa83a2c05,0xe8950744,0x541d12a0,0x70280544,0x1c43b01f,
    0x70b21c31,0x0b21c2c8,0x43b0443b,0x80887608,0x20b301cb,0xb10a01cb,
    0x8c540755,0x220ec408,0xad883aad,0x7029a83a,0x87661883,0xa8966248,
    0x0a6e0aaa,0x2880c451,0x20555544,0x440aaaa8,0x5440aaaa,0x89a80aaa,
    0x32600a98,0x21d56c42,0x7641b518,0x8f641b51,0x447b20da,0x3a25aace,
    0x33a25aac,0x401105aa,0x000880aa,0x01110010,0x10010198,0x00100000,
    0x22000988,0x00200200,0x00000000,0x20000310,0x00000200,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x03300640,0x00388388,0x838800a8,0x1440c40a,
    0x20288330,0x51021018,0x000660a0,0x2a066035,0x80100a80,0x1800102b,
    0x20600001,0x2060c0c0,0x402204c1,0x200cc008,0x012a2029,0xd102e035,
    0x324a98b3,0xc882e1da,0x0c8243ab,0x0b812090,0x70a50e50,0xd1d09057,
    0x81905758,0x425cc3b9,0x05700cdb,0x68d87d91,0x74ec16c4,0x8aa63440,
    0xb0662c19,0x832e6188,0x40355503,0x1099880c,0x03001013,0x4cc42662,
    0x42666099,0x13310998,0x8020caea,0x08040100,0x0510a330,0x58002021,
    0x02101075,0x32008021,0x89800402,0x2c808005,0x8905120a,0x0a95ce43,
    0x040351b0,0x41663e88,0xe816402c,0x224cd743,0x8fa1f43e,0x24aa84e8,
    0x5dc4774a,0x2e05d5c4,0x2eb2a0ba,0x4497710b,0x92ee24bb,0x23624bb8,
    0x2a25540d,0x205d5c4a,0x0bb00bab,0x4aa89771,0x2ae1f554,0x0a70180b,
    0x0a920724,0x01446554,0x543913b9,0x1cd30774,0x05d80bb0,0xb021d83b,
    0x20ec1d83,0x3ab264d8,0x19926b12,0x2a5a9d4d,0x98538b53,0x2668ccd1,
    0x2268ccd1,0x7564c975,0x2a5d5932,0x5a9d4b53,0x8cc0e8a8,0x4cbab266,
    0x5a9d4b33,0x2626a054,0x4cc54331,0x4a22a0b9,0x299c6a19,0x22447dcc,
    0x2f209358,0x01d15019,0x07603a2a,0x83b0263b,0x6540ec1d,0x26b10374,
    0x45934d44,0x32a78b27,0x1a6a0aca,0x469a8d35,0x2796269a,0x2c81b81b,
    0x4e1e2c9e,0x2e69a84b,0x64f12b81,0x9c0589e2,0x711382c8,0x2a0b2270,
    0x2932ac88,0x935883dc,0x7380fa20,0x6c25ce09,0x206566c1,0x8760ec1d,
    0x232cd651,0x695c9358,0x2952c52a,0x95c39458,0x25734ae6,0x1b134ae6,
    0x2cc65996,0x952c52a3,0xf7573162,0x32ccd2b8,0x2952c52a,0x20dcee58,
    0x4287570a,0x3ab8540a,0x749ba944,0x5620a749,0x4c0b2049,0xab987bab,
    0x0ec1d87b,0x20ec1d81,0x86af2a1d,0x6de744ed,0x643d7d50,0x05de40bb,
    0xd7d50a13,0x547afaa3,0xd7d51ebe,0xb0aaf6a3,0x644ed89d,0x05de40bb,
    0x5f54590e,0x5913b61e,0x20bbc817,0x8a20b8d8,0xbb8663a9,0x43a98a22,
    0x7446f223,0x743deabc,0x05900dbc,0x6438590e,0x88760ec2,0xd83b0760,
    0x00000281,0x00008000,0x00000000,0x06d40000,0x000003d9,0x04020600,
    0x40209981,0x20404400,0x19d10000,0x47b20da8,0x4c7b20da,0x559d10ce,
    0xe98674cb,0x0019d30c,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x42200015,0x44018180,
    0x8866608a,0x0c044c09,0x44031006,0x26618809,0x26018819,0x26622620,
    0x10cc4330,0x04011013,0x44098188,0x4c031009,0x28851011,0x40506620,
    0x43219500,0x2060cc18,0x088304aa,0x1d3b0973,0x83ca8a98,0x2205c642,
    0x3e25b8ae,0xd3391621,0x20536644,0x4c1a88a8,0xd115c2ee,0x44544b99,
    0x88dc641a,0x114cb91f,0x2e60d85f,0x645c0ba9,0xd1122e20,0x22392c45,
    0x27260e8a,0x544b84b8,0xba87e204,0x29a05903,0x1d991224,0x3e2054a6,
    0x00084ae0,0x4511ae2c,0x07447349,0x26381d0a,0x099608a4,0x44dd5cc4,
    0x8615c0e1,0x93333138,0x91cd2231,0x3b829a65,0x2541d0a2,0x12a8e675,
    0xa81c3f90,0x703a2392,0x40498930,0x5d80420e,0x40815770,0x0572c860,
    0x953506dc,0x4774a8ee,0x287a2e59,0x1aa589dc,0x744703a0,0x4285100d,
    0xd8a73372,0x40a7a22e,0x4509250b,0xf9acc3bd,0x054f1071,0x970f88d3,
    0x2e02b9a2,0x581470ea,0x9955016a,0xe81ead98,0x74541a60,0x26987d00,
    0x92a37069,0x888362a0,0x9ac49358,0x2e8552e4,0x973c770a,0x703a1fc8,
    0x6442fd88,0x32e50a0e,0x2a3b10a4,0x4d490974,0x213a6284,0x018bbb8f,
    0xd0970e5b,0x4d6a7a23,0x56e703dd,0x5c3502e3,0x224d2604,0x81d0b359,
    0x5c12e706,0x44834681,0x06c663ed,0x56249ac4,0xf867a249,0xd14a8510,
    0x1d1a234c,0x703f3038,0x26e304c7,0x2a73051c,0x46388d13,0x7b489425,
    0x03e8abc8,0x8d3067a6,0x51dcc478,0x479b1c05,0x81660c0c,0x2498932b,
    0x4c340e86,0x20707bab,0x2405c346,0x1113f336,0x9358926b,0x829662d8,
    0x21e89358,0x4710ec68,0x06a07219,0x1371aa85,0xb8b24350,0x4c4d4540,
    0x3e624730,0x05e809b0,0x2442541d,0xd0e02391,0x3a020ec9,0x8934a8c1,
    0x86849149,0x97164386,0x0a8d1a03,0x26622441,0x5e75621e,0x836f3a0d,
    0x0a0a9acb,0x5e441d4c,0x556c44b9,0x52556cc3,0xa8850339,0x2f6a1a99,
    0x1204d5c2,0x706a66a2,0x0dc90353,0x55440aa0,0x2a1cc0aa,0x0ecc4eca,
    0x0b116c91,0xcd8557b3,0x2ab620ec,0x3f10ef20,0x23d906d4,0x223f1008,
    0x09ddd71f,0x000006c0,0x80001008,0x02200400,0x00040100,0x00080100,
    0x80000000,0x02000000,0x20040100,0x00000100,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x33103331,0x887af2a0,0x22133119,0x33331099,0x000a2281,
    0x93701445,0x310a9817,0x89986623,0x01331098,0x41333330,0x22131018,
    0x24560099,0x40201331,0x80266208,0x26219999,0x4cc42621,0x22041330,
    0x2aa09999,0x4026624c,0x00199998,0x9ae88044,0x5981744c,0x1722e8b5,
    0x499ae87d,0x1d0599e2,0x4416a28d,0x39a98575,0xd506c4ba,0x5c00fa24,
    0x3a2399be,0x2fa24e83,0x58b40dd9,0xb83aefa2,0x883a60cd,0x220dd9be,
    0x3a25c99c,0x27c89663,0x2ba1223a,0x926713a9,0x5c1eaae8,0x2a1b9eaa,
    0x440983ca,0x7b0743b5,0xb1e49837,0xb07625c3,0x0589a043,0xb4416200,
    0x4ec0e41b,0x8331d038,0x4797001d,0x0b6a3640,0x45a35c3b,0x083c8ec5,
    0xd70ec0d8,0x6981d104,0x21c5740e,0x210ec2eb,0x71d8932b,0x984d108b,
    0x40130b73,0x4ec1d11d,0x245661e8,0x0ec4b876,0x89a04c76,0x2634c575,
    0x7076b626,0x41bd9815,0x0eea04ad,0x32660076,0x23cb8133,0xf10ec2cb,
    0x8ec58b41,0x83b5b52d,0x1f10ec0c,0x26f205d0,0xb107d101,0x34a8a3b0,
    0x207b1d89,0x789ab868,0x20aaeeaa,0x8ec3ebcd,0x06a7a63c,0xd899557b,
    0x206566c1,0x1a06b626,0x4493689a,0x40e43cee,0x9d7505dd,0x6400ec15,
    0x5c0cacc9,0x54593368,0x7c3d0abe,0x2ef62ebc,0x32255a23,0x70ba0ec0,
    0x201f4409,0xbd85885c,0x12f7a23b,0x34405d7b,0x098586d4,0x8ba1d8c4,
    0x3261e99d,0x225c3b00,0x6810ec1d,0x21a03ba2,0x3324d626,0x3b0390e2,
    0x35d330b9,0x26600ec1,0xb38113c9,0x43b0b275,0x1d805c78,0x0c893588,
    0xe98f10ec,0x33016400,0x1d85885b,0x53b12601,0x6cc3440b,0x2aa620ba,
    0xd8763509,0xb302af63,0xd8970ec0,0x34110ec1,0xd0d0b3b1,0x36e49ac4,
    0x6c0e42aa,0xae998b91,0x41887609,0x4e088f23,0x1d8592e9,0x36049932,
    0xd8935881,0xe8990ec0,0x40b20621,0x2e81f128,0xb12600f4,0x43440f63,
    0x33333010,0x6567cc23,0x5540fe64,0xbb13f980,0x74433a61,0x47e25aac,
    0xf10cd8ea,0x8ea8fc43,0x220620db,0x44fe60be,0x30ba21ef,0x3c8b759d,
    0x4cb55bd1,0x433a290d,0x083dbcf9,0x1d507f30,0x98ba21b7,0x7643cbcf,
    0x7440ebaa,0xe8874c0c,0x00fe601e,0x44fe6155,0x00fdc0be,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x20222222,0x1a199998,0xb8800200,0x2a254c3a,0x205d544a,
    0xa54aaa26,0x86436a3b,0x88aa995b,0x2ee20051,0x0a131bac,0x32a5b575,
    0x36b6a1da,0x05141daa,0xa8103033,0x2a0c1b8e,0x206023ac,0x00204418,
    0x55430420,0x77752aaa,0xa8367277,0x8080aaaa,0x200ba820,0x4cae2018,
    0x8ed5ccd1,0x4ce61529,0x44675044,0x850e8735,0x2a90a936,0x98eeeea2,
    0xba4b75f1,0x2b12cc21,0x9acda249,0x800d54c4,0x703222a9,0x22499859,
    0x272a2586,0x4d44e6a1,0x26351672,0x0492b666,0x40000a00,0x0dcc0080,
    0x40dcc0c4,0x2e06e69a,0x901e2b82,0x5c39ac4b,0x8da9c82b,0x131a2ea2,
    0x5c1aaa14,0x1074468b,0x562b126b,0x5543b848,0x38ae2aaa,0x85101d07,
    0x05ed4485,0x5942a735,0x44515417,0xaaa8438b,0x300602aa,0x01013333,
    0x554ee001,0x20772abb,0x2124cd2b,0x0b25424a,0x26b14a8c,0x64c17444,
    0x1bac0ca9,0x0e95c50a,0x8ec1aac1,0x2b126b10,0x99a89158,0x26700882,
    0x22cd4331,0x92162098,0x2b22bbd8,0x0d4c2ee3,0x00318110,0x26660000,
    0x10808099,0x880aa81f,0x2a0aa881,0x13b61ebd,0x0bbb87db,0x74537534,
    0x80640dbb,0x8e510915,0xbada8e19,0x70a130ce,0x23aa555b,0xd51d30db,
    0x030c1b71,0x83099813,0xba936751,0x81503aa2,0x00000003,0x00000000,
    0xa84c1010,0x2a00c402,0x00000002,0x00000000,0x08557550,0x00000000,
    0x00000000,0x5c400000,0x00775421,0x00000000,0x26666000,0x02000619,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x03773180,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_12_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_12_latin1_y[224]={ 9,1,1,1,1,1,1,1,1,1,1,2,7,6,
7,1,1,1,1,1,1,1,1,1,1,1,4,4,2,4,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,10,1,4,1,4,1,4,1,4,1,1,
1,1,1,4,4,4,4,4,4,4,2,4,4,4,4,4,4,1,1,1,5,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,9,3,1,1,2,1,
1,1,1,1,1,4,4,6,1,0,1,2,1,1,1,4,1,4,8,1,1,4,1,1,1,3,-1,-1,-1,-1,
-1,0,1,1,-1,-1,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,3,1,-1,-1,-1,-1,-1,1,1,1,1,
1,1,1,1,4,4,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,3,1,1,1,1,1,1,1,
 };
static unsigned short stb__times_12_latin1_w[224]={ 0,2,4,6,5,9,9,2,4,4,5,6,3,4,
2,4,6,4,5,5,6,5,5,5,5,5,3,3,6,6,6,5,10,8,7,7,8,7,6,8,8,4,5,8,
7,10,9,8,6,8,8,6,7,8,8,11,8,8,7,4,4,3,5,7,3,5,7,5,6,5,5,6,6,3,
4,6,3,9,6,6,7,6,4,4,4,6,6,8,6,6,5,4,2,4,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,5,6,6,6,
2,5,4,8,4,6,6,4,8,7,4,6,4,3,2,6,6,2,3,3,4,6,8,8,8,5,8,8,8,8,
8,8,11,7,7,7,7,7,4,4,4,4,8,9,8,8,8,8,8,6,8,8,8,8,8,8,6,6,5,5,
5,5,5,5,7,5,5,5,5,5,3,3,4,4,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,
 };
static unsigned short stb__times_12_latin1_h[224]={ 0,9,4,9,9,9,9,4,11,11,5,7,4,1,
3,9,9,8,8,9,8,9,9,9,9,9,6,7,7,3,7,9,11,8,8,9,8,8,8,9,8,8,9,8,
8,8,9,9,8,11,8,9,8,9,9,9,8,8,8,11,9,11,5,2,3,6,9,6,9,6,8,8,8,8,
11,8,8,5,5,6,8,8,5,6,8,6,6,6,5,8,5,11,11,11,2,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,9,11,9,6,8,
11,11,3,9,4,6,3,1,9,2,4,7,5,5,3,8,11,3,4,5,4,6,9,9,9,9,10,10,10,10,
10,9,8,11,10,10,10,10,10,10,10,10,8,11,11,11,11,11,11,5,9,11,11,11,11,10,8,9,9,9,
9,9,9,9,6,8,9,9,9,9,8,8,8,8,9,8,9,9,9,9,9,5,7,9,9,9,9,11,11,11,
 };
static unsigned short stb__times_12_latin1_s[224]={ 255,252,216,95,56,227,237,253,23,44,187,
19,212,200,253,24,29,163,234,61,246,81,87,93,108,144,58,8,26,225,12,
170,169,210,1,176,168,38,208,36,24,33,199,86,102,122,157,135,149,180,222,
54,231,45,126,114,194,185,177,49,67,99,160,244,221,33,191,45,184,39,80,
73,66,62,112,50,46,132,125,51,16,215,178,62,203,67,74,81,166,219,119,
117,198,128,193,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,255,167,122,
150,97,95,86,72,239,99,193,90,232,200,72,244,198,246,173,156,253,142,37,
253,208,183,203,112,218,209,200,194,201,19,10,210,219,159,110,78,244,228,236,
33,28,51,41,46,133,89,103,133,142,151,160,142,15,28,189,63,54,1,9,
126,114,75,108,168,120,102,104,240,62,133,139,174,226,230,205,57,180,156,81,
88,145,152,187,149,239,68,247,1,8,16,8,1, };
static unsigned short stb__times_12_latin1_t[224]={ 1,1,43,13,13,13,13,24,1,1,43,
43,43,48,34,24,24,34,24,24,24,24,24,24,24,24,43,43,43,43,43,
24,1,24,34,24,34,34,34,24,34,34,24,34,34,34,24,24,34,1,34,
24,34,24,24,24,34,34,34,1,24,1,43,42,43,43,24,43,24,43,34,
34,34,34,1,34,34,43,43,43,34,34,43,43,34,43,43,43,43,24,43,
1,1,1,48,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,
43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,43,1,24,1,
24,43,34,1,1,42,24,43,43,43,48,24,45,43,34,43,43,38,34,1,
29,43,43,43,43,13,13,13,13,1,13,13,1,1,13,34,1,1,1,1,
13,13,13,13,13,34,1,1,1,1,1,1,43,24,1,1,1,1,13,34,
13,13,13,13,13,13,13,43,24,13,13,13,13,24,24,24,34,13,34,13,
13,13,13,13,43,34,13,13,24,24,1,1,1, };
static unsigned short stb__times_12_latin1_a[224]={ 43,58,71,87,87,144,135,31,
58,58,87,98,43,58,43,48,87,87,87,87,87,87,87,87,
87,87,48,48,98,98,98,77,160,125,116,116,125,106,96,125,
125,58,67,125,106,154,125,125,96,125,116,96,106,125,125,164,
125,125,106,58,48,58,81,87,58,77,87,77,87,77,58,87,
87,48,48,87,48,135,87,87,87,87,58,67,48,87,87,125,
87,87,77,83,35,83,94,135,135,135,135,135,135,135,135,135,
135,135,135,135,135,135,135,135,135,135,135,135,135,135,135,135,
135,135,135,135,135,135,135,135,43,58,87,87,87,87,35,87,
58,132,48,87,98,58,132,87,69,95,52,52,58,100,79,43,
58,52,54,87,130,130,130,77,125,125,125,125,125,125,154,116,
106,106,106,106,58,58,58,58,125,125,125,125,125,125,125,98,
125,125,125,125,125,125,96,87,77,77,77,77,77,77,116,77,
77,77,77,77,48,48,48,48,87,87,87,87,87,87,87,95,
87,87,87,87,87,87,87,87, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_12_latin1_BITMAP_HEIGHT or STB_FONT_times_12_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_12_latin1(stb_fontchar font[STB_FONT_times_12_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_12_latin1_BITMAP_HEIGHT][STB_FONT_times_12_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_12_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_12_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_12_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_12_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_12_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_12_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_12_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_12_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_12_latin1_s[i] + stb__times_12_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_12_latin1_t[i] + stb__times_12_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_12_latin1_x[i];
            font[i].y0 = stb__times_12_latin1_y[i];
            font[i].x1 = stb__times_12_latin1_x[i] + stb__times_12_latin1_w[i];
            font[i].y1 = stb__times_12_latin1_y[i] + stb__times_12_latin1_h[i];
            font[i].advance_int = (stb__times_12_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_12_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_12_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_12_latin1_s[i] + stb__times_12_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_12_latin1_t[i] + stb__times_12_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_12_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_12_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_12_latin1_x[i] + stb__times_12_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_12_latin1_y[i] + stb__times_12_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_12_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_12_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_12_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_12_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_12_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_12_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_12_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_12_latin1_LINE_SPACING
#endif
