#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    map<int,int> m;
    int n = arr.size();
    for(auto i: arr) m[i]++;
    vector<int> v;
    for(auto i: m)
        if(i.second > floor(n/3))
            v.push_back(i.first);
    return v;
}