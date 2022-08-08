#include <bits/stdc++.h>
using namespace std;
struct meet{
    int start;
    int end;
    int pos;
};
bool static comp(struct meet a, meet b){
    if(a.end < b.end) return true;
    else if(a.end > b.end) return false;
    else if(a.pos < b.pos) return true;
    return false;
}
vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    int n = s.size();
    struct meet m[n];
    for(int i=0;i<n;i++){
        m[i].start = s[i], m[i].end = e[i], m[i].pos = i+1;
    }
    sort(m,m+n,comp);
    vector<int> ans;
    int lmt = m[0].end;
    ans.push_back(m[0].pos);
    for(int i=1;i<n;i++){
        if(m[i].start > lmt){
            lmt = m[i].end;
            ans.push_back(m[i].pos);
        }
    }
    return ans;
}