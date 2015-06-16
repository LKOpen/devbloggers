// FILE_HEADER_START
//     File        : strings.go
//     Description : Use case for string sort and swap -
//                   Reverse a string, reverse words in a string
//                   and reverse order of words in the string.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
package main

import "fmt"
import "os"
import "bufio"
import "strings"

// Routing that reverses a string using simple loop
func reverseString(s string) string {
	rs := make([]byte, len(s))
	for i := 0; i < len(s); i++ {
		rs[i] = s[len(s) - 1 - i]
	}
	return string(rs)
}

// Reverse each word in a string
func reverseWordString(s string) string {
	var wlist []string
	// Fields return white space separated words in a string
	wlist = strings.Fields(s)
	for idx, str := range wlist {
		str = reverseString(str)
		wlist[idx] = str
	}
	return strings.Join(wlist, " ")
}

// Using recursion to reverse list of strings
func reverseStringList(s []string) []string {
	if len(s) == 0 {
		return s
	}
	return append(reverseStringList(s[1:]), s[0])
}

func reverseWordorderString(s string) string {
	// Split string into list of words, reverse the list and then
	// join them back. Otherway to do is to reverse the string and 
	// reverse each word in it.
	return strings.Join(reverseStringList(strings.Fields(s)), " ")
}

func main() {
	var s string

	// NewReader return a return to a IO handler. To me, this is 
	// similar to stringstream in C++. 
	reader := bufio.NewReader(os.Stdin)

	fmt.Print("Enter a string : ")
	s,_ = reader.ReadString('\n')
	// You can use Trim and give character you like to trip off
	s = s[:len(s)-1]

	s = reverseString(s)
	fmt.Println("Reverse string : ", s)

	s = reverseWordString(s)
	fmt.Println("Word reverse string : ", s)

	s = reverseWordorderString(s)
	fmt.Println("Word order reverse string : ", s)
}
