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
#include "ZeroReturnHelper.h"
#include "DataTypeSize.h"

#include "PrimeTest.h"
#include "GravityBallDrop.h"
#include "BinaryPlay.h"


int returnZero(); // makes the main compile since it looks in order of function declaration.

