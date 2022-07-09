#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    vector<int> ans;
    int i,j,k;
    i = j = k = 0;
    
    for(;k<m+n;k++){
        if(arr1[i]<arr2[j])
            ans.push_back(arr1[i++]);
        else ans.push_back(arr2[j++]);
        if(i >= m){
            for(;j<n;)
                ans.push_back(arr2[j++]);
            break;
        }
        if(j >= n){
            for(;i<m;)
                ans.push_back(arr1[i++]);
            break;
        }
    }
    return ans;
    
}