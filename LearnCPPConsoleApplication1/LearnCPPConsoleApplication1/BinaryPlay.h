#pragma once
class BinaryPlay
{
public:
	BinaryPlay();
	~BinaryPlay();
	// Converts two strings to integers ... adds them ... and returns the result in a binary string. 
	static std::string addBinaryStrings(std::string bInputOne, std::string bInputTwo);
	static int  popCount(unsigned int input);
	static unsigned int  convertBinaryStringToInt(std::string binaryString);
	static std::string convertIntToBinaryString(unsigned int  input);
};

