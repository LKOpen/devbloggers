// FILE_HEADER_START
//     File        : function.cc
//     Description : Use of functions in CPP - 
//                   This code implements a simple arithmetic function 
//                   that takes three arguments which includes two 
//                   operands and one operator.
//     Author      : Lavanya Kumar
// FILE_HEADER_END

#include <iostream>
#include <stdio.h>

using namespace std;

// Function can take arguments and can only return one argument
int arithmetic(int a, int b, char op)
{
    switch(op) {
    case '*':
        return a * b;
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '/':
        return a / b;
    default:
        cout << "Invalid op " << op << "\n";
        return -1;
    }
}

// 
// main() is a function itself which gets called when we run program
// from the shell and it takes two argument. argc is # of arguments
// argv is a array of strings.
//
int main(int argc, const char *argv[])
{
    int a, b;
    char op;
    
    cout << "Enter two integers and an operator (*,+,-,/) : ";
    // Extra credit : You can scan more than one variable at once.
    // Also, you dont need to send address to it.
    cin >> a >> b >> op;
    
    // You can use printf in c++ but not recommonded though.
    printf("Result of %d %c %d is %d\n", a, op, b, arithmetic(a,b,op));
    
    return 0;
}

