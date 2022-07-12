#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int,int> mp;
    int mx = 0, sum = 0, n = arr.size();
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0){
            mx = i+1;
        }else {
            if(mp.find(sum)!=mp.end())
                mx = max(mx,i-mp[sum]);
            else mp[sum] = i;
        }        
    }
    return mx;
}