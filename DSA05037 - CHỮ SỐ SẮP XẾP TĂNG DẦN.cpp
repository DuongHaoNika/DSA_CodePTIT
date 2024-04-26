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
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'
const ll INF = 4e18;
const int mod = 1e9 + 7;

ll dp[10][105];

int main()
{
	faster();
	int t; cin >> t;

	FOR(i, 0, 9) dp[i][1] = 1;
	FOR(i, 2, 100)
	{
		FOR(cur, 0, 9)
		{
			FOR(pre, 0, cur) dp[cur][i] = (dp[cur][i] + dp[pre][i - 1]) % mod;
		}
	}

	while(t--)
	{
		int n; cin >> n;
		ll res = 0;
		FOR(i, 0, 9)
		{
			res = (res + dp[i][n]) % mod;
		}
		cout << res << endl;
	}
}