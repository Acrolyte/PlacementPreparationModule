#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> s(arr.begin(),arr.end());
    int x = 0;
    for(auto i: arr){
        if(s.find(i-1)!=s.end()) continue;
        else{
            int c = 1,k=i+1;
            while(s.find(k++)!=s.end())c++;
            x = max(x,c);
        }
    }
    return x;
}