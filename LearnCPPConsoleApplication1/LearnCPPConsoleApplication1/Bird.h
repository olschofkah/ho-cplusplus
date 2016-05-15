#pragma once
class Bird : public Duck // According to Ryan ... all birds are ducks. 
{
public:
	Bird();
	virtual ~Bird();

	virtual Duck& Bird::talk(); // virtual functions are slower due to the virtual lookup table maintained to support polymorphism 
};

