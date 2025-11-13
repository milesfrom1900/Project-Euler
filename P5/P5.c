#include <stdio.h>
#include <stdbool.h>
#include "../common/utils.h"

llu SequencialLCM(llu nMin,llu nMax){
    llu result = nMin;
    for (llu i = nMin+1; i <= nMax; i++)
    {
        result=lcm(i,result);
     }
    return result;
}

int main(){
    llu nFrom = 1;
    llu nTo = 20;
    printf("Result: %i \n",SequencialLCM(nFrom, nTo));
}
/*Optimization workshow
2,4,6,9...
3,6,9,12,15,18,21,24,27,30,33,36,39,42,45,48,51,54,57,60
4,8,12,16,20,24,28,32,36,40,44,48,52,56,60
5,10,15,20,25,30,35,40,45,50,55,60

Smalles common multiple in 3,4,5 is 60
1   2   3   4       5
1*1 1*2 1*6 1*12    1*60
    2*1 2*3 2*6     2*30
        3*1 3*4     3*20
            4*3     4*15
                    5*12

lcm(1,2)=2
lcm(1,2,3)=6
lcm(1,2,3,4)=12
lcm(1,2,3,4,5)=60
    =LCM(5,LCM(1,2,3,4))
    =LCM(5,LCM(4,LCM(1,2,3)))





*/
