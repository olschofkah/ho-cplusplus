// LearnCPPConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#define ALLOW_PRINT



int doubleNumber(int a)
{
	return a * 2;
}

void passByReferencePrinter(int *ptr) {
	using namespace std;
	cout << ptr << endl;
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


	cout << "Fib 25" << MyMathCalculator::fib(25) << endl;


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

	Employee jimbob{ 2,3,150.25 }; // struct
	jimbob.age = 3;

	cout << jimbob.age << "\n";

	{
		// old random

		using namespace std::chrono;
		milliseconds ms = duration_cast<milliseconds>(system_clock::now().time_since_epoch());
		srand(static_cast<unsigned int>(ms.count())); // narrowing long to int

		cout << "Random Numbers seeded from mills since epoch \n";
		cout << rand() << "\n";
		cout << rand() << "\n";
		cout << rand() << "\n";
		cout << rand() << "\n";
	}


	// C++11 Random
	{
		// https://en.wikipedia.org/wiki/Mersenne_Twister
		std::random_device rd; // Use a hardware entropy source if available, otherwise use PRNG
		std::mt19937 mersenne{ rd() }; // initialize our mersenne twister with a random seed

		// Print a bunch of random numbers
		for (int count = 0; count < 10; ++count)
		{
			std::cout << mersenne() << "\t";

			// If we've printed 4 numbers, start a new row
			if ((count + 1) % 4 == 0)
				std::cout << "\n";
		}
	}

	int firstArray[25]{}; // assign a 25 size array to all 0s
	int secondArray[]{ 10,20,5,-1,19 };
	// arrays always pass by reference (pointer) to functions ... and sizeof does not work on the pointer. 
	MySortUtil::selectionSort(secondArray, 5);
	cout << secondArray[0] << " " << secondArray[1] << " " << secondArray[2] << " " << secondArray[3] << " " << secondArray[4] << "\n";

	int thirdArray[]{ 10,20,5,-1,19,40,-2,0,50,50,80,1000,2,0 };
	MySortUtil::bubbleSort(thirdArray, 14);
	for (int i{ 0 }; i < 14; ++i) {
		cout << thirdArray[i] << " ";
	}
	cout << "\n";
	cout << &thirdArray[1] << " " << thirdArray[1] << " " << (thirdArray + 1) << " " << *(thirdArray + 1) << endl; // pointer arithmetic to grab the location of the second item in the array by adding 1 to the starting pointer. 


	{ // c-style strings
		// print ascii numbers of a c-style string
		char myString[] = "string";
		myString[1] = 'p';
		std::cout << myString << " has " << sizeof(myString) << " characters.\n";
		for (int i = 0; i < sizeof(myString); ++i) {
			std::cout << static_cast<int>(myString[i]) << " ";
		}

		// std::strcpy && std::strlen are useful utils
		// strcat() -- Appends one string to another (dangerous)
		// strncat() --Appends one string to another(with buffer length check)
		// strcmp() --Compare two strings(returns 0 if equal)
		// strncmp() --Compare two strings up to a specific number of characters(returns 0 if equal)
	}

	cout << endl;

	{ // pointer play
		int x{ 5 };
		cout << x << " " << &x << " " << *&x << "\n";
		passByReferencePrinter(&x);
		int *y = &x; // assign the pointer y (indicated by *) to the memory location of x (indicated by & ... the address-of operator)

		cout << y << " " << *y <<" \n";
		passByReferencePrinter(y);

		int *np{ 0 }; // this creates a null pointer. 
		int *np2 = nullptr; // C++11 null pointer.
	}

	return returnZero();
}

int returnZero()
{
	ZeroReturnHelper zrh{};
	return zrh.returnZero();
}
