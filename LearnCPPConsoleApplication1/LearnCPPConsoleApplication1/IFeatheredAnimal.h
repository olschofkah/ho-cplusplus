#pragma once
class IFeatheredAnimal { // interface since all elements are virtual. 
	virtual void flap() = 0; // pure virtual function ... set it to null to force it to be implemented. 
};