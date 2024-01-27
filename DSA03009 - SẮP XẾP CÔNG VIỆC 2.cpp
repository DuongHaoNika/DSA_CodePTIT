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

signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("thu.inp","r",stdin);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int tc; cin>>tc;
    while (tc--)
    {
        int n; cin>>n;
        vector<pii> a(n);
        int idx;
        for (auto &it : a)
            cin>>idx>>it.first>>it.second;
        sort(ALL(a), [](pii a,pii b)
        {
            return a.second > b.second;
        });
        set<int> mark;
        FOR(i,1,1000) mark.insert(i);
        int cnt = 0, ans = 0;
        for (auto it : a)
        {
            auto pos = mark.upper_bound(it.first);
            if (pos == mark.begin()) continue;
            pos = prev(pos);
            cnt++;
            ans += it.second;
            mark.erase(pos);
        }
        cout<<cnt<<" "<<ans<<"\n";
    }
}
