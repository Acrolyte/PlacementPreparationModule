#include <bits/stdc++.h> 
int merge(vector<int> &arr,int l,int mid, int r){
    int t = 0, j = mid + 1;
    for(int i=l;i<=mid;i++){
        while(j<=r && arr[i] > 2LL * arr[j])
            j++;
        t += (j - (mid + 1));
    }
    vector<int> tt;
    int le = l, ri = mid + 1;
    
    while(le <= mid && ri <= r){
        if(arr[le] <= arr[ri]) 
            tt.push_back(arr[le++]);
        else tt.push_back(arr[ri++]);
    }
    
    while(le <= mid) tt.push_back(arr[le++]);
    while(ri <= r) tt.push_back(arr[ri++]);
    
    for(int i=l;i<=r;i++)
        arr[i] = tt[i-l];
    return t;
}

int mergesort(vector<int> &arr,int l, int r){
    if(l >= r) return 0;
    int mid = l + (r-l)/2;
    int inv = mergesort(arr,l,mid);
    inv += mergesort(arr,mid+1,r);
    inv += merge(arr,l,mid,r);
    return inv;
}
int reversePairs(vector<int> &arr, int n){
    return mergesort(arr,0,n-1);
}