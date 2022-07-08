#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini = INT_MAX,mxPro = 0;
    for(auto i: prices){
        mini = min(mini,i);
        if(i - mini > mxPro) mxPro = i - mini;
    }
    return mxPro;
}