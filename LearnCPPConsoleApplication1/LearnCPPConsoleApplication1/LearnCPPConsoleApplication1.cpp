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
	//std::cin.ignore(32767, '\n'); // use when reading in numbers for std::getline(cin,var) Rule: If reading numeric values with std::cin, it’s a good idea to remove the extraneous newline using std::cin.ignore().

	double_t	d1{ 5e26 }; // can assign floating point numbers directly in scientific notation. 
	cout << d1 << endl;

	d1 = 2.5; // can assign floating point numbers directly in scientific notation. 
	cout << d1 << endl;

	//int input = 0;
	//cin >> input;
	//cout << doubleNumber(input) << endl;

	DataTypeSize dts{};
	dts.print();

	/**
	int primeInput;
	cout << "Please enter a number to see if it is prime: ";
	cin >> primeInput;


	bool primeResult{ PrimeTest::isPrime(primeInput) };
	*/

	bool primeResult{ PrimeTest::isPrime(25) };

	cout << "Your number is prime? : " << primeResult << endl;

	int xOct = 012; // 0 before the number means this is octal
	const int xHex = 0xFF; // 0x is for hex 255 ... it's also a constant
	int xBin = 0b1010; // assign binary 0000 1010 to the variable



	double heightAfter100 = GravityBallDrop::calcHeightAtTime(3, 100);
	cout << heightAfter100 << endl;

	string stringA{ "00100010" };
	string stringB{ "01101111" };
	string ouputSumString = BinaryPlay::addBinaryStrings(stringA, stringB);

	cout << ouputSumString << endl;

	int pops = BinaryPlay::popCount(BinaryPlay::convertBinaryStringToInt(ouputSumString));
	cout << "Pop Count: " << pops << endl;

	if (CupSizes::A == CupSizes::D) { // enum class example
		cout << "HRM?" << "\n";
	}

	typedef std::vector<std::pair<std::string, int> > pairlist_t;
	using pairlist2_t = std::vector<std::pair<std::string, int> >; // C++11 syntax for typedef

	Employee jimbob{ 2,3,150.25 };
	jimbob.age = 3;

	cout << jimbob.age << "\n";

	return returnZero();
}

int returnZero()
{
	ZeroReturnHelper zrh{};
	return zrh.returnZero();
}
