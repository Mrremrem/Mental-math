#ifndef NUMSENSE_H
#define NUMSENSE_H

class NumSense
{
public:
	NumSense() {}
	
	float biOp(float, float, char); // syntax: the first two parameters are the numbers to operate and the third parameter is the operator to use.
	unsigned short nthTerm(unsigned short term, unsigned short num, unsigned short increment); // syntax: first parameter is the term (13th term, 14th term, et cetera), the second parameter is initial number, and the third parameter is the amount to increment the initial number.
	// #23
};
#endif