#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
    map<int,int> m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    int c = 0, an = -1;
    for(auto i: m)
        if(i.second > c && i.second > floor(n/2)){
            c = i.second;
            an = i.first;
        }
    return an;
}