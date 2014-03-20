// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_26_usascii_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_26_usascii'.
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

#define STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH         256
#define STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT         84
#define STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_bold_26_usascii_FIRST_CHAR            32
#define STB_FONT_courier_bold_26_usascii_NUM_CHARS             95

#define STB_FONT_courier_bold_26_usascii_LINE_SPACING          12

static unsigned int stb__courier_bold_26_usascii_pixels[]={
    0x99500200,0x54c00101,0x93015000,0x06a03261,0x877009b0,0x9997302c,
    0x805e6644,0x401ceeca,0x1803ddb8,0x54466600,0xdb88009a,0x54c400bd,
    0x2601330a,0x20198809,0x301cedb8,0x6664c19b,0x9801bccc,0x98002ddb,
    0x07fee05f,0xff1001fd,0x37fd401d,0x43fc9fec,0x1fe607f8,0x3e61ff50,
    0x7ffff81f,0x11bfffe6,0x9ffffffb,0x3ffffa20,0x07fff905,0xffcfffe8,
    0x3e603fff,0x2e05ffff,0xffcfffff,0x3fffe66f,0x83ffff22,0xffffffe8,
    0x2a3ffe82,0xffffffff,0xffffd100,0x5fd8003f,0xfd03baa0,0x17ff2009,
    0xfe82ffe8,0x7f987fd3,0x75bffb10,0x6fe8bfd0,0x267feeb8,0x7ec2deff,
    0x3ffebbdf,0x7f912fe8,0x0fc8af98,0x3fffffa0,0xd05fffef,0x09ffb9ff,
    0xfffdfffb,0x7fccdfff,0x3fff22ff,0x2fbff20f,0xfff86fec,0x3bbbfea4,
    0xfff304ee,0x4001b77b,0x70001ff9,0x3ea001ff,0x201ff107,0x985fd2fe,
    0xffffb87f,0x3fea1fff,0x9817fd42,0x5c1fe67f,0x1ffc82ff,0x8bf10fea,
    0x2a01f45c,0x3f223fff,0x507fcc3f,0x1ffdc1ff,0x303fff71,0x0ff905ff,
    0x85ff05b5,0x1fea3ffe,0x01eff980,0x4437ec00,0x40999999,0xff5003ff,
    0xff81fe60,0x7f985ff2,0x76677fc4,0x41bfa2ff,0x4ff305fe,0x07ff07f9,
    0x01fb37ec,0x3e26c8db,0x827fcc02,0x42fdc6fc,0x413fa2ff,0xdf901ffc,
    0x4003ff88,0x1fff44fd,0x7ec00ff5,0x7c40000e,0x7fffec2f,0x3fdc4fff,
    0xf307fa80,0x59ff510f,0x3fcc19ff,0x47f61bee,0xff702ff9,0x7ccff303,
    0x4c07f987,0xfb51fa7f,0x7ebdf88f,0x807fcc04,0x0ffa0ff9,0x0ffc53f6,
    0xf101ff98,0x0037e45f,0xffb0bfea,0x76e7fd45,0x12ff982c,0x437e4000,
    0xfffffffd,0x4017fc44,0x0ff307fa,0xffffffff,0x51fe63ff,0x7dc101df,
    0x05ff100f,0x43fccff3,0x7fc406fa,0x7fff4bf0,0x99cfd987,0x2ff987fc,
    0x7fc4ff70,0x3fe6fb81,0x403ff703,0x07ff16fc,0x0dffff70,0x7fd43ff9,
    0x544fffff,0x0effeaff,0x40bfe200,0x4fd99998,0xf9806fc8,0xfb0ff307,
    0xbfffffff,0x3fe1fe61,0x7fc81cef,0x7cc1ffc0,0x3ee1fe67,0xbf1ff806,
    0x503ecfea,0x3037dff9,0xff983dff,0x2a03fe25,0x307ff66f,0x7c403fff,
    0xb006fcaf,0xf705ffff,0x67ffcc1f,0x3ee2fffb,0x1fffffff,0x800ff900,
    0x2ff884fd,0x7177fc40,0x3fe60dff,0x7cc0ff98,0xffffd987,0xd017f62e,
    0x4cff30bf,0x407f887f,0x36bf0ff8,0xffb51f66,0xff98037d,0xfffeceff,
    0x2a03fe20,0x3bffe26f,0x01ffffec,0x01ffffe4,0x1fffca88,0x06607fdc,
    0xfffb9bf6,0x806fea9d,0x6c003ff8,0x00dfb04f,0x7ffcbffb,0x3e6ff303,
    0x2607f987,0xfd0fffec,0x986fd809,0x741fe67f,0xf9fee01f,0x89f61f75,
    0xcfea8bef,0xfffff301,0xff03bfff,0xd98bf905,0xffffffff,0x37ffc401,
    0x46fe8800,0x3ea007fa,0xf51bfea7,0x0ffb803f,0x9827ec00,0x3fe201ff,
    0x11bfaa1d,0xffb9ffb7,0x223fcc17,0xfb3fd880,0x985fe80b,0x641fe67f,
    0x3ff980ef,0x7f7fc57e,0xd59f300f,0x655fe60d,0x13f600bd,0x6dc40ffa,
    0x801ff8ac,0x20003ffc,0x01ec0ffa,0x3e61ff30,0x402ff81f,0xfd8004fe,
    0x9817f604,0xb8ff307f,0xffffffff,0xff1fe65f,0x3f2bf701,0x4c1ffc07,
    0x4c1fe67f,0xff511eff,0x3f266d8d,0x44bb01ff,0x007f981f,0x7fc47fb8,
    0x07fe2000,0x0001bf60,0x70000ff5,0x443ff8ff,0x3fea02ff,0x04fd8000,
    0x7d407fe6,0xc88ff307,0xdffeeffe,0xff89fe62,0x27ff510d,0xff100ffb,
    0x7ccff305,0x3fffa207,0x7e41efff,0x7c4d8000,0x8007f982,0xfe98cff9,
    0x0ffc4006,0x100ffe60,0x7fd4c17b,0x41cf9805,0x7fe45ffa,0x401ffb32,
    0xfb0004fe,0x505fe809,0x41fe60ff,0x30bf95fc,0x7fffc4ff,0xf30fffff,
    0x03fee07f,0x07f99fe6,0x67fffec4,0x8003fa80,0x987c9afa,0x000bcffc,
    0x3fffffee,0xff971002,0xfecca839,0x7ffd403f,0x41ffffff,0x3ffe65e9,
    0x80ffffff,0x4ffffffe,0x0003fea0,0x3ea027ec,0x307fa80f,0x653f20ff,
    0x747f984f,0x0cffffff,0x5ff837ec,0x3fccff30,0x2bbffe60,0x23fd8750,
    0x7fe402c8,0x7fffc42e,0x7e4006ff,0x3a002fff,0x2a7fffff,0x2fffffff,
    0x7ffffe40,0x0ffa80df,0x3fffffaa,0xfffb300d,0x05fe807f,0x200ff600,
    0x07fa84fe,0x9fb01ff3,0x1fe613f6,0xf500ffb8,0x01ffb85f,0x03fccff3,
    0xfffffff1,0x7fc43fff,0x3003ffef,0x6f7775c0,0x00330002,0x7ddddb50,
    0x77777644,0x1333000d,0x26201300,0x00cc001a,0x8000ffcc,0xfb801ff8,
    0x813ff20f,0x9fec2eff,0x07f983fd,0xdfd01fe6,0xeda86fe8,0x37bfe67f,
    0x777ffcc1,0xb884ffff,0x00001bdd,0x00000000,0x00000000,0x00000000,
    0x4017f600,0xfffdccb9,0x227ff000,0x3ea00fff,0xfc8fe46f,0x2607f881,
    0x87fcc07f,0xfff81ff9,0x3fffe67f,0x02981986,0x00000000,0x00000000,
    0x00000000,0x00000000,0x7f4007fe,0x001fffff,0x002a9bee,0xb8000373,
    0x5401ec01,0xcca80dc2,0x2f33224c,0x00000001,0x00000000,0x00000000,
    0x00000000,0x0ea00000,0xadeedb80,0x001b8000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2a600000,0x9813312b,0x644004cc,0xcccccccc,0x19973002,0x066f64c0,
    0x102ddb88,0x00005997,0xc8035775,0x2664c02c,0x3332e200,0x00095004,
    0x0073bb2a,0x00337b2a,0x7300665c,0x3332e00b,0x2a01cccc,0x0b9ceedc,
    0x3fff6200,0x12fffeff,0x9800ffff,0xffffffff,0xffff004f,0x3fffee01,
    0x7ff442ff,0x7fe41fff,0x3e60003f,0x206fffff,0x3fe205ff,0x7fdc007f,
    0x3fd007ff,0x7ffec400,0x3f603fff,0x401fffff,0x6cc1fffa,0xf9807fff,
    0x7fffffff,0xffffff90,0x3ff507ff,0x3fbfffa2,0x2e2fffff,0x7cc007fe,
    0xffeeeeef,0x1ffb7004,0xf97dff50,0x67fec1ff,0x7ecc6ffc,0x3f60003f,
    0x206ffeef,0x7f5c04ee,0x77644007,0x05ff007f,0x5deffec0,0xffd84ffe,
    0x00fffdbe,0xff07fffa,0x2e00ffff,0x2deffeed,0xcaceffd8,0xffc84ffe,
    0x2a17ff94,0xff305ffe,0x3e0bd000,0x3fe2003f,0x7c46fd80,0x443ff13f,
    0x03fd83ff,0x001ff300,0x03fcc000,0x300ff300,0x013337ff,0x3f20bfee,
    0x10ffe21f,0x3fee07ff,0x55edc1ff,0xff88007f,0x205ff501,0x0dd984fd,
    0xbff309ff,0x5545fe60,0xffa80009,0x11355100,0x07fd01ff,0x21fea9fb,
    0x8bfd86fc,0x5c4009aa,0x200999ef,0x98019998,0x400ccc7f,0x3fe207f9,
    0x6fffffff,0x3f604ff8,0x7ec17e26,0xffcff884,0x001fe601,0x7f407fe2,
    0x2007a604,0xbfb01ff8,0x3ff3fe60,0x64003fff,0xffff905f,0xf901ff9f,
    0xf73ff88d,0xfb0ff50d,0x03fffffd,0x3ffffffa,0xfffa85ff,0x37f9807f,
    0x980dffff,0x3ffe207f,0x46ffffff,0x3fcc07f9,0xd83ff880,0x201ff8ff,
    0xf88007f9,0x02ff881f,0x03ff1000,0x7fcc17fa,0x5fffffff,0x3a0ffe00,
    0xffffffff,0xceff980f,0xff50fffd,0x20fff441,0xffeffffd,0xffffd80f,
    0xfa84ffff,0xf9807fff,0x0dffff57,0xf8807f98,0xa80999bf,0x0ffc406f,
    0x2607fec0,0x403ff2ff,0xf88007f9,0x00ff981f,0x217fe000,0xff305ff9,
    0x3ff6639f,0x40ffa802,0xfb31cffc,0x3fee01ff,0x3e22ffff,0xfffd99df,
    0xd127fec2,0x3bee207f,0x54c00999,0x9ff9807f,0x9800bffe,0x05ff007f,
    0xff00df70,0x17fec403,0x03ff37f4,0x02883fcc,0xff303ff1,0x15999950,
    0x3ff22aa8,0x5ffeb89c,0x3a0bff30,0x85fc806f,0x1ffd05ff,0xffffff10,
    0xffffa8df,0x7ec2ffff,0x2a05fc84,0x7f98006f,0xfffff980,0x01fe6002,
    0x7cc017fc,0x807fc407,0xfb83ffe8,0x9807fe1f,0x105f907f,0x1ff303ff,
    0x7fffffd4,0xfd0ffe23,0xbfffffff,0x5c07fe60,0x43ff807f,0xff701ff8,
    0x225ffb01,0x7fd43ffb,0x6c0ffcff,0x205fc83f,0xf98006fa,0xffff9807,
    0x03fcc003,0xf8802ff8,0x41fee01f,0xf882ffe9,0xbffcccff,0x360ff300,
    0x01ff883f,0x776447ff,0x1bee1eff,0x6f7fffe4,0x01ff305f,0xfa803fe6,
    0x807fcc0f,0x3ff80ff9,0x23305fd8,0x83fd87fe,0x1bea05fc,0x201fe600,
    0x03fffff9,0x7c01fe60,0x1dfb002f,0xf507ff10,0x3fe605ff,0x4fffffff,
    0x3f60ff30,0x3a07f983,0xb13f206f,0x90a9803f,0x0ffe60bf,0x3f2037ec,
    0x3609ff05,0x82ff80ff,0x7fdc06fb,0xfc83fd83,0x001bea05,0x3e601fe6,
    0x004ffd8f,0x3fa00ff3,0x43db730c,0xf511eff8,0x3fff70df,0x777774c0,
    0xf301dffe,0x42fbf60f,0x3ea06fea,0xfd5109df,0x4002fc49,0xffb883ff,
    0x7ff931bf,0xfb03ff80,0x3ff2637f,0x8aefd82f,0x2263ffa8,0x985ffeb8,
    0x3f220cfe,0x77dcc40d,0x33100999,0x81333ff5,0x3ff27fb8,0x54cc409d,
    0x500999ff,0xffffffff,0xfffffa85,0x7fe41eff,0x0b9999af,0x20bfe620,
    0x199ffa99,0x3ffffff6,0x7fe400ef,0x4fffffff,0xcb8803ea,0x440fffcc,
    0xffffffff,0x7d406fff,0xfffd100f,0xdfffffff,0xffffff98,0xffff50ef,
    0xfff30bff,0x3fffe2ff,0xfffff11f,0xfa87ffff,0xffffffff,0x4ffff10f,
    0x2a7ffffa,0xffffffff,0xfff900ff,0x36203bff,0xd80cffff,0xffffffff,
    0xffff504f,0x7ffff47f,0x36a5ffff,0x000dffff,0xdfffffb5,0x7ec01885,
    0xb02fffff,0xffff9fff,0x07d1007f,0xfffffc88,0xe984fffd,0x260dffff,
    0x102effff,0x7f4bfffd,0xffd10eff,0x85dfffff,0xffffffe9,0x3ff60eff,
    0x97fffa67,0xffffffe9,0x26200eff,0x0662001a,0xffffffb0,0x3a20bfff,
    0x3f62efff,0x3fffffff,0x88000330,0x2a000099,0x000bdeed,0x0000d4c4,
    0x0006a600,0x026200cc,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x36e60000,0x220b8ade,0x32e2cccb,
    0x76d40bcc,0x3b6a02de,0x6641a9de,0xcccccccc,0x9999713c,0xcb801579,
    0x32e60bcc,0x5e65c2cc,0x88b32e60,0x2e60bccb,0x666542cc,0x2e200bcc,
    0x9931bccc,0xbccca859,0x07333261,0x99999993,0x16664c37,0x5c437997,
    0x0abccccc,0xcccccb98,0x711ccccc,0x99999999,0xfd800199,0x3fffffff,
    0x27fffff2,0x73fffffa,0x9fffffff,0xffffffd0,0x7fffc4bf,0x6fffffff,
    0xfffffff9,0x3fea07ff,0x3ff63fff,0xfff50fff,0x7ffff47f,0x47ffff51,
    0xf11ffffd,0x0bffffff,0xafffffe4,0xf11fffff,0x7fcbffff,0x7ffc7fff,
    0x25ffffff,0xfa9ffffe,0x3fee6fff,0x3fffffff,0x7fffffec,0xf93fffff,
    0xffffffff,0x07fea1ff,0x65deffe4,0x3f664fff,0xffd913df,0x2f7ff219,
    0x3f22ffeb,0x6ffdbbdf,0x3fbbbfe2,0x916feeef,0xffddddff,0xfff9107f,
    0x77fecc19,0x51bff223,0x7e447dff,0x3ffea0ff,0x77ff6dc3,0x3ff2201c,
    0x7fffb1de,0x21deffc8,0x542ffeda,0xdeeffeed,0x44fbfea1,0x3222effc,
    0xffeeeeff,0x3bff663f,0x3ffeeeee,0xddddff91,0x3f61ffdd,0x83ffb83f,
    0x3fd44ff8,0x3f20ff88,0x3fe5fe84,0x3e26fd84,0x7dcff31f,0x3621fec6,
    0x41bf207f,0xff702ff8,0xb80ffdc3,0x0bff22ff,0x6c007fa8,0x03bfee3f,
    0x0cc47fe2,0x7f980df5,0x7e41fec0,0xd889fb05,0xd01ff87f,0x883fd87f,
    0x01bb30ff,0x1fdc09fb,0x7fc41fea,0x3ee07660,0x3e607fe6,0x7cc7fe24,
    0x7fb1bee7,0x2201ff30,0x07fb82ff,0x4ff8b7f4,0x7dcffec0,0x03fd403f,
    0x7fe4ff60,0x5cbfe00d,0x80bf72ff,0x1fec07f9,0x4fd82fe4,0x7fc0ff98,
    0x07f21711,0x7f8dc7fb,0x500bfe00,0x3e20ff50,0x3fe8800f,0x0102bbf6,
    0xf53fccfd,0x6c43fd89,0x42fec06f,0x7fc403ff,0xfd006fec,0xf500bfff,
    0xdbfd800f,0x3fe805ff,0x13f29ffd,0xfd80ff30,0xfb05fc83,0xf81ff709,
    0x0a27f91f,0x9afd4ff6,0x01ff3001,0x220ff500,0x3f2600ff,0x3ffe60ff,
    0x43302cef,0x360547f9,0xfffdbadf,0x507fd403,0xff7001ff,0x3e2003ff,
    0xff5006ff,0xffffd800,0x9cfd800f,0x07fb7fff,0x7ec07f98,0x5fffffff,
    0x7dc49fb0,0xfffff86f,0x7ffec04f,0xf98006ff,0x0ff50007,0x7cc03fe2,
    0xfd881eff,0x400effff,0xffd807f9,0x002fffff,0x02fec9fd,0x4009ffb0,
    0x5005ffe8,0xffd800ff,0x6400efff,0xaffefbdf,0x3fcc02fe,0x3fffff60,
    0xffb05fff,0x01ffffff,0x09ffffff,0x6fffffd8,0x00ff9800,0xf107fa80,
    0x0ffe601f,0x37fedcc0,0x3601fe60,0x0effeeef,0x3e6ff700,0x3fe6001f,
    0x3fff6000,0x07fa804f,0x53ffb0bb,0x7dc01dfd,0xfdfdcfee,0x03fcc01f,
    0x2aaab7f6,0xfffb05fd,0x3e01bfff,0x404fdacf,0x06fcadfd,0x13fa0771,
    0x4c1fe600,0x413600ff,0x1ff300b8,0x6c03fcc0,0x03bfea3f,0x3f2bfe20,
    0x03fcc006,0xff75ff90,0x887fa805,0x31fec0ff,0x7fd409ff,0xffffa9ff,
    0x203fcc00,0x05fc83fd,0x01355bfb,0x03f51ff8,0x27d33fd8,0x07ff92f9,
    0x42b80ff9,0x6fb83ff8,0x417ee000,0x3e601ff8,0x4c3fd807,0xdfb005ff,
    0xf98007ff,0x49ff5007,0x3ea01ffd,0x6c0ff887,0x807fdc3f,0xff16fff9,
    0x7f9801ff,0x7e41fec0,0x8009fb05,0x7ec001ff,0x3ee9f903,0xaeff982f,
    0xb0dfd310,0xff7117ff,0x7fe40007,0x0dfb511d,0x067fee62,0x2a0e7f44,
    0x7cc00bff,0x31000fff,0x54033ff5,0x7ffc46ff,0x4ffdcc41,0x20ff9999,
    0x7f41cfe8,0x4fff881c,0x9981fff6,0x4c199ffa,0x3f620cfe,0x4e7ec40d,
    0x5ffcc009,0x7f440099,0xfd99999c,0xff980664,0x2fffffff,0xffffff88,
    0x0f7d406f,0x7fffffdc,0xff982fff,0x5c6fffff,0x6c5fffff,0x7f400fff,
    0xfff1004f,0xf90fffff,0x7ff4bfff,0xffff12ff,0xffffffff,0x3ffffee1,
    0x217ffee5,0x3fea1fff,0xffffff06,0x3fe6bfff,0xfffa9fff,0xffff71ff,
    0x3f603fff,0x00ffffff,0xfffffff7,0x8009ffff,0xdffffec8,0x3fff6201,
    0x2ffb804f,0xfffece98,0xffd102ef,0xea89ffff,0x7443ffff,0x1ffb805f,
    0xffffd100,0xfff50bff,0x77ffe47f,0x3fffff61,0x50ffffff,0xf87ffffd,
    0x47fe83ff,0xffb05ff8,0x27ffffff,0x98efffe9,0xd30efffe,0x01dfffff,
    0x3fffffee,0x3fffaa05,0x4fffffff,0x00262000,0x98003310,0x01331000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xccccb880,0x332e01ac,0x22cccccc,0xccccccb8,
    0x3332a01b,0x05e665c0,0x66409995,0x9999501c,0xcda80019,0x0000001b,
    0x98000000,0x54c001aa,0x531000aa,0x55440015,0x10266200,0x54c40133,
    0x1331011a,0xc8013330,0xffffffff,0xffffe80d,0x3f24ffff,0xffffffff,
    0x5ffff885,0x4fffffea,0xb82ffff8,0xff987fff,0x1004ffff,0xb0bfffff,
    0x7400005d,0x7f700005,0xffffffb8,0x3ffa600d,0x700fefff,0x03dfffff,
    0x77ffff54,0x927ffd41,0x3ee0bfff,0x22ffffff,0xf16ffffd,0x3ee9ffff,
    0xddffb11f,0xe81ffffd,0xffeeeeef,0x3bbff224,0xb82fffee,0xd912fffe,
    0x7fdc19ff,0x2fffe85f,0xffffdb70,0x3b3fee00,0x2effe82f,0x03fcc000,
    0x17ffea00,0xfffdfffb,0x3fffea07,0xe82ffffe,0xffffefff,0xfffffa81,
    0x3fea1fff,0x17fff24f,0x3fbbffe6,0x3fff64ff,0xfffff16f,0xf983fea9,
    0x745ffa87,0x4077f43f,0x06fc83fd,0xf88dfff3,0x1ffff80f,0x201bffea,
    0x802ffefc,0x6c4022fe,0x0001dfff,0x2a000ff3,0xa884fffe,0x2207fd41,
    0xf710aeff,0x0bffc87f,0xff31bfe6,0x07ff445b,0xbf9113f6,0x6c41bfb0,
    0x427f443f,0x1fe60dfe,0x3fea0ff3,0xffd8bf61,0xf307fb01,0xffff301f,
    0x7c07fc49,0x3ff64fff,0xdbff806f,0x04fe805f,0x33fff660,0x03fcc000,
    0x33fff660,0x5e665400,0x0ffd41ff,0x6ffc1fd8,0xffa99999,0x7c41ff22,
    0x5c27ec2f,0xbdffb85f,0x3fee0509,0xf107fe60,0x3a07f98d,0x7dc36a3f,
    0x88ff603f,0xff306fea,0x3fe23ff7,0x8ffdff80,0x406fdff9,0x0ff98ffa,
    0x000ffdc0,0x00ffffaa,0x91007f98,0xa803bfff,0xffffffff,0x31037e41,
    0xffffff88,0x3a3fffff,0xb17f603f,0x10bf709f,0x3dfffffd,0xbfb27fc0,
    0x0ff317e0,0xff9827ec,0x7fffec05,0xf301ffff,0x7fc5bfaf,0xcffaff80,
    0x406faefc,0x013fa4fe,0x0b22dffb,0x17fffdc0,0x7fee6654,0x7dc1cccc,
    0xfa802eff,0xffedceff,0x2002fe41,0xfffffff8,0x3fa4ffff,0xfb17f203,
    0x540bf709,0x03ffffdc,0x3ff31ff7,0x0ff313a0,0x7fc427e4,0xffffd806,
    0xf304ffff,0x3e2ffe6f,0xfb9ff80f,0x06faafff,0x7fb87fe6,0x33ffff60,
    0xf3002ffb,0xfff89fff,0xffffffff,0x03bfffa5,0x7c077f40,0x007fdc1f,
    0x8009ff01,0x7ff107fc,0x5fc84fd8,0x6fc883d8,0xdfb7ff10,0x1fe60d40,
    0xffd84fd8,0x37f60660,0x4ffecaaa,0x3ff27f98,0x9ff80ff9,0xdf57fff8,
    0x7ffffe40,0xff882fff,0x0efeffba,0x2efffb80,0xffdccca8,0x7dc1cccc,
    0xfe802fff,0x5ffd710c,0x20effc41,0x7fdc6fb8,0x832ea61c,0xb88beff9,
    0x77e40ffe,0x41dffb30,0x3260cff9,0x3ffee06f,0x3fcc002f,0xffc85ff0,
    0x1fec3fc2,0x7f986fd8,0x03ffbfa2,0x9ffe47fe,0x3ffe06fa,0x85ffffff,
    0x3fff66fa,0x7fffd401,0x01fe6003,0x177ffe44,0xffffff50,0xfa8fffff,
    0xffffffff,0xfffffd84,0x7d44ffff,0x1fffffff,0xffffffa8,0x3fe67fff,
    0x2fffffff,0x01bffe20,0x7e41fe60,0x113fea0f,0x03fd81ff,0x7f981ff3,
    0x407fffd4,0x21dd11ff,0x5ff706fa,0x1ff75555,0xff32ff88,0x3ffaa03f,
    0x7cc000cf,0x7fec4007,0xffd701df,0x0bfff9ff,0xffffffd5,0x7fffdc09,
    0xe980beff,0x201dffff,0xfeeffffb,0x7fff745f,0xfc803fff,0xffa8002f,
    0x3ffdb999,0x2667bfe2,0x3a20ffa9,0xeb9999cf,0x09ffa86f,0xf103fff6,
    0xdf73015f,0x80dfe881,0x7ec0cfe9,0x2fffffff,0x037fff62,0x003fcc00,
    0x0cfffd98,0x30003510,0x44003353,0x0cc0019a,0x00026600,0x00003553,
    0x3fffee00,0x4c5fffff,0xffffffff,0xffff70ff,0x5fffffff,0x1fffffb8,
    0x7cc1fff1,0x3f23ffff,0xff50ffff,0x7fec7fff,0x3b220fff,0x21efefff,
    0x0001dfff,0x20003fcc,0x0005ffea,0x00000000,0x00000000,0x20000000,
    0xefffffea,0xffff982c,0x50ffffff,0xfffffffd,0xffd503bd,0x07fdc1df,
    0x45dfffd1,0x30effffa,0x5c5dfffd,0x300effff,0x01764013,0x0009d000,
    0x0000fae0,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x88000000,
    0x88099809,0x99999999,0xa884ccc0,0x98026202,0x53098809,0x98998015,
    0x4003510a,0x8000001a,0xeeeeeed8,0x7744eeee,0xd987dd15,0x7101801d,
    0x5dddddc7,0x55512bbb,0x55555555,0x00000555,0x00000000,0x16fffe80,
    0xfd89ffff,0x5fffffff,0xf55ffff1,0xffe87fff,0x7fffcc6f,0x3fb7ffa4,
    0xff882fff,0xffdfffef,0x37c400ef,0xfe805b00,0xfffff50f,0x3fffffff,
    0x47ff2ff4,0x363ffffc,0xf909f10f,0x3ffffa7f,0xffb4ffff,0xffffffff,
    0x0009ffff,0x00000000,0x7fff4000,0x89ffff16,0xfffffffd,0xffffd14f,
    0xd8ffffff,0x7fc46fff,0x3fffa4ff,0x40fffeff,0xfffffff8,0x403fffff,
    0xff7007f9,0x513fe203,0x77777777,0x24fd8377,0xd9ff32ff,0x41ffb9ff,
    0x3fee0efa,0x77777772,0x3bbaa577,0xeeeeeeee,0x00002eee,0x00000000,
    0x4f7fdc00,0xfd81fffa,0x0effc99c,0x867fff44,0xf35fd82b,0x360ffa1f,
    0x0bfa24ff,0x7fcc77fc,0x3970df55,0x2072aff3,0xa80ffffa,0x200000ff,
    0x547f63fc,0x3ffff23f,0x04c6e982,0x00000000,0x00000000,0xf9800000,
    0x500effff,0x03bfea1b,0xb8017ff4,0xf17ffb6f,0x909fb03f,0x44bfe0bf,
    0xf0ff50ff,0xffffffff,0xffeff98b,0x541fe40e,0xbbbbbbbb,0x917dc2bb,
    0x1dda801f,0x00000a20,0x00000000,0x00000000,0xdfff3000,0x3bfea001,
    0x800ffa00,0xefff9ff9,0x09fb07fa,0x4bfe0bf7,0x0ff50ff8,0xffffffd5,
    0x477f443b,0x43fc5ff9,0xfffffffa,0x261fffff,0x0001ee0f,0x00000000,
    0x00000000,0x00000000,0x07ffffb0,0x801dff50,0x7fc002fe,0x6fdffffe,
    0xbf709fb0,0x7fc4bfe0,0x7cc0ff50,0xffd80fff,0x7ccffea1,0xeeeec883,
    0x84deeeee,0x00000c41,0x00000000,0x00000000,0x80000000,0xffdbffe8,
    0x83bfea04,0x002fe81b,0x7f67ffec,0x09fb04ff,0x4bfe0bf7,0x0ff50ff8,
    0x427ffff4,0x15fc82ff,0x00000007,0x00000000,0x00000000,0x00000000,
    0xffd30000,0x206ffec7,0xa999effa,0x2ffa666f,0x7dc00999,0x2fffa9ff,
    0x640cfd88,0x9ffc40ef,0x1ff51ff8,0xff73ff70,0x02a01981,0x00000000,
    0x00000000,0x00000000,0x00000000,0xffffa800,0x3fffff37,0x7ffffffc,
    0xffff97ff,0x401fffff,0x3ffe6ff9,0x7ffffcc0,0x4cffffd0,0xff8cffff,
    0x41fffaaf,0x003f63fa,0x00000000,0x00000000,0x00000000,0x00000000,
    0xfd300000,0x3ffa2bff,0x3fffe0ef,0xf77fffff,0xbfffffff,0x7e47ff00,
    0x5fffe886,0xe897fff2,0xeff8afff,0x000effa9,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__courier_bold_26_usascii_x[95]={ 0,4,2,1,1,1,2,5,6,2,1,0,4,2,
5,1,1,1,1,1,1,1,2,1,1,2,5,4,-1,0,0,2,2,-1,0,0,0,0,1,0,0,1,1,0,
0,-1,-1,0,1,0,0,1,0,0,-1,-1,0,0,1,5,1,2,1,-1,4,0,-1,1,0,0,1,0,0,1,
1,0,1,-1,0,0,-1,0,1,1,1,0,0,-1,0,0,1,3,5,3,1, };
static signed short stb__courier_bold_26_usascii_y[95]={ 19,4,5,3,3,4,6,4,4,4,4,5,15,11,
16,2,4,4,4,4,4,4,4,4,4,4,8,8,5,9,5,5,4,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,2,4,3,23,3,8,4,8,4,8,4,8,4,4,
4,4,4,8,8,8,8,8,8,8,5,8,8,8,8,8,8,4,4,4,10, };
static unsigned short stb__courier_bold_26_usascii_w[95]={ 0,5,9,12,11,12,11,4,6,6,11,13,6,10,
4,11,11,11,11,12,11,12,11,11,11,11,4,6,14,14,15,10,10,16,14,14,13,13,13,14,14,11,14,14,
14,16,15,14,13,14,15,12,13,14,16,16,14,14,12,6,11,7,11,16,6,14,15,13,15,13,13,14,14,12,
10,14,12,16,14,13,15,15,13,12,13,14,14,15,14,14,11,7,4,7,12, };
static unsigned short stb__courier_bold_26_usascii_h[95]={ 0,16,7,19,19,16,14,8,19,19,11,14,8,3,
4,20,16,15,15,16,15,16,16,16,16,16,12,14,14,7,14,15,17,14,14,15,14,14,14,15,14,14,15,14,
14,14,14,15,14,18,14,15,14,15,14,14,14,14,14,19,20,19,9,3,5,12,16,12,16,12,15,16,15,15,
20,15,15,11,11,12,16,16,11,12,15,12,11,11,11,16,11,19,19,19,5, };
static unsigned short stb__courier_bold_26_usascii_s[95]={ 253,222,136,52,70,137,93,250,82,89,90,
121,114,171,166,1,166,207,183,209,195,228,241,32,60,72,248,249,135,121,105,
31,126,76,28,1,1,234,220,234,191,179,219,147,132,59,43,168,206,111,69,
42,55,16,85,162,117,102,15,104,24,96,102,182,159,150,16,165,44,179,99,
1,84,113,13,126,141,73,58,193,150,178,28,222,154,207,235,42,1,194,16,
44,65,36,146, };
static unsigned short stb__courier_bold_26_usascii_t[95]={ 1,1,70,1,1,1,55,55,1,1,70,
55,70,70,70,1,1,22,22,1,22,1,1,22,22,22,39,22,55,70,55,
39,1,55,55,39,55,39,39,22,39,39,22,39,39,55,55,22,39,1,39,
39,39,39,39,39,39,39,55,1,1,1,70,70,70,55,22,55,22,55,22,
22,22,22,1,22,22,70,70,55,1,1,70,55,22,55,55,70,70,1,70,
1,1,1,70, };
static unsigned short stb__courier_bold_26_usascii_a[95]={ 220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,220,
220,220,220,220,220,220,220, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT or STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_26_usascii(stb_fontchar font[STB_FONT_courier_bold_26_usascii_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT][STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_26_usascii_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_26_usascii_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_26_usascii_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_26_usascii_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_26_usascii_s[i] + stb__courier_bold_26_usascii_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_26_usascii_t[i] + stb__courier_bold_26_usascii_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_26_usascii_x[i];
            font[i].y0 = stb__courier_bold_26_usascii_y[i];
            font[i].x1 = stb__courier_bold_26_usascii_x[i] + stb__courier_bold_26_usascii_w[i];
            font[i].y1 = stb__courier_bold_26_usascii_y[i] + stb__courier_bold_26_usascii_h[i];
            font[i].advance_int = (stb__courier_bold_26_usascii_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_26_usascii_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_26_usascii_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_26_usascii_s[i] + stb__courier_bold_26_usascii_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_26_usascii_t[i] + stb__courier_bold_26_usascii_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_26_usascii_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_26_usascii_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_26_usascii_x[i] + stb__courier_bold_26_usascii_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_26_usascii_y[i] + stb__courier_bold_26_usascii_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_26_usascii_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_26_usascii
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_26_usascii_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_26_usascii_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_26_usascii_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_26_usascii_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_26_usascii_LINE_SPACING
#endif
