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