#include "stdafx.h"


MyMathCalculator::MyMathCalculator()
{
}


MyMathCalculator::~MyMathCalculator()
{
}


double MyMathCalculator::powByRecursion(int base, int exp) // return type of auto is not suggested but possible in C++14
{
	return exp == 0 ? 1 : (exp < 0 ? 1.0 / powByRecursion(base, -exp) : base * powByRecursion(base, --exp));
}


auto MyMathCalculator::powByLoop(int base, int exp) -> double
{
	auto result{ 1 };

	if (exp < 0) {
		return static_cast<double>(1) / powByLoop(base, -exp);
	}

	for (auto i = 1; i <= exp; i++) {
		result *= base;
	}

	return result;
}


// https://en.wikipedia.org/wiki/Exponentiation_by_squaring
int MyMathCalculator::powByExponentialBySquaring(int base, int exp)
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

// add a cached fib calc. 

int MyMathCalculator::fib(unsigned int n) {
	return n < 2 ? 1 : fib(n - 1) + fib(n - 2);
}