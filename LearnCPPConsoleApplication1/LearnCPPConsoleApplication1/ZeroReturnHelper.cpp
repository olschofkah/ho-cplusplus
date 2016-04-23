#include "stdafx.h"
#include "ZeroReturnHelper.h"


ZeroReturnHelper::ZeroReturnHelper()
{
}


ZeroReturnHelper::~ZeroReturnHelper()
{
}

int ZeroReturnHelper::returnZero()
{
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	return 0;
}
