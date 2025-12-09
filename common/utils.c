#include <stdio.h>
#include "utils.h"

typedef long long lli;
typedef unsigned long long llu;

llu gcd(llu a, llu b) {
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

llu lcm(llu a, llu b) {
    return (a / gcd(a, b)) * b;
}

bool isPrime(llu n) {
    if (n<=1) return false;
    if (n<=3) return true;

     if (n % 2 == 0 || n % 3 == 0) return false;


    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }

    return true;
}