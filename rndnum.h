#ifndef RNDNUM_H
#define RNDNUM_H

class RndNum
{
public:
	RndNum();
	unsigned short randInt(short, short = 1); // returns a random integer int the range x and adds y to the result
	float randFloat(float, float = 1); // returns a random float in the range x and adds y to the result
};

#endif