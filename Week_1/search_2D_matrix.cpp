#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    int lo = 0;
    int hi = n*m - 1;
    while(lo<=hi){
        int mi = lo + (hi-lo)/2;
        if(mat[mi/n][mi%n] == target) return true;
        if(mat[mi/n][mi%n] < target) lo = mi + 1;
        else hi = mi - 1;
    }
    return false;
}