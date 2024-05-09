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
		int n, m; cin >> n >> m;
		vi adj[n + 1];
		FOR(i,1,n) adj[i].clear();
		FOR(i,1,m)
		{
			int u, v; cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		bool check = true;
		FOR(i,1,n)
		{
			for(int u : adj[i])
			{
				if(adj[u].size() != adj[i].size())
				{
					check = false;
					break;
				}
			}
			if(!check) break;
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}