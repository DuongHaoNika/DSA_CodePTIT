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

int main()
{
	faster();
	int n, m, t, u, v, w;
	cin >> n >> m;
	int f[105][105];
	FOR(i, 1, 100) 
	{
		FOR(j, 1, 100) f[i][j] = 1e9;
		f[i][i] = 0;
	}
	FOR(i, 1, m)
	{
		cin >> u >> v >> w;	
		f[u][v] = w;
		f[v][u] = w;
 	}
	FOR(k, 1, n)
	{
		FOR(i, 1, n)
		{
			FOR(j, 1, n)
			{
				if(f[i][j] > f[i][k] + f[k][j]) f[i][j] = f[i][k] + f[k][j];
			}
		}
	}
	cin >> t;
	while(t--)
	{
		cin >> u >> v;
		cout << f[u][v] << endl;
	}
}