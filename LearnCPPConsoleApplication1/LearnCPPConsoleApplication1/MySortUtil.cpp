#include "stdafx.h"
#include "MySortUtil.h"


MySortUtil::MySortUtil()
{
}


MySortUtil::~MySortUtil()
{
}


void MySortUtil::bubbleSort(int input[], int size)
{
	// bubble up the largest value to the last index of the array on each loop. 
	for (int i{ 0 }; i < size - 1; ++i) {
		for (int ii{ 0 }; ii < size - i - 1; ++ii) {
			if (input[ii] > input[ii + 1]) {
				std::swap(input[ii], input[ii + 1]);
			}
		}
	}
}

void MySortUtil::selectionSort(int input[], int size)
{

	int j;
	for (int i{ 0 }; i < size - 1; ++i) {
		j = i;
		for (int ii{ i + 1 }; ii < size; ++ii) {
			if (input[ii] < input[j]) {
				j = ii;
			}
		}

		// swap if i is no longer j since a new j would indicate that there is a smaller value than the one indexed at i. 
		if (i != j) {
			std::swap(input[i], input[j]);
		}
	}
}