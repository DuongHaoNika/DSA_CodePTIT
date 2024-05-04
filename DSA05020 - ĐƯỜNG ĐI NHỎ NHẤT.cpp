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

ll dp[1005][1005];
const int dx[] = {0, 1, 1};
const int dy[] = {1, 0, 1};

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        ll a[n + 1][m + 1];
        FOR(i, 1, n)
        {
            FOR(j, 1, m) 
            {
                cin >> a[i][j];
                dp[i][j] = INF;
            }
        }
        dp[1][1] = a[1][1];
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                FOR(u, 0, 3)
                {
                    int xx = i + dx[u], yy = j + dy[u];
                    if(xx >= 1 && xx <= n && yy >= 1 && yy <= m)
                    {
                        if(dp[i][j] + a[xx][yy] < dp[xx][yy])
                        {
                            dp[xx][yy] = dp[i][j] + a[xx][yy];
                        }
                    }
                }
            }
        }
        cout << dp[n][m] << endl;
    }
}