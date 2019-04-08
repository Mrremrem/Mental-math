#include <iostream>
#include <cmath>
#include "numsense.h"

float NumSense::biOp(float num1, float num2, char op)
{
	std::cout << num1 << ' ' << op << ' ' << num2 << std::endl;
	
	switch(op)
	{
		case '+':
			return num1 + num2;
			break;
		case '-':
			return num1 - num2;
			break;
		case '*':
			return num1 * num2;
			break;
		case '/':
			return num1 / num2;
			break;
		case '%':
			return std::fmod(num1, num2);
		case '^':
			return pow(num1, num2);
		default:
			std::cout << "An error has occured on biOp" << std::endl;
			return -1;
	}
}

unsigned short NumSense::nthTerm(unsigned short term, unsigned short num, unsigned short int increment)
{
	std::cout << "The " << term << "th term of ";
	
	unsigned short j = num;
	
	for (int i = 0; i < 5; i++)
	{
		std::cout << j << " + ";
		j += increment;
	}
	
	std::cout << "... is: ";
	
	for (int i = 1; i < term; i++)
		num += increment;
	return num;
}