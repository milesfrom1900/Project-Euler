#include <stdio.h>
#include <math.h>


int C(long long int n){
    int p =0;
    int q =0;

    long long int Result = 0;
    
    for (p = 2; p*p <= n; p++){
        for(q = 2; q*q <= n; q++){
            if(pow(q,p) * pow(p,q) == n && q != p){
                printf("%i %i \n",p,q);
                Result+=1;
                }
            }        
    }
    return Result *2;
}


int main(){
    long long int n = pow(800,800);
    printf("Result: %i \n", C(n));
}