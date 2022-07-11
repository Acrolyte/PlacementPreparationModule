#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int c=0;

        for(auto i: nums){
            auto it = find(nums.begin()+c+1, nums.end() ,target-i);
            if(it!=nums.end()){
                ans.push_back(c);
                int pos = it - nums.begin();
                ans.push_back(pos);
                break;
            }
            c++;
        }
        return ans;
    }
};