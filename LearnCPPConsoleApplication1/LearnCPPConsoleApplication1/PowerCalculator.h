#pragma once
class PowerCalculator
{
public:
	PowerCalculator();
	~PowerCalculator();
	static double powByRecursion(int base, int exp);
	static double powByLoop(int base, int exp);
	static int powByExponentialBySquaring(int base, int exp);
};

