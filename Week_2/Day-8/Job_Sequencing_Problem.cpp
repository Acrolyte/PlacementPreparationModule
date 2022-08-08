#include <bits/stdc++.h>
using namespace std;

struct Job{
    int id;
    int dead;
    int profit;
};
bool static comp(Job a, Job b){
    return (a.profit > b.profit);
}

int jobScheduling(vector<vector<int>> &jo){
    int n = jo.size();
    vector<Job> jobs(n);
    int i=0;
    for(auto it: jo){
        jobs[i].id = i;
        jobs[i].dead = it[0];
        jobs[i].profit = it[1];
        i++;
    }
    sort(jobs.begin(), jobs.end(),comp);
    int mx = jobs[0].dead;
    for(i=1;i<n;i++) mx = max(mx,jobs[i].dead);
    
    int slt[mx + 1];
    for(i=0;i<=mx;i++) slt[i] = -1;
    
    int cj = 0, jp = 0;
    for(i=0;i<n;i++){
        for(int j = jobs[i].dead; j>0;j--){
            if(slt[j] == -1){
                slt[j] = i;
                cj++;
                jp += jobs[i].profit;
                break;
            }
        }
    }
    return jp;
}









