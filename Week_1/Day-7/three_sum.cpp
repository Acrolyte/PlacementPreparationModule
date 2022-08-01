#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(),arr.end());
    int i=0,j=0,k=0;
    vector<vector<int>> ans;
    for(k=0;k<n-2;k++){
        if(k==0 or (k>0 and arr[k] != arr[k-1])){
            i = k+1;
            j = n-1;
            int sum = K - arr[k];
            while(i<j){
                if(arr[i] + arr[j] == sum){
                    ans.push_back({arr[i],arr[j],arr[k]});
                    while(i<j && arr[i] == arr[i+1]) i++;
                    while(i<j && arr[j] == arr[j-1]) j--;
                    i++;
                    j--;
                }
                else if(arr[i] + arr[j] < sum) i++;
                else j--;
            }
        }
    }
    
    return ans;
}