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

int dp[1005][1005];

int main()
{
	faster();
	int t = 1; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int l = s.sz;
		memset(dp, 0, sizeof(dp));
		FOR(i, 0, l - 1) dp[i][i] = 1;
		int res = 1;
		FOR(u, 1, l - 1)
		{
			FOR(i, 0, l - u - 1)
			{
				int j = i + u;
				if(s[i] == s[j] && u == 1) dp[i][j] = 1;
				else if(s[i] == s[j] && u > 1) dp[i][j] = dp[i + 1][j - 1];
				if(dp[i][j]) res = max(res, j - i + 1);
			}
		}
		cout << res << endl;
	}
}