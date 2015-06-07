# FILE_HEADER_START
#      File        : loops.py
#      Description : Use of loops in Python - Sum of 1 to N numbers
#      Author      : Lavanya Kumar
# FILE_HEADER_END

#!/usr/bin/python
#
# This code demonstrates a simple loop to calculate sum of
# numbers starting 1 till 10
#

def main():
    count = 0
    # range(start, end) gives a list of numbers from start to end - 1.
    # 'for' iterates over a list with an 'in'
    for num in range(1, 11):
        count += num
    print "Sume of integers 1 till 10 is", count

# This is an indication that this program runs as a script
if __name__ == "__main__":
    main()
