#!/usr/bin/env python3

# Program to search for large prime numbers

import math

# number at which to begin searching for primes
BEGIN = 10000000000000001

#
# Check if a number is prime using a naive algorithm.
# Input: the number.
# Return value: True if the number is prime, False otherwise
#
def prime(num):   # input: the number to be checked

    # if the number is 0 or less, it isn't prime
    if num <= 1:
        return False

    # check if the numbers from 2 up to the square root of the input
    # number are factors of the input number; if yes, the number is
    # not prime
    for count in range(2, int(math.sqrt(num)) + 1):
        if num % count == 0:
            return False

    # if the function did not return yet, it means the number is prime
    return True


#
# Main program control
#
def main():
    # (possible) prime number, initialized to a large value
    number = BEGIN
    primes = 0

    # test numbers for primeness
    while primes < 10:
        # if the number is prime, print it out
        if prime(number):
            print("Prime found:", number)
            primes += 1
        number += 2


# Start the program
if __name__ == "__main__":
    main()
