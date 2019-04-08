#include "rndnum.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "rndnum.h"

RndNum::RndNum()
{
	srand(time(0));
}

unsigned short RndNum::randInt(short max, short num)
{
	return num + (rand() % max);
}

float RndNum::randFloat(float max, float num)
{
	return num + rand() / max;
}