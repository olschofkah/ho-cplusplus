#include "stdafx.h"
#include "Bird.h"


Bird::Bird() : Duck(5, 10) // super call to parent constructor to set initial params. 
{
}


Bird::~Bird()
{
}

Duck & Bird::talk()
{
	std::cout << "Wait a min ... I don't quack??\n";
	return *this;
}
