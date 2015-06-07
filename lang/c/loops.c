// FILE_HEADER_START
// 	   File        : loops.c
// 	   Description : Use of loops in C - Sum of 1 to N elements
// 	   Author      : Lavanya Kumar
// FILE_HEADER_END
#include <stdio.h>

int main(int argc, const char *argv[])
{
	int loopCnt = 10, loopItr;
	int loopAddCount = 0;

	// For loop
	for (loopItr = 1; loopItr <= loopCnt; loopItr++) {
		loopAddCount += loopItr;
	}
	printf("Sum of numbers 1 to %d is %d\n", loopCnt, loopAddCount);
	
	return 0;
}
