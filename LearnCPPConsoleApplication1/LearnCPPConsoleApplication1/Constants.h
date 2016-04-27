#pragma once

// forward declaration and values defined in Constants.cpp to avoid recopying values based on each .h include. 
namespace Constants
{
	extern const double pi;
	extern const double avogadro;
	extern const double my_gravity;
}

enum class CupSizes
{
	A,
	B,
	C,
	D,
	DD,
	DDD,
	HHH
};