// FILE_HEADER_START
//     File        : userinput.c
//     Description : Use case for user inputs -
//                   This is a simple shell implementation that takes 
//                   few commands. This code demonstrates the use of scanf.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    char inputStr[128];
    
    printf("****** This is a simple shell ******\n");

    /* While loop for every */
    while (1) {
        printf("# ");
        /* scanf takes user input */
        scanf("%s", &inputStr[0]);
        if (strncmp(inputStr, "quit", 4) == 0) {
            /* Break the loop */
            break;
        } else if (strncmp(inputStr, "welcome", 7) == 0) {
            printf("Welcome to my simple shell\n");
        } else if (strncmp(inputStr, "help", 4) == 0) {
            printf("Help: \n");
            printf("\t'quit' to quit \n");
            printf("\t'welcome' for welcome note\n");
            printf("\t'help' to display this help text\n");
            printf("\tRest is echo mode\n");
        } else {
            printf("Echo Mode: Input string is %s\n", inputStr);
        }
    }
    printf("Good bye!!\n");

    return 0;
}
