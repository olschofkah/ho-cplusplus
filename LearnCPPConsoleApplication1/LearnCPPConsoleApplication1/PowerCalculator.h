#pragma once
class PowerCalculator
{
public:
	PowerCalculator();
	~PowerCalculator();
	static int powByRecursion(int base, int exp);
	static int powByLoop(int base, int exp);
	static int powByExponentialBySquaring(int base, int exp);
};

