// FILE_HEADER_START
// 	   File        : string.c
// 	   Description : Use of strings and recurrsion in C - 
//                   Reverse a string, reverse order of words in a 
//					 string and reverse each word within the string.
// 	   Author      : Lavanya Kumar
// FILE_HEADER_END
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * This program takes a string as input and produces a reversed
 * string then reverse the word order in the string and finally
 * reverse order of the string. Final output will be same as 
 * input string.
 */

/* Start and end here are pointers to char data type */
void reverseString(char *start, char *end)
{
    while (start < end) {
        char temp;
        /* * of a pointer return the value of the address the 
         * pointer is pointing to */
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return;
}

void wordReversedString(char *start, char *end)
{
    char *substr = start;
    
    /* No {} required if a loop has only one statement in it. */
    while (*start == ' ' || *start == '\t') start++;
    while (start < end) {
        if (*start == ' ' || *start == '\t') {
            /* aha.. recursion.. You can call the same function with
             * different parameters or same parameters. Each call to 
             * the function has a private state in _stack_. I left a 
             * reference document about process in the reference secion. 
             * Take a look for more details. */
            reverseString(substr, start - 1);
            substr = start + 1;
        }
        start++;
    }
    reverseString(substr, end);
    return;
}

void wordOrderReverseString(char *start, char *end)
{
    char *substr, *last;

    reverseString(start, end);
	last = substr = start;
		printf("%s %s %s\n", last, substr, start);

    while (start < end) {
        if (*last == ' ' || *last == '\t') {
            reverseString(substr, last);
			last = substr = start++;
        } else {
			last = start;
			start++;
		}
    }
    reverseString(substr, end);
    
    /* This function is of return type void. This means, no need to 
     * return anything (there is an implicit return added by the compiler 
     * which we dont see). Once this function returns, it returns to 
     * its caller. In this example, the caller is main(). In recursion,
     * the caller is the same function. So, it returns to itself but, 
     * it will not restart the function from first line. But, it starts
     * where it was called in the function body. */
     return;
}

int main(int argc, const char *argv[])
{
    char strLiteral[32];
    int len;
    
    printf("Give a string you want to reverse : ");
    fgets(strLiteral, 31, stdin);
    len = strlen(strLiteral)-1;
    if (strLiteral[len] == '\n') {
        strLiteral[len] = '\0';
    }

	/* Recalculate string length as we repaced \n with \0 (string terminator) */
    len = strlen(strLiteral)-1;

    /* We are sending address of the char array. This means,
     * if the function manipulates the address, it reflects here.
     * This allows the functions not to return any thing once 
     * done with processing. */
    printf("Original string : %s\n", strLiteral);
    reverseString(strLiteral, strLiteral + len);
    printf("Reversed string : %s\n", strLiteral);
    wordReversedString(strLiteral, strLiteral + len);
    printf("Word reversed string : %s\n", strLiteral);
    wordOrderReverseString(strLiteral, strLiteral + len);
    printf("Word order reversed string : %s\n", strLiteral);

    return 0;
}
