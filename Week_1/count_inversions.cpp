#include <bits/stdc++.h> 

long long merge(long long *arr,long long a[],int l,int mi,int r){
    long long inv = 0, i = l, j = mi, k = l;
    while((i<=mi-1) && (j<=r)){
        if(arr[i]<=arr[j]) a[k++] = arr[i++];
        else {
            a[k++] = arr[j++];
            inv += mi - i;
        }
    }
    while(i <= mi-1) a[k++] = arr[i++];
    while(j <= r) a[k++] = arr[j++];
    for(i=l;i<=r;i++) arr[i] = a[i];
    return inv;
}

long long merge_sort(long long *arr,long long a[],int l,int r){
    long long m, inv = 0;
    if(r>l){
        m = l + (r-l)/2;
        inv += merge_sort(arr,a,l,m);
        inv += merge_sort(arr,a,m+1,r);
        inv += merge(arr,a,l,m+1,r);
    }
    return inv;
}

long long getInversions(long long *arr, int n){
    long long a[n];
    return merge_sort(arr,a,0,n-1);
}