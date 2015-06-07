// FILE_HEADER_START
//     File        : function.go
//     Description : Use of functions in GO - 
//                   This code implements a simple arithmetic function 
//                   that takes three arguments which includes two 
//                   operands and one operator.
//     Author      : Lavanya Kumar
// FILE_HEADER_END
package main

import "fmt"
import "strconv"

/* Function takes two arguments and return TWO. C/C++ doesn't have this
 * option of sending two return values. Also note, we can define variable
 * in return type declaration and use it inline. Make a note of it. These
 * variables should be used return values withou explicitly returning them.
 */
func arithmetic(a, b int, op string) (result int, resultStr string) {
    /* Extra credit : defer ? this is interesting. You can give a function 
     * to run (or define a function as we did below) and mark it deferred. 
     * This function gets called right after we do "return". 
     * There is lot of more to defer. You can check it out in golang
     * documentatino. */
    defer func() {
        resultStr = "Result of " + strconv.Itoa(a) + op + strconv.Itoa(b) +
                    " is " + strconv.Itoa(result);
    } ()
    
    /* Go implementation of switch. */
    switch op {
        /* Make a note, we can't use "'" for char. We must use '"' */
        case "+":
            result = a + b;
        case "-":
            result = a - b;
        case "*":
            result = a * b;
        case "/":
            result = a / b;
    }
    
    /* See... we dont need to return result and resultStr. Its implicit 
     * as we defined named return values */
    return
}

func main() {
    var a, b int;
    var op string;
    var resultStr string;
    
    fmt.Print("Enter two integers and an operator (*,+,-,/) : ");
    /* Scanf is similar to C. It can scan multiple values */
    fmt.Scanf("%d %d %s", &a, &b, &op);
    
    /* Catching two return values. '_' means, we dont care for that 
     * return value. */
    _, resultStr = arithmetic(a, b, op);
    
    fmt.Println(resultStr);
}
