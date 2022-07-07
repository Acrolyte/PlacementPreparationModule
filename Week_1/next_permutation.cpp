#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &a, int n)
{
    int k = 0,l=0;
    for(k=n-2;k>=0;k--){
        if(a[k]<a[k+1]) break;
    }
    if(k < 0){
        reverse(a.begin(),a.end());
        return a;
    }
    for(l=n-1;l>k;l--)
        if(a[l] > a[k]) break;
    swap(a[k],a[l]);
    reverse(a.begin()+k+1,a.end());    
    return a;
}