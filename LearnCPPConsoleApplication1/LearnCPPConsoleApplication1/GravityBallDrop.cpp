#include "stdafx.h"
#include "GravityBallDrop.h"
#include <cmath>
#include "Constants.h"


GravityBallDrop::GravityBallDrop()
{
}


GravityBallDrop::~GravityBallDrop()
{
}


// Calculate the height of a ball dropped 
double GravityBallDrop::calcHeightAtTime(const int seconds, const int height)
{
	return fmax(0, height  - (constants::my_gravity * pow(seconds, 2) / 2));
}
