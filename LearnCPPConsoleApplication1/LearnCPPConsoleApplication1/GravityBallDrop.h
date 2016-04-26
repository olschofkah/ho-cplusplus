#pragma once
class GravityBallDrop
{
public:
	GravityBallDrop();
	~GravityBallDrop();
	// Calculate the height of a ball dropped 
	static double calcHeightAtTime(int seconds, int height);

	// symbolic constants
	const double GRAVITY{ 9.8 };
};

