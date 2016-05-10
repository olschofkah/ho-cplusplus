#include "stdafx.h"
#include "HackersDelightUtils.h"


HackersDelightUtils::HackersDelightUtils()
{
}


HackersDelightUtils::~HackersDelightUtils()
{
}

// round down to the next power of 2 | pg-61
unsigned int HackersDelightUtils::flp2(unsigned int x) {
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	return x - (x >> 1);
}

// round up to the next power of 2 | pg-62
unsigned int HackersDelightUtils::clp2(unsigned int x) {
	x -= 1;
	x |= x >> 1;
	x |= x >> 2;
	x |= x >> 4;
	x |= x >> 8;
	x |= x >> 16;
	return x + 1;
}

// pg 75
unsigned int HackersDelightUtils::minOr(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
	unsigned int m, temp;
	m = 0x80000000;
	while (m != 0) {
		if (~a & c & m) {
			temp = (a | m) & ~m;
			if (temp < b) {
				a = temp;
				break;
			}
		}
		else if (a & ~c & m) {
			temp = (c | m) & ~m;
			if (temp <= d) {
				c = temp;
				break;
			}
		}
	}
	return a | c;
}

int HackersDelightUtils::pop(unsigned int x) {
	x -= ((x >> 1) & 0x55555555);
	x = (x & 0x33333333) + ((x >> 2) & 0x33333333);
	x = (x + (x >> 4)) & 0x0F0F0F0F;
	x += x >> 8;
	x += x >> 16;
	return x & 0x0000003F;
}


int HackersDelightUtils::pop2(unsigned int x) {
	unsigned int sum{ x };
	std::cout << BinaryPlay::convertIntToBinaryString(x) << " " << sum << std::endl;
	while (x != 0) {
		x = x >> 1;
		sum = sum - x;

		std::cout << BinaryPlay::convertIntToBinaryString(x) << " " << sum << " " << sum + x << std::endl;
	}
	return sum;
}
