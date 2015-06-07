# FILE_HEADER_START
#      File        : largeelement.py
#      Description : Use case for sort and search - 
#                    Find largest element in an array.
#      Author      : Lavanya Kumar
# FILE_HEADER_END

#!/usr/bin/python

def main():
    l1 = [5,2,3,1,4,6,9,8,7,10]
    
    # Python has this excellent API that does sorting 
    # by default. Efficiency of the function should be
    # considered while comparing with other languages.
    # But, it is well adopted as I see it.
    sorted(l1);
    
    print "Largest value is", l1[len(l1) - 1]

if __name__ == "__main__":
    main()
