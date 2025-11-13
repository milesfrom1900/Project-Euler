#include <stdio.h>
#include <stdbool.h>
#include "../common/utils.h"

llu SumOfSquares(llu n){
    llu sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum= sum + i*i;
    }
    return sum;
}

llu SquareOfSum(llu n){
    llu sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum= sum + i;
    }
    return sum*sum;
}

int main(){
    llu nNum = 100;
    printf("Result: %llu \n",SquareOfSum(nNum)-SumOfSquares(nNum));
}