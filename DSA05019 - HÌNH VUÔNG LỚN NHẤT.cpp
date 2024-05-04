#include <bits/stdc++.h>
using namespace std;
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

int a[505][505];
int n, m;

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        FOR(i, 1, n)
        {
            FOR(j, 1, m) 
            {
                cin >> a[i][j];
            }
        }
        int dp[505][505];
        memset(dp, 0, sizeof(dp));
        int res = 0;
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                if(a[i][j]) 
                {
                    dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
                    res = max(res, dp[i][j]);
                }
            }
        }    
        cout << res << endl;
    }
}