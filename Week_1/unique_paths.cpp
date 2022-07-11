#include <bits/stdc++.h> 
int uniquePaths(int m, int n) {
    int n2 = m + n - 2, r = m - 1 ;
    double b = 1;
    for(int i=1;i<=r;i++)
        b = b * (n2-r+i)/i;
    return (int)b;
}