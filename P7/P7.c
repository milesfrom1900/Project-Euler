#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "../common/utils.h"

llu GetNthPrime(int n){
    int primeCounter=0;
    llu number=0;
    while (primeCounter < n)
    {
        number++;

        if (isPrime(number))
        {
            primeCounter +=1;
        }
    }
    return number;
}

int main(){
    int nNum = 10001;
    printf("Result: %llu \n",GetNthPrime(nNum));
}