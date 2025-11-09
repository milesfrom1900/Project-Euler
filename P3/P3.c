#include <stdio.h>
#include <math.h>

long long int GetGreatestPrime(long long int n){
    long long int p=0;

    while (n%2==0)  //Optimization, divide even numbers first
        n /= 2;

    for (p = 3; p*p <= n; p+=2){ //p*p since min possible p = sqrt(n)
        while (n % p == 0){
            printf("%lli ",p);
            n/=p;    
        }
    } 
    return n;
}

int main(){
    long long int n = 600851475143;
    printf("Result: %lli \n", GetGreatestPrime(n));
}