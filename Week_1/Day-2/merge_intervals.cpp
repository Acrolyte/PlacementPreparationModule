#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)

vector<vector<int>> mergeIntervals(vector<vector<int>> &inter)
{
    sort(inter.begin(),inter.end());
    vector<vector<int>> ans;
    int i=0,n=inter.size();
    
    for(;i<n;i++){
    	
    	if(ans.empty() || inter[i][0] > ans.back()[1]){
    		vector<int> v = {inter[i][0], inter[i][1]};
    		ans.push_back(v);
    	} else {
    		ans.back()[1] = max(ans.back()[1], inter[i][1]);
    	}
    }
    
    return ans;    
}

void solve(){
	ll n,c,t,x;
	cin>>n;
	vector<vector<int>> v;
	TC(n){
		cin>>x>>c;
		vector<int> vv;
		vv.pb(x);
		vv.pb(c);
		v.pb(vv);
	}
	// for(auto i: v){
	// 	cout<<i[0]<<' '<<i[1]<<'\n';
	// }
	vector<vector<int>> ans = mergeIntervals(v);
	for(auto i: ans){
		cout<<i[0]<<' '<<i[1]<<'\n';
	}
}

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    //int t;
    //cin>>t;
    //TC(t)
    solve();

	return 0;
}