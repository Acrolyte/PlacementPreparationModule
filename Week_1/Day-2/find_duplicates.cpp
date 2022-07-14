#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
    int f[n] = {0};
    for(auto it: arr)
        f[it]++;
    for(int i=0;i<n;i++)
        if(f[i]>=2) return i;
    return -1;
}
