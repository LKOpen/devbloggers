# FILE_HEADER_START
#      File        : function.py
#      Description : Use of functions in Python - 
#                    This code implements a simple arithmetic function 
#                    that takes three arguments which includes two 
#                    operands and one operator.
#      Author      : Lavanya Kumar
# FILE_HEADER_END

#!/usr/bin/python

# Arithmetic function that takes three argument that includes
# two operands and one operator. No type and return type declarations
# required for python.
def arithmetic(a, b, op):
    # This is equivalent of switch statements in other languages
    result = {
                '+': a + b,
                '-': a - b,
                '*': a * b,
                '/': a / b,
             }[op]
    resultStr = "Result of " + str(a) + op + str(b) + " is " + str(result)
    
    # Yes. Python can return two argument as well. Type is implicit
    return result, resultStr

def main():
    # raw_input returns a string. split() will split it by space character.
    # Therefore, we expect 1 2 + style of arguments. We could use 
    # command line arguments for better formating. Look out for my 
    # command line arguments code. Python has excellent argument parse
    # routines for command line.
    a, b, op = raw_input("Enter two integers and an operator (*,+,-,/) : ").split()
    
    # _ means, we dont care about the return value.
    _, resultStr = arithmetic(int(a), int(b), op)
    print resultStr

# We are running as a script
if __name__ == "__main__":
    main()
