// FILE_HEADER_START
// 	   File        : loops.cc
// 	   Description : Use of loops  - Sum of 1 to N numbers
// 	   Author      : Lavanya Kumar
// FILE_HEADER_END
#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
	int loopCnt = 10;
	int loopAddCount = 0;

	// For loop
	for (int loopItr = 1; loopItr <= loopCnt; loopItr++) {
		loopAddCount += loopItr;
	}

	// Unlike printf in C, cout can take variables directly where you want to print.
	cout << "Sum of numbers 1 to " << loopCnt << " is " << loopAddCount << "\n";

	// BTW, You can use printf from stdio.h like C.
	// printf("Sum of numbers 1 to %d is %d\n", loopCnt, loopAddCount);

	return 0;	
}
