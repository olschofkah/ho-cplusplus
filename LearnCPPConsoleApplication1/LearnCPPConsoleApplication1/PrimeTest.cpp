#include "stdafx.h"
#include "PrimeTest.h"
#include <cmath>


PrimeTest::PrimeTest()
{
}


PrimeTest::~PrimeTest()
{
}


bool PrimeTest::isPrime(int x)
{

	if (x == 1 || x == 2) {
		return true;
	}

	int_fast16_t maxRoot{ static_cast<int_fast16_t>(sqrt(x) + 1) };

	for (int i = 3; i < maxRoot; i++) {
		if (x % i == 0) {
			return false;
		}
	}

	return true;
}
