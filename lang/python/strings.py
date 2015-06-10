#!/usr/bin/env python
#
# string_reverse.py
#
# Sample program to reverse a given string in three ways
# - Reverse the string completely ("the big cat" becomes "tac gib eht")
# - Reverse each word in the string ("the big cat" becomes "eht gib tac")
# - Reverse the words in the string ("the big cat" becomes "cat big the")

def string_reverse_words(given_str, given_str_len):
    reversed_words_str = ''
    j = given_str_len

    for i in range(given_str_len-1, 0, -1):
        if given_str[i] == ' ':
            reversed_words_str += given_str[i+1:j] + given_str[i]
            j = i

    # Last word
    reversed_words_str += given_str[0:j]

    return reversed_words_str

def string_reverse_chars_in_words(given_str, given_str_len):
    reversed_words_str = ''
    j = 0
    for i in range(0, given_str_len):
        if given_str[i] == ' ':
            reversed_words_str += string_reverse_chars(given_str[j:i], i-j) + ' '
            j = i+1

    # Last word
    reversed_words_str += string_reverse_chars(given_str[j:given_str_len], given_str_len - j)

    return reversed_words_str

def string_reverse_chars(given_str, given_str_len):
    reversed_str = ''
    for i in range(0, given_str_len):
        reversed_str += given_str[given_str_len-1 - i]

    return reversed_str

if __name__ == '__main__':
    print("Enter the string to be reversed: ")
    # Command line
    #given_str = raw_input()

    # Example
    given_str = "the big cat went up the hill"

    print("Given String: " + given_str)

    given_str_len = len(given_str)

    reversed_str = string_reverse_chars(given_str, given_str_len)
    print("String with all characters reversed: " + reversed_str)

    reversed_str = string_reverse_words(given_str, given_str_len)
    print("String with words in reverse order: " + reversed_str)

    reversed_str = string_reverse_chars_in_words(given_str, given_str_len)
    print("String with each word reversed: " + reversed_str)

