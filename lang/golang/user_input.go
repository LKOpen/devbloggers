// FILE_HEADER_START
//     File        : userinput.go
//     Description : Use case for user inputs -
//                   This is a simple shell implementation that takes
//                   few commands. This code demonstrates the use of fmt
//                   package functions like Printf and Scanf.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
package main

// "fmt" provides printf and scanf similar to C APIs
import "fmt"

func main() {
    var inputStr string
    
    // In GO, public functions starts with capitol letter
    fmt.Println("****** This is a simple shell ******")
    
    // Infinite loop. No while loop in golang
    for {
        fmt.Printf("# ");

        // We are ignoring return values of Scanf but, it returns
        // an error code in case of an error
        fmt.Scanf("%s", &inputStr)
        
        // Conditional statements if and else if are similar to C and C++
        // GoLang looks a bit similar to C and C++
        if inputStr == "quit" {
            /* Break the loop */
            break;
        } else if inputStr == "welcome" {
            fmt.Println("Welcome to my simple shell")
        } else if inputStr == "help" {
            // Printf and Println are similar except that Printf 
            // is similar to C printf.
            fmt.Printf("Help: \n")
            fmt.Printf("\t'quit' to quit \n")
            fmt.Printf("\t'welcome' for welcome note\n")
            fmt.Printf("\t'help' to display this help text\n")
            fmt.Printf("\tRest is echo mode\n")
        } else {
            fmt.Println("Echo Mode: Input string is", inputStr)
        }
    }
    fmt.Printf("Good bye!!\n")
}
