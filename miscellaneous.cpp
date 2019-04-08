#include <iostream>
#include <cstring>
#include <algorithm>
#include "miscellaneous.h"

std::string operator*(const std::string &str, size_t n)
{
	std::string result;
	result.reserve(str.size()*n);
	for (size_t i = 0; i < n; i++)
		result += str;
	return result;
}

void Miscellaneous::clear()
{
	std::cout << (std::string("\n") * 50) << std::endl;
}

std::string Miscellaneous::uppercase(std::string target)
{
	std::transform(target.begin(), target.end(), target.begin(), ::toupper);
	return target;
}

std::string Miscellaneous::lowercase(std::string target)
{
	std::transform(target.begin(), target.end(), target.begin(), ::tolower);
	return target;
}