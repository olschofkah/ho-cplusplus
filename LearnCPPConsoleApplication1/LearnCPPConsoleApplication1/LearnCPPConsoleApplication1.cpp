// LearnCPPConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define ALLOW_PRINT



int doubleNumber(int a)
{
	return a * 2;
}

int main()
{
	using namespace std;
	cout << "Hello Worldz" << endl;

#ifdef ALLOW_PRINT
	cout << "It's ALIVE\n"; // \n is preferred over << endl as it does not cause a flush.  
#endif

	int directInitilizedInt(2);
	cout << directInitilizedInt << endl;

	int_fast64_t uniformInitilizedInt{ 52352345345345345 }; // this is preferred and is new as of C++11
	cout << uniformInitilizedInt << endl;

	std::cout << std::setprecision(30); // show 30 digits when printing
	std::cout << std::boolalpha; // print bools as true or false

	double_t	d1{5e26}; // can assign floating point numders directly in scientific notation. 
	cout << d1 << endl;	
	
	d1 = 2.5; // can assign floating point numders directly in scientific notation. 
	cout << d1 << endl;

	//int input = 0;
	//cin >> input;
	//cout << doubleNumber(input) << endl;

	DataTypeSize dts{};
	dts.print();

	int primeInput;
	cout << "Please enter a number to see if it is prime: ";
	cin >> primeInput;

	bool primeResult{ PrimeTest::isPrime(primeInput) };

	cout << "Your number is prime? : " << primeResult << endl;

	return returnZero();
}

int returnZero()
{
	ZeroReturnHelper zrh{};
	return zrh.returnZero();
}
