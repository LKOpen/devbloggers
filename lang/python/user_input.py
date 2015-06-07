# FILE_HEADER_START
#      File        : userinput.py
#      Description : Use case for user input in Python - 
#                    Simple shell implementation in python.
#      Author      : Lavanya Kumar
# FILE_HEADER_END

#!/usr/bin/python
import os

def main():
    print "****** This is a simple shell ******"
    while True:
        # raw_input takes an input like cin in C++ 
        userInput = raw_input("# ")
        
        # We could use dictionaries to write better code here. 
        # For simplicity I used standard if, elif. 
        # BTW, You now know conditional statement if, elif in Python :-)
        if userInput == "quit":
            break
        elif userInput == 'welcome':
            print "Welcome to my simple shell"
        elif userInput == 'help':
            # Multi line strings in python start and ends with """
            print """
                    Help:
                        'quit' is quit shell
                        'welcome' is display welcome note
                        'help' is display this text
                        Rest is echo mode
                  """
        else:
            print "Echo Mode : Input is", userInput 
    print "Good bye!!"

if __name__ == "__main__":
    main()
