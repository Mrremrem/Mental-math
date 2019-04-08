#ifndef MISCELLANEOUS_H
#define MISCELLANEOUS_H

#include <cstring>

class Miscellaneous
{
public:
	Miscellaneous() {};
	
	friend std::string operator*(const std::string &str, size_t n); // gives the ability to multiply strings
	void clear();
	std::string uppercase(std::string);
	std::string lowercase(std::string);
};

#endif