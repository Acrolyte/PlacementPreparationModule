#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    
    int i,j,l=0,r=n-1;
    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            l = j+1;
            r = n-1;
            while(l<r){
                int s = arr[i]+arr[j]+arr[l]+arr[r];
                if(s<target) l++;
                else if(s > target) r--;
                else return "Yes";
            }
        }
    }
    return "No";
}
