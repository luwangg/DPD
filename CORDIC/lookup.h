#ifndef __LOOKUP_H__
#define __LOOKUP_H__

#define	TABLE_LENGTH		10
#define K			1.646760258121
#define INV_K			0.607252935008
#define PRI_K			0.828159360960
#define INV_PRI_K		1.207497067763

struct rotation_info {
	int index;
	double tangent;
	double angle;
	double radian;
};

struct rotation_info circular_table[TABLE_LENGTH] = {
	{0, 	1, 		45,		0.78539816},
	{1, 	0.5, 		26.56505118,	0.46364760},
	{2, 	0.25,		14.03624347,	0.24497866},
	{3,	0.125,		7.125016349,	0.12435499},
	{4,	0.0625,		3.576334375,	0.06241880},
	{5,	0.03125,	1.789910608,	0.03123983},
	{6,	0.015625,	0.89517371,	0.01562372},
	{7,	0.0078125,	0.447614171,	0.00781234},
	{8,	0.00390625,	0.2238105,	0.00390623},
	{9,	0.001953125,	0.111905677,	0.00195312}
};

struct rotation_info linear_table[TABLE_LENGTH] = {
	{0, 	1, 		45,		0.78539816},
	{1, 	0.5, 		26.56505118,	0.46364760},
	{2, 	0.25,		14.03624347,	0.24497866},
	{3,	0.125,		7.125016349,	0.12435499},
	{4,	0.0625,		3.576334375,	0.06241880},
	{5,	0.03125,	1.789910608,	0.03123983},
	{6,	0.015625,	0.89517371,	0.01562372},
	{7,	0.0078125,	0.447614171,	0.00781234},
	{8,	0.00390625,	0.2238105,	0.00390623},
	{9,	0.001953125,	0.111905677,	0.00195312}
};

struct rotation_info hyperbolic_table[TABLE_LENGTH] = {
	{0, 	1, 		45,		0.78539816},
	{1, 	0.5, 		26.56505118,	0.46364760},
	{2, 	0.25,		14.03624347,	0.24497866},
	{3,	0.125,		7.125016349,	0.12435499},
	{4,	0.0625,		3.576334375,	0.06241880},
	{5,	0.03125,	1.789910608,	0.03123983},
	{6,	0.015625,	0.89517371,	0.01562372},
	{7,	0.0078125,	0.447614171,	0.00781234},
	{8,	0.00390625,	0.2238105,	0.00390623},
	{9,	0.001953125,	0.111905677,	0.00195312}
};

#endif