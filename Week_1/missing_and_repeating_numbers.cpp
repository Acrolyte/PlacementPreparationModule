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
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
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

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    // int f[n+1] = {0};
    // for(auto it: arr)
    //     f[it]++;
    
    // for(int i=0;i<=n;i++){
    //     if(f[i] == 2) p.second = i;
    //     if(f[i] == 0) p.first = i;
    // }
    
    //Optimal approach - XOR method
    int x1 = 0, x = 0, y=0;
    REP(i,n) x1 ^= arr[i];
    REPN(i,n) x1 ^= i;

    int set_bit = x1 & ~(x1 - 1);

    REP(i,n){
        if(arr[i] & set_bit)
            x ^= arr[i];
        else y ^= arr[i];
    }

    REPN(i,n){
        if(i & set_bit)
            x ^= i;
        else y ^= i;
    }

    int xcount = 0;
    REP(i,n)
        if(arr[i] == x) xcount++;

    if(xcount == 0)
        return {y,x};

    return {x,y};
}


void solve(){
    ll n,c,t,x;
    cin>>n;
    vi v;
    REP(i,n){cin>>x; v.pb(x);}
    pii p = missingAndRepeating(v,n);
    cout<<p.fi<<' '<<p.se;
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

