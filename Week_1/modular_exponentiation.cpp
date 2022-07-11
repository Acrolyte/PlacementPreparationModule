#include <bits/stdc++.h> 
long modularExponentiation(int x, int n, int m) {
    if(n == 0) return 1;
    long r = modularExponentiation(x,n/2,m);
    if(n&1)
        return (x * (r % m * r % m) % m) % m;
    return (r % m * r % m) % m;
}