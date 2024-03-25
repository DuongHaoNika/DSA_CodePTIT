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

int solve(int n)
{
	vi dp(n + 1, 1e9);
	dp[0] = 0;
	FOR(i, 1, n)
	{
		FORD(j, sqrt(i), 1)
		{
			dp[i] = min(dp[i], dp[i - j * j] + 1);
		}
	}
	return dp[n];
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << solve(n) << endl;
	}
}
