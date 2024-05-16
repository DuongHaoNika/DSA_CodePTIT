#include <bits/stdc++.h>
using namespace std;
#define deb(...) 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define ALL(x) x.begin(), x.end()
#define NALL(x) x.begin() + 1, x.end()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'
const ll INF = 4e18;
const int MOD = 1e9 + 7;

int c[16][16], n, dp[(1 << 15) + 1][16];

int calc(int pre, int u)
{
    if(pre == (1 << n) - 1) return 0;
    if(dp[pre][u] != -1) return dp[pre][u];
    int res = 1e9;
    int cur = 1 << n;
    FOR(i,1,n)
    {
        cur = cur >> 1;
        if((pre & cur) != 0) continue;
        res = min(res, c[u][i] + calc(pre|cur, i));
    }
    dp[pre][u] = res;
    return res;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
        FOR(i,1,n) FOR(j,1,n) cin >> c[i][j];
        int ans = 1e9;
        memset(dp, -1, sizeof(dp));
        FOR(i,1,n) ans = min(ans, calc(0,i));
        cout << ans << endl;
	}
}