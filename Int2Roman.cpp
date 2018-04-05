#include "Int2Roman.h"

std::string Int2Roman::operator()(unsigned int n)
{
	return convert(n);
}

std::string Int2Roman::convert(unsigned int n)
{
	return thousands(n) + hundreds(n) + tens(n) + ones(n);
}

int Int2Roman::count_of_digits(unsigned int n)
{
	int count = 1;
	while (n >= 10)
	{
		n /= 10;
		++count;
	}
	return count;
}

std::string Int2Roman::ones(unsigned int n)
{
	n = n % 10;
	std::string converted;
	if (count_of_digits(n) == 1)
	{
		int quotient = n;
		if (quotient >= 1 && quotient <= 3)
		{
			for (int i = 1; i <= quotient; ++i)
				converted += "I";
		}
		if (quotient == 4)
		{
			converted += "IV";
		}
		if (quotient == 5)
		{
			converted += "V";
		}
		if (quotient == 9)
		{
			converted += "IX";
		}
		if (quotient >= 6 && quotient <= 8)
		{
			converted += "VI";
			for (int i = 7; i <= quotient; ++i)
				converted += "I";
		}
	}

	return converted;
}

std::string Int2Roman::tens(unsigned int n)
{
	n = n % 100;
	std::string converted;
	if (count_of_digits(n) == 2)
	{
		int quotient = n / 10;
		if (quotient >= 1 && quotient <= 3)
		{
			for (int i = 1; i <= quotient; ++i)
				converted += "X";
		}
		if (quotient == 4)
		{
			converted += "XL";
		}
		if (quotient == 5)
		{
			converted += "L";
		}
		if (quotient == 9)
		{
			converted += "XC";
		}
		if (quotient >= 6 && quotient <= 8)
		{
			converted += "LX";
			for (int i = 7; i <= quotient; ++i)
				converted += "X";
		}
	}

	return converted;
}

std::string Int2Roman::hundreds(unsigned int n)
{
	std::string converted;
	n = n % 1000;
	if (count_of_digits(n) == 3)
	{
		int quotient = n / 100;
		if (quotient >= 1 && quotient <= 3)
		{
			for (int i = 1; i <= quotient; ++i)
				converted += "C";
		}
		if (quotient == 4)
		{
			converted += "CD";
		}
		if (quotient == 5)
		{
			converted += "D";
		}
		if (quotient == 9)
		{
			converted += "CM";
		}
		if (quotient >= 6 && quotient <= 8)
		{
			converted += "CM";
			for (int i = 7; i <= quotient; ++i)
				converted += "M";
		}
	}
	return converted;
}

std::string Int2Roman::thousands(unsigned int n)
{
	std::string converted;
	if (count_of_digits(n) == 4)
	{
		for (int i = 0; i < n / 1000; ++i)
		converted += "M";
	}
	return converted;
}
