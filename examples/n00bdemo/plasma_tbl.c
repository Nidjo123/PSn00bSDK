// These are from Meido-Menu which was a very simple demo I made back in 2013
// Man, time sure does fly.		- Lameguy64

unsigned int plasma_colors[256] = {
	0x00000000,
	0x00000408,
	0x00040811,
	0x0008111a,
	0x00081623,
	0x000d1f2c,
	0x00112335,
	0x0011273d,
	0x0016304a,
	0x001a3553,
	0x001f3d5b,
	0x001f4163,
	0x00234a6b,
	0x00274e73,
	0x0027537b,
	0x002c5b83,
	0x00305f8e,
	0x00356795,
	0x00356b9c,
	0x00396fa3,
	0x003d77aa,
	0x003d7bb1,
	0x004183b7,
	0x004687bd,
	0x00468ac6,
	0x004a92cb,
	0x004e95d0,
	0x00539cd5,
	0x0053a0da,
	0x0057a7df,
	0x005baae3,
	0x005bade7,
	0x005fb4ec,
	0x0063b7ef,
	0x0067bdf2,
	0x0067c0f5,
	0x006bc6f7,
	0x006fc8f9,
	0x006fcbfb,
	0x0073d0fc,
	0x0077d3fe,
	0x007bd8fe,
	0x007bdafe,
	0x007fdcfe,
	0x0083e1fe,
	0x0083e3fe,
	0x0087e7fd,
	0x008ae8fb,
	0x008eecf9,
	0x008eeef7,
	0x0092eff5,
	0x0095f2f2,
	0x0095f3ef,
	0x0099f6ec,
	0x009cf7e8,
	0x009cf8e5,
	0x00a0fadf,
	0x00a3fbda,
	0x00a7fcd5,
	0x00a7fdd0,
	0x00aafdcb,
	0x00adfec6,
	0x00adfec0,
	0x00b1feba,
	0x00b4ffb1,
	0x00b7feaa,
	0x00b7fea3,
	0x00bafe9c,
	0x00bdfd95,
	0x00bdfd8e,
	0x00c0fb87,
	0x00c3fb7f,
	0x00c3fa73,
	0x00c6f86b,
	0x00c8f763,
	0x00cbf55b,
	0x00cbf353,
	0x00cef14a,
	0x00d0ef41,
	0x00d0ee39,
	0x00d3ea2c,
	0x00d5e823,
	0x00d8e51a,
	0x00d8e311,
	0x00dae108,
	0x00dcdc00,
	0x00dcda08,
	0x00dfd511,
	0x00e1d31f,
	0x00e3ce27,
	0x00e3cb30,
	0x00e5c839,
	0x00e7c341,
	0x00e7c04a,
	0x00e8ba53,
	0x00eab75b,
	0x00eab467,
	0x00ecad6f,
	0x00eeaa77,
	0x00efa37f,
	0x00efa087,
	0x00f1998e,
	0x00f29595,
	0x00f2929c,
	0x00f38aa7,
	0x00f587ad,
	0x00f67fb4,
	0x00f67bba,
	0x00f773c0,
	0x00f86fc6,
	0x00f86bcb,
	0x00f963d0,
	0x00fa5fd8,
	0x00fb57dc,
	0x00fb53e1,
	0x00fb4ee5,
	0x00fc46e8,
	0x00fc41ec,
	0x00fd39ef,
	0x00fd35f2,
	0x00fe2cf6,
	0x00fe27f8,
	0x00fe23fa,
	0x00fe1afb,
	0x00fe16fd,
	0x00fe0dfe,
	0x00fe08fe,
	0x00fe04fe,
	0x00fe04fe,
	0x00fe08fe,
	0x00fe11fd,
	0x00fe16fc,
	0x00fe1ffb,
	0x00fe23f9,
	0x00fe27f7,
	0x00fe30f5,
	0x00fd35f1,
	0x00fd3dee,
	0x00fd41ea,
	0x00fc46e7,
	0x00fb4ee3,
	0x00fb53df,
	0x00fb5bda,
	0x00fa5fd5,
	0x00f967ce,
	0x00f96bc8,
	0x00f86fc3,
	0x00f777bd,
	0x00f77bb7,
	0x00f683b1,
	0x00f587aa,
	0x00f58aa3,
	0x00f39299,
	0x00f29592,
	0x00f19c8a,
	0x00f1a083,
	0x00efa77b,
	0x00eeaa73,
	0x00eead6b,
	0x00ecb463,
	0x00eab757,
	0x00e8bd4e,
	0x00e8c046,
	0x00e7c33d,
	0x00e5c835,
	0x00e5cb2c,
	0x00e3d023,
	0x00e1d31a,
	0x00dfd80d,
	0x00dfda04,
	0x00dcdc04,
	0x00dae10d,
	0x00dae316,
	0x00d8e71f,
	0x00d5e827,
	0x00d5ea30,
	0x00d3ee3d,
	0x00d0ef46,
	0x00cef24e,
	0x00cef357,
	0x00cbf65f,
	0x00c8f767,
	0x00c8f86f,
	0x00c6fa77,
	0x00c3fb83,
	0x00c0fc8a,
	0x00c0fd92,
	0x00bdfd99,
	0x00bafea0,
	0x00bafea7,
	0x00b7fead,
	0x00b4ffb4,
	0x00b1febd,
	0x00b1fec3,
	0x00adfec8,
	0x00aafdce,
	0x00aafdd3,
	0x00a7fbd8,
	0x00a3fbdc,
	0x00a3fae1,
	0x00a0f8e7,
	0x009cf7ea,
	0x0099f5ee,
	0x0099f3f1,
	0x0095f1f3,
	0x0092eff6,
	0x0092eef8,
	0x008eeafa,
	0x008ae8fc,
	0x0087e5fd,
	0x0087e3fe,
	0x0083e1fe,
	0x007fdcff,
	0x007fdafe,
	0x007bd5fe,
	0x0077d3fd,
	0x0073cefb,
	0x0073cbfa,
	0x006fc8f8,
	0x006bc3f6,
	0x006bc0f3,
	0x0067baf1,
	0x0063b7ee,
	0x0063b4ea,
	0x005fade5,
	0x005baae1,
	0x0057a3dc,
	0x0057a0d8,
	0x00539cd3,
	0x004e95ce,
	0x004e92c8,
	0x004a8ac3,
	0x004687ba,
	0x00417fb4,
	0x00417bad,
	0x003d77a7,
	0x00396fa0,
	0x00396b99,
	0x00356392,
	0x00305f8a,
	0x00305b7f,
	0x002c5377,
	0x00274e6f,
	0x00234667,
	0x0023415f,
	0x001f3957,
	0x001a354e,
	0x001a3046,
	0x00162739,
	0x00112330,
	0x000d1a27,
	0x000d161f,
	0x00081116,
	0x0004080d,
	0x00040404,
	0x00000404
};

short plasma_sin1[] = {
	0,
	6,
	12,
	18,
	24,
	30,
	36,
	42,
	47,
	53,
	59,
	65,
	71,
	76,
	82,
	88,
	93,
	99,
	104,
	110,
	115,
	120,
	125,
	131,
	136,
	141,
	146,
	150,
	155,
	160,
	165,
	169,
	173,
	178,
	182,
	186,
	190,
	194,
	198,
	202,
	205,
	209,
	212,
	216,
	219,
	222,
	225,
	227,
	230,
	233,
	235,
	237,
	240,
	242,
	243,
	245,
	247,
	248,
	250,
	251,
	252,
	253,
	254,
	255,
	255,
	256,
	256,
	256,
	256,
	256,
	256,
	255,
	255,
	254,
	253,
	252,
	251,
	250,
	248,
	247,
};

short plasma_sin2[] = {
	0,
	4,
	9,
	13,
	17,
	21,
	24,
	27,
	29,
	30,
	32,
	32,
	32,
	31,
	30,
	28,
	25,
	22,
	19,
	15,
	11,
	7,
	2,
	-2,
	-7,
	-11,
	-15,
	-19,
	-22,
	-25,
	-28,
	-30,
	-31,
	-32,
	-32,
	-32,
	-30,
	-29,
	-27,
	-24,
	-21,
	-17,
	-13,
	-9,
	-4,
	0,
	4,
	9,
	13,
	17,
	21,
	24,
	27,
	29,
	30,
	32,
	32,
	32,
	31,
	30
};

short plasma_sin3[] = {
0,
	4,
	9,
	13,
	18,
	22,
	26,
	30,
	34,
	38,
	41,
	44,
	48,
	50,
	53,
	55,
	58,
	59,
	61,
	62,
	63,
	64,
	64,
	64,
	64,
	63,
	62,
	61,
	59,
	58,
	55,
	53,
	50,
	48,
	44,
	41,
	38,
	34,
	30,
	26,
	22,
	18,
	13,
	9,
	4,
	0,
	-4,
	-9,
	-13,
	-18,
	-22,
	-26,
	-30,
	-34,
	-38,
	-41,
	-44,
	-48,
	-50,
	-53,
	-55,
	-58,
	-59,
	-61,
	-62,
	-63,
	-64,
	-64,
	-64,
	-64,
	-63,
	-62,
	-61,
	-59,
	-58,
	-55,
	-53,
	-50,
	-48,
	-44,
	-41,
	-38,
	-34,
	-30,
	-26,
	-22,
	-18,
	-13,
	-9,
	-4,
};