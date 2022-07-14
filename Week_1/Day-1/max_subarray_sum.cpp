#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long max_so_far = 0, max_till = 0;
    
    for(int i=0;i<n;i++){
        max_till += arr[i];
        if(max_so_far < max_till) max_so_far = max_till ;
        if(max_till < 0) max_till = 0;
    }
    return max_so_far;
}