#include <bits/stdc++.h> 
#define ll long long int
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<ll>> v;
    if(n>=1)v.push_back({1});
    if(n>=2)v.push_back({1,1});
    for(int i=2;i<n;i++){
        vector<ll> t;
        t.push_back(1);
        for(int j=0;j<v[i-1].size()-1;j++)
            t.push_back(v[i-1][j] + v[i-1][j+1]);
        t.push_back(1);
        v.push_back(t);
    }
    return v;
}
