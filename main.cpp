#include "Int2Roman.h"
#include <iostream>

int main()
{
	Int2Roman converter;
	int num = 0;
	while (num != -1)
	{
	    std::cout << "Please enter the number: ";
            std::cin >> num;
            if (num != -1)
		std::cout << "The roman equivalent is: " << converter(num) << std::endl;
	}

	return 0;
}
