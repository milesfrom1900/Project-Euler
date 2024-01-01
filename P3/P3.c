#include <stdio.h>

long long int GetGreatestPrime(long long int n){
    long long int p=0;

    for (p = 2; p <= n; p++){
        while (n % p == 0){
            printf("%lli ",p);
                if (n == p)
                    return n;
                n=n/p;
        }
    } 
}

int main(){
    long long int n = 600851475143;
    printf("Result: %lli \n", GetGreatestPrime(n));
}