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

int dp[105][105][105] = {};

int main()
{
	faster(); 
    int t; cin >> t;
    while(t--)
    {
        int n, m, k; cin >> n >> m >> k;
		memset(dp, 0, sizeof(dp));
		string x, y, z; cin >> x >> y >> z;
		FOR(i, 1, n)
		{
			FOR(j, 1, m)
			{
				FOR(u, 1, k)
				{
					if(x[i - 1] == y[j - 1] && y[j - 1] == z[u - 1])
					{
						dp[i][j][u] = dp[i - 1][j - 1][u - 1] + 1;
					}
					else  
					{
						dp[i][j][u] = max(dp[i - 1][j][u], max(dp[i][j - 1][u], dp[i][j][u - 1]));
					}
				}
			}
		}
		cout << dp[n][m][k] << endl;
    }
}