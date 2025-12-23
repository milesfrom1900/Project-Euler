#include <stdio.h>
#include <math.h>
#include "../common/utils.h"


bool findPythagoreanTriplet(int *ptra, int *ptrb, int *ptrc, int sum){
    //int a=1,b=1,c=1;
    
    /*
    //int calcSum=0;
    //int k=1;
    //double sumPrevOddInts=0;
    //Fibonacci's method

    //while (a < sum/3)
    {
        if (isPerfectSquare(k)){
            a=sqrt(k);
            if (isPerfectSquare(sumPrevOddInts)){
                b=sqrt(sumPrevOddInts);
                c=sqrt(a*a+b*b);
                calcSum=a+b+c;
            }
        }
        sumPrevOddInts=sumPrevOddInts+k;
        k=k+2;
    }
    */
    for (int a = 1; a <= sum; a++)
    {
        for (int b = a; b <=sum; b++)
        {
            if (isPerfectSquare(a*a+b*b))
            {
                int c=sqrt(a*a+b*b);
                if (a+b+c==sum)
                {
                    *ptra=a;
                    *ptrb=b;
                    *ptrc=c;
                    return true;
                }
            }   
        }
    }

    return false;
}
//a+b+c =1000
//a*a + b*b = c*c


void main(){
    int sum = 1000;
    int a,b,c;
    int result;
    if (findPythagoreanTriplet(&a,&b,&c,sum)){
        result = a*b*c;
        printf("Result: %i \n",result);
    }
    else{
        printf("No result found\n");
    };
    
}