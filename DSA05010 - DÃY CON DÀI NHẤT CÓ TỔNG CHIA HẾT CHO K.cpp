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

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		vi a(n+1);
        FOR(i,1,n) 
        {
            cin >> a[i];
            a[i] %= k;
        }
        vector<vi> dp(n+1, vi(k+1, -1e9));
        dp[0][0] = 0;
        FOR(i,1,n)
        {
            FOR(j,0,k-1)
            {
                dp[i][j] = max(dp[i-1][j], dp[i-1][(j-a[i] + k*k) %k] + 1);
            }
            cout << endl;
        }
        cout<<dp[n][0]<<"\n";
	}
}