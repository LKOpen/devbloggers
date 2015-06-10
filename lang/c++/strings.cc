// FILE_HEADER_START
//     File        : strings.cc
//     Description : Use case for string sort and swap -
//                   Reverse a string, reverse words in a string
//                   and reverse order of words in the string.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

void reverseString(string &istring)
{
    // Idea is feed the string to a stream, attach an iterator of char
    // so we can iterate char by char. Build a vector of chars with it
    // and rever vector and write it to a out stream.  Out stream
    // is written back to the string that is sent as a reference variable.
    // Idea here is to introduce you to multiple ways of accessing 
    // the string and its manipulation options.
    istringstream is(istring);
    ostringstream os;

	// Consider white spaces while reversing a string.
    noskipws(is);

    istream_iterator<char> begin(is);
    istream_iterator<char> end;
    vector<char> vchar(begin, end);

	// Reverse is a built in function to reverse content of given iterators
    reverse(vchar.begin(), vchar.end());

    copy(vchar.begin(), vchar.end(), ostream_iterator<char>(os, ""));
    istring = os.str();
}

void reverseWordOrderString(string &istring)
{
    // Here idea is the same as string reverse but, we use strings 
    // insteads of char so we can reverse words in the string 
    istringstream is(istring);
    ostringstream os;
    istream_iterator<string> begin(is);
    istream_iterator<string> end;
    vector<string> vstring(begin, end);

    reverse(vstring.begin(), vstring.end());
    copy(vstring.begin(), vstring.end(), ostream_iterator<string>(os, " "));
    istring = os.str();
}

void reverseWordString(string &istring)
{
    // Idea here is to split the string using iterator
    // by words and push them into a vector, reverse
    // each string and put it output string stream.
    // Write it back to caller.
    istringstream is(istring);
    ostringstream os;
    istream_iterator<string> begin(is);
    istream_iterator<string> end;
    vector<string> vstring(begin, end);

    for ( vector<string>::iterator it=vstring.begin(); it!=vstring.end(); ++it)
        reverseString(*it);

    copy(vstring.begin(), vstring.end(), ostream_iterator<string>(os, " "));
    istring = os.str();
}

int main(int argc, const char *argv[])
{
    // string is a class in CPP and provides abstraction 
    // for string operations
    string istring;

    cout << "Enter a string : "; 
    // getline reads input till 'return' is hit.
    getline(cin, istring);

    // First, reverse string. Then, reverse each string and then
    // rever order of words in a string.
    reverseString(istring);
    cout << istring << endl;
    reverseWordString(istring);
    cout << istring << endl;
    reverseWordOrderString(istring);
    cout << istring << endl;
    
    return 0;
}
