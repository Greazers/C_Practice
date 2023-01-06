#ifndef PRIMEANDFIBONACCI_PRIMEFIBONACCI_H
#define PRIMEANDFIBONACCI_PRIMEFIBONACCI_H
#include <stdbool.h>
#define ARRLEN  50         /* Fibonacci array length*/

int checkFabonacci(int * , int );
void printFabonaciSeries(int * );
void calcFabonacci(int * );
void calcPrimeAndFib(int);


static int counter = 100; /* First 100 prime numbers.*/

extern int fabonacciArr[ARRLEN] ;  /*Array stores Fibonacci series */

#endif //PRIMEANDFIBONACCI_PRIMEFIBONACCI_H

