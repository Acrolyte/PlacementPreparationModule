#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
     unordered_map<int,int> mp;
    int c = 0, xo = 0, n = arr.size();
    for(int i=0;i<n;i++){
        xo ^= arr[i];
        if(xo == x)
            c++;
        if(mp.find(xo ^ x)!=mp.end()) c += mp[xo ^ x];
        mp[xo]++;
    }
    return c;   
}