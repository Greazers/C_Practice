/******************************************************************************

    Code To print first 100 prime numbers and check if any prime no is part of Fibonacci Series
    then print Fibonacci in front of that prime number.
*******************************************************************************/

#include <stdio.h>
#include "main.h"
#include "primeFibonacci.h"



/*
 * main() begins
 * 
 */
int main()
{
    if(counter <=0 ){
        printf("Invali Entry , \nEnter number of primes greater than 1: ");
        scanf("%d", &counter);
        printf("\n");
    }
    calcFabonacci(fabonacciArr);            /* Fibonacci series is calculated and stored in array */
    calcPrimeAndFib(counter);               /* Cal prime and check for Fibonacci */

}






