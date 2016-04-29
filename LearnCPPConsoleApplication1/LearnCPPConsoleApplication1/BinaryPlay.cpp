#include "stdafx.h"
#include "BinaryPlay.h"
#include <string>
#include <cmath>

BinaryPlay::BinaryPlay()
{
}


BinaryPlay::~BinaryPlay()
{
}


// Converts two strings to integers ... adds them ... and returns the result in a binary string. 
std::string BinaryPlay::addBinaryStrings(std::string bInputOne, std::string bInputTwo)
{

	unsigned int  intOne{ convertBinaryStringToInt(bInputOne) };
	unsigned int  intTwo{ convertBinaryStringToInt(bInputTwo) };

	return convertIntToBinaryString(intOne + intTwo);
}

 int  BinaryPlay::popCount(unsigned int input)
{
	int pop{ 0 };
	while (input) {
		if (input & 1) {
			++pop;
		}
		input >>= 1;
	}
	return pop;
}

unsigned int BinaryPlay::convertBinaryStringToInt(std::string binaryString)
{
	int intVal{ 0 };
	for (int i = binaryString.length() - 1; i >= 0; --i)
	{
		if (binaryString.at(i) == '1') {
			intVal += MyMathCalculator::powByExponentialBySquaring(2, binaryString.length() - 1 - i);
		}
	}
	return intVal;
}

std::string BinaryPlay::convertIntToBinaryString(unsigned int input)
{
	std::string result;
	while (input) {
		result = ((input & 1) ? "1" : "0") + result;
		input >>= 1;
	}
	return result;
}
