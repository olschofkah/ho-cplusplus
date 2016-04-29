#pragma once
class MyMathCalculator
{
public:
	MyMathCalculator();
	~MyMathCalculator();
	static double powByRecursion(int base, int exp);
	static double powByLoop(int base, int exp);
	static int powByExponentialBySquaring(int base, int exp);
	static int fib(unsigned int n);
};

