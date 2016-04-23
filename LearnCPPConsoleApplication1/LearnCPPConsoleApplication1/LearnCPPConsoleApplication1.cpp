// LearnCPPConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ZeroReturnHelper.h"



int doubleNumber(int a)
{
	return a * 2;
}

int main()
{
	cout << "Hello Worldz" << endl;

	int input = 0;
	cin >> input;
	cout << doubleNumber(input) << endl;

	return returnZero();
}

int returnZero()
{
	ZeroReturnHelper zrh;
	return zrh.returnZero();
}
