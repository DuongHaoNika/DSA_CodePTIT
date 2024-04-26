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

int n, m, s;
vector<pii> adj[1005];
ll f[1005];

void DIJKSTRA(int u)
{
	priority_queue<pll, vector<pll>, greater<pll>> pq;
	FOR(i, 1, 1000) f[i] = INF;
	f[u] = 0;
	pq.push({f[u], u});
	while(!pq.empty())
	{
		pll p = pq.top();
		pq.pop();
		if(p.fi != f[p.se]) continue;
		for(auto it : adj[p.se])
		{
			if(f[it.fi] > f[p.se] + it.se) 
			{
				f[it.fi] = f[p.se] + it.se;
				pq.push({f[it.fi], it.fi});
			}
		}
	}
	FOR(i, 1, n) cout << f[i] << " ";
	cout << endl;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> m >> s;
		FOR(i, 1, n) adj[i].clear();
		int u, v, w;
		FOR(i, 1, m)
		{
			cin >> u >> v >> w;
			adj[u].pb({v, w});
			adj[v].pb({u, w});
		}
		DIJKSTRA(s);
	}
}