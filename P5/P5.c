#include <stdio.h>
#include <stdbool.h>

int findMinimumCommonDividor(int nMin,int nMax){
    int nProduct = 1;
    while (true)
    {
        for (int i = nMin; i <= nMax; i++)
        {
            if (nProduct % i != 0){ break;}
            if (i==nMax){return nProduct;}
        }
        nProduct ++;
    }
}

int main(){
    int nFrom = 1;
    int nTo = 20;
    printf("Result: %i \n",findMinimumCommonDividor(nFrom, nTo));
}
