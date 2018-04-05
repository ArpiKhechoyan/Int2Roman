#pragma once
#include <string>

class Int2Roman
{
public:
	std::string operator()(unsigned int n);
private:
	static std::string convert(unsigned int n);
	static std::string ones(unsigned int n);
	static std::string tens(unsigned int n);
	static std::string hundreds(unsigned int n);
	static std::string thousands(unsigned int n);
	static int count_of_digits(unsigned int n);
};
