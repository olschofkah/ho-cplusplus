#include "stdafx.h"
#include "PowerCalculator.h"


PowerCalculator::PowerCalculator()
{
}


PowerCalculator::~PowerCalculator()
{
}


int PowerCalculator::powByRecursion(int base, int exp)
{
	return exp == 0 ? 1 : (exp < 0 ? 1 / powByRecursion(base, -exp) : base * powByRecursion(base, --exp));
}


int PowerCalculator::powByLoop(int base, int exp)
{
	return 0;
}


// https://en.wikipedia.org/wiki/Exponentiation_by_squaring
int PowerCalculator::powByExponentialBySquaring(int base, int exp)
{
	int result = 1;
	while (exp) {
		if (exp & 1) {
			result *= base;
		}
		exp >>= 1; // 0b0001
		base *= base;
	}

	return result;
}
