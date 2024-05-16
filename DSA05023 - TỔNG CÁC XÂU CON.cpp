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

int dem(ll n)
{
    int res = 0;
    while(n)
    {
        res++;
        n /= 10;
    }
    return res;
}

ll solve(ll n, int idx, ll n2)
{
    int m = n - idx + 1;
    int cnt = 0;
    while(n2)
    {
        cnt++;
        int k = n2 % 10;
        if(cnt == m) return k;
        n2 /= 10;
    }
    return -1;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        int m = dem(n);
        ll dp[m + 1][m + 1];
        ll res = 0;
        FOR(i,1,m)
        {
            dp[i][i] = solve(m, i, n);
            res += dp[i][i];
            FOR(j,i + 1,m)
            {
                dp[i][j] = dp[i][j - 1] * 10 + solve(m, j, n);
                res += dp[i][j];
            }
        }
        cout << res << endl;
    }
}