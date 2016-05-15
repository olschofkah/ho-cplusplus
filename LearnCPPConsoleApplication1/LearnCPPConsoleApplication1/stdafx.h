// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once // same as a header guard of #ifndef name and #endif around an #include.  

#include "targetver.h"

#include <cstdint> // for C++11 data types for fixed sizes. 
#include <iomanip> // for std::setprecision()
#include <stdio.h>
#include <tchar.h>
#include <iostream> // for input / output
#include <string>
#include <vector>
#include <cstdlib> // needed for exit(),  rand() and srand()
#include <chrono>
#include <random> // for std::random_device and std::mt19937
#include <cstring> // utils for handling c-style strings
#include <array>
#include <vector>
#include <functional> // for std::functional function pointers. 
#include <exception>

#include "ZeroReturnHelper.h"
#include "DataTypeSize.h"

#include "PrimeTest.h"
#include "GravityBallDrop.h"
#include "BinaryPlay.h"
#include "Constants.h"
#include "MyMathCalculator.h"
#include "MySortUtil.h"

#include "IFeatheredAnimal.h"
#include "IEggLayer.h"
#include "Duck.h"
#include "Bird.h"


#include "HackersDelightUtils.h"


int returnZero(); // makes the main compile since it looks in order of function declaration.

struct Employee
{
	short id;
	int age;
	double wage;
};

