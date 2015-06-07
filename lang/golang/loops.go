// FILE_HEADER_START
// 	   File        : loops.go
// 	   Description : Use of loops in Go - Sum of 1 to N numbers
// 	   Author      : Lavanya Kumar
// FILE_HEADER_END

// 'main' package is a must to define main() routine. This is similar
// to 'C' like main() that gets called when program runs.
package main

import "fmt"

func main() {
	// var definesa variable followed by a name followed by the type
	var loopCntSum int = 0;
	
	// := initialize and defines
	// No braces required for a 'for' loop
	for loopItr := 1; loopItr <= 10; loopItr++ {
		loopCntSum += loopItr;
	}
	
	fmt.Println("Sum of 1 to 10 is", loopCntSum);
}
