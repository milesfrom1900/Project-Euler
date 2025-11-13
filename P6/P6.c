#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "../common/utils.h"

llu SumOfSquares(llu n){
    
    llu sum=pow((n+1)/2);
    
    /*llu sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum= sum + i*i;
    }
    */
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

/*Optimizaton workshop
    Square of sums
    For 10: 1+10=11, 2+9=11, ...
    Sum=(nMin+nMax)/2

    Sum of squares
    Squares 1   4   9   16  25
    Sum     1   5   14  30  55

    
*/