// FILE_HEADER_START
//     File        : function.c
//     Description : Use of functions in C -
//                   This code implements a simple arithmetic 
//                   function that takes three arguments which 
//                   includes two operands and one operator.
//     Author      : Lavanya Kumar
// FILE_HEADER_END

#include <stdio.h>

/* Function can take many arguments but, can only return one argument */
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
        printf("Invalid op %c\n", op);
        return -1;
    }
}

/* 
 * main() is a function itself which gets called when we run program
 * from the shell and it takes two argument. argc is # of arguments and
 * argv is a array of strings which is the argument itself. First 
 * argument is the program name itself.
 */
int main(int argc, const char *argv[])
{
    int a, b;
    char op;
    
    printf("Enter two integers and an operator (*,+,-,/) : ");
    /* Extra credit : You can scan more than one variable at once. */
    scanf("%d %d %c", &a, &b, &op); 
    printf("Result of %d %c %d is %d\n", a, op, b, arithmetic(a,b,op));
    
    return 0;
}
