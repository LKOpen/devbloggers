// FILE_HEADER_START
//     File        : userinput.cc
//     Description : Use case for user inputs -
//                   This is a simple shell implementation that takes
//                   few commands. This code demonstrates the use of cin.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
#include <iostream>
// It is string.h. There is <string> file for std::string
#include <string.h>

using namespace std;

int main(int argc, const char *argv[])
{
	char inputStr[128];
	
	cout << "****** This is a simple shell ******\n";

	// While loop for every
	while (true) {
		cout << "# ";
		// cin takes no string format like scanf
		cin >> &inputStr[0];
		
		// Make a note of if and else if statements here. This is 
		// condtional statement in C++ as well as C.
		if (strncmp(inputStr, "quit", 4) == 0) {
			/* Break the loop */
			break;
		} else if (strncmp(inputStr, "welcome", 7) == 0) {
			cout << "Welcome to my simple shell\n";
		} else if (strncmp(inputStr, "help", 4) == 0) {
			cout << "Help: \n";
			cout << "\t'quit' to quit \n";
			cout << "\t'welcome' for welcome note\n";
			cout << "\t'help' to display this help text\n";
			cout << "\tRest is echo mode\n";
		} else {
			cout << "Echo Mode: Input string is " << inputStr << "\n";
		}
	}
	cout << "Good bye!!\n";
	return 0;
}
