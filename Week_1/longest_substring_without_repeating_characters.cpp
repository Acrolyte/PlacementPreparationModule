#include <bits/stdc++.h> 
int uniqueSubstrings(string input){
    map<char,int> mp;
    int l = 0,r = 0,len = input.length(),mx = 0;
    while(r<len){
        if(mp.find(input[r])!=mp.end())
            l = max(mp[input[r]]+1,l);
        mp[input[r]] = r;
        mx = max(r-l+1,mx);
        r++;
    }
    return mx;
}