/* Search for large prime numbers */

#include <math.h>
#include <stdio.h>

/* number where to begin searching for primes */
#define BEGIN 10000000000000001ULL


/*
 * Check if a number is prime.
 * Input: the number.
 * Return value: 1 if the number is prime, 0 otherwise
 */
int
prime(unsigned long long num)   /* input: the number to be checked */
{
  unsigned long long count;    /* loop control variable */

  /* If the number is 0 or less, it isn't prime */
  if (num <= 1)
    return(0);

  /* Check if the numbers from 2 up to the square root of the input
     number are factors of the input number. If yes, the number is not
     prime. */
  for (count = 2; count <= (unsigned long long) sqrt(num); count++)
    if (num % count == 0)
      return(0);

  /* If the function did not return yet, it means the number is prime. */
  return(1);
}


int
main(void)
{
    unsigned long long number = BEGIN; /* number to be checked */
    short primes = 0;                  /* number of primes found */


    /* Test numbers for primeness until the user decides to quit*/
    while (primes < 10) {
        /* If the number is prime print it out */
        if (prime(number)) {
            printf("Prime found: %llu\n", number);
            primes++;
        }
        number += 2;
    }

    return(0);
}
