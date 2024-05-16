// Muon code cua ban Ngo Duc Son :3

#ifdef DS
    #include "debug.h"
#else 
    #include<bits/stdc++.h>
    #define deb(...) 
#endif
using namespace std;
#define FOR(i,a,b) for (int i=a;i<=b;i++)
#define FOD(i,a,b) for (int i=a;i>=b;i--)
#define ALL(x) x.begin(),x.end()
#define NALL(x) x.begin()+1,x.end()
#define TIME "Time elapsed : "<<(double)clock()/1000<<" s"
#define int long long
#define vi vector<int>
#define pii pair<int,int>
const int MOD=1e9+7,INF=4e18;
#define maxn 
vi nt;
void init()
{
    auto check = [](int n) -> bool
    {
        if (n < 2) return false;
        FOR(i,2,sqrt(n))
            if (n % i == 0) return false;
        return true;
    };
    FOR(i,1,200)
        if (check(i)) nt.push_back(i);
}
int n,p,s;
vector<vi> ans;
vi cur;
void Try(int idx,int sum,int count)
{
    if (count == n)
    {
        if (sum == 0)
            ans.push_back(cur);
        return;
    }
    if (sum < nt[idx]) return;
    cur.push_back(nt[idx]);
    Try(idx+1,sum-nt[idx],count+1);
    cur.pop_back();
    Try(idx+1,sum,count);
}
signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("thu.inp","r",stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    init();
    int tc; cin>>tc;
    while (tc--)
    {
        ans.clear();
        cur.clear();
        cin>>n>>p>>s;	
        int first_idx = upper_bound(ALL(nt), p) - nt.begin();   
        Try(first_idx, s, 0);
        cout<<ans.size()<<"\n";
        for (auto it : ans)
        {
            for (auto it2 : it) cout<<it2<<" ";
            cout<<"\n";
        }
    }
}