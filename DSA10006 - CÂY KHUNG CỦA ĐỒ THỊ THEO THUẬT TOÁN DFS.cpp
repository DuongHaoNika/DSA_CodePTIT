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

int v, e, u;
vi adj[1005];
vector<pii> res;
bool vs[1005];
vi dem;

void DFS(int i, int cnt = 1)
{
	vs[i] = true;
	for(int x : adj[i])
	{
		if(!vs[x]) 
		{
			res.pb({i, x});
			DFS(x, cnt + 1);
		}
	}
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{	
		cin >> v >> e >> u;
		int x, y;
		FOR(i, 1, 1000) adj[i].clear();
		memset(vs, 0, sizeof(vs));
		res.clear();
		FOR(i, 1, e)
		{
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		DFS(u);
		if(res.sz != v - 1) cout << -1 << endl;
		else
		{
			FOR(i, 0, res.sz - 1) cout << res[i].fi << " " << res[i].se << endl;
		}
	}
}