#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    int f[n+1] = {0};
    for(auto it: arr)
        f[it]++;
    
    pair<int,int> p;
    for(int i=0;i<=n;i++){
        if(f[i] == 2) p.second = i;
        if(f[i] == 0) p.first = i;
    }
    
    return p;
}
