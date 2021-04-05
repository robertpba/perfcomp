package main

// Program to search for large prime numbers

import (
	"fmt"
	"math"
)

// Check if a number is prime using a naive algorithm.
// Input: the number.
// Return value: True if the number is prime, False otherwise
func prime(num uint64) bool {

	var (
		count uint64
	)
	// if the number is 0 or less, it isn't prime
	if num <= 1 {
		return false
	}

	// check if the numbers from 2 up to the square root of the input
	// number are factors of the input number; if yes, the number is
	// not prime
	for count = 2; count <= uint64(math.Sqrt(float64(num))); count++ {
		if num%count == 0 {
			return false
		}
	}

	// if the function did not return yet, it means the number is prime
	return true
}

// Main program control
func main() {
	// number at which to begin searching for primes
	const (
		begin = 10000000000000001
	)

	var (
		number uint64
		primes uint8
	)

	// (possible) prime number, initialized to a large value
	number = begin

	// test numbers for primeness
	for primes = 0; primes < 10; number += 2 {
		// if the number is prime, print it out
		if prime(number) {
			fmt.Println("Prime found:", number)
			primes++
		}
	}
}
