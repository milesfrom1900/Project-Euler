#include <stdio.h>


long long int GetlargestPrime(long long int n){
    long long int p=0;

    while (n != p){
        for (p = 2; p <= n; p++){
            if (n % p == 0){
                printf("%lli ",p);
                if (n == p)
                    return n;
                n=n/p;
            }
        }
    }
    return n;
}

int main(){
    long long int n = 600851475143;
    printf("Result: %lli\n", GetlargestPrime(n));
}