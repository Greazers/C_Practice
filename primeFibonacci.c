#include <stdio.h>
#include "primeFibonacci.h"

/*
 * To print fibonacci Series
 * return :  void
 * pameter: address of array.
 */
void printFabonaciSeries(int * const fabbArr){
    for(int i = 0; i< counter; i++){
        printf("%d\t",fabbArr[i]);
    }
    printf("\n");
}



/*
 * Calculate  Fibonacci series and Store in an Array
 * pameter-1: pinter to fibonacci array
 * return :  True if present else False
 */
void calcFabonacci(int * fab ){
    int cnt = 0, prev=0, next=1, temp=0 ;
    while(cnt < counter){
        temp = prev + next ;
        prev = next;
        next = temp;
        fab[cnt] = prev;
        cnt++;
    }
}



/*
 * To find first 100 Prime numbers and check for Fibonacci
 * return :  void
 * pameter: first "num" prime numbers.
 */
void calcPrimeAndFib(int num){
    for (int i = 2;; i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            checkFabonacci(fabonacciArr, i);
            counter--;
        }
        if (counter == 0) {
            break;
        }
    }
}



/*
* To check value present in  Fibonacci array
* pameter-1: pinter to fibonacci array
* pameter-2: value to check for prime number.
* return :  True if present else False
*/
int checkFabonacci(int * const fabArr, int val){
    for(int cnt =1 ; (cnt<ARRLEN )&&(fabArr[cnt] > 0) ; cnt++){
        if(fabArr[cnt]== val)
        {
            printf("%d : Fabb\n", val);
            return true ;
        }
    }
    printf("%d \n", val);
    return false;
}
