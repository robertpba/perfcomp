# primes: Performance comparison

## Overview

Each program begins at the same number to search for prime numbers according to a naive algorithm, stopping when 10 prime numbers have been found.

## C program run

```
$ gcc -o primes primes.c -lm
$ time ./primes 
Prime found: 10000000000000061
Prime found: 10000000000000069
Prime found: 10000000000000079
Prime found: 10000000000000099
Prime found: 10000000000000453
Prime found: 10000000000000481
Prime found: 10000000000000597
Prime found: 10000000000000613
Prime found: 10000000000000639
Prime found: 10000000000000669

real	0m18.910s
user	0m18.887s
sys	0m0.005s
```

## Go program run

```
$ go build .
$ time ./primes 
Prime found: 10000000000000061
Prime found: 10000000000000069
Prime found: 10000000000000079
Prime found: 10000000000000099
Prime found: 10000000000000453
Prime found: 10000000000000481
Prime found: 10000000000000597
Prime found: 10000000000000613
Prime found: 10000000000000639
Prime found: 10000000000000669

real	0m15.328s
user	0m15.317s
sys	0m0.012s
```

## Python program run

```
 time ./primes.py 
Prime found: 10000000000000061
Prime found: 10000000000000069
Prime found: 10000000000000079
Prime found: 10000000000000099
Prime found: 10000000000000453
Prime found: 10000000000000481
Prime found: 10000000000000597
Prime found: 10000000000000613
Prime found: 10000000000000639
Prime found: 10000000000000669

real	2m42.471s
user	2m42.268s
sys	0m0.012s
```
