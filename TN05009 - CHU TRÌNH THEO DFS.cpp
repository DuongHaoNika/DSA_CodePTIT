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

int v, e;
vi adj[1005];
bool vs[1005];
vi path;
bool check = false;

void DFS(int u, int cnt = 1)
{
	path.pb(u);
	vs[u] = true;
	for(int i : adj[u])
	{
		if(i == 1 && cnt > 2 && !check)
		{
			path.pb(i);
			check = true;
			FOR(k, 0, path.sz - 1) cout << path[k] << " ";
		}
		if(!vs[i]) 
		{
			DFS(i, cnt + 1);
		}
	}
	path.pop_back();
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> v >> e;
		int x, y;
		FOR(i, 1, 1000) adj[i].clear();
		memset(vs, 0, sizeof(vs));
		path.clear();
		check = false;
		FOR(i, 1, e)
		{
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		FOR(i, 1, v) sort(ALL(adj[i]));
		DFS(1);
		if(!check) cout << "NO";
		cout << endl;
	}
}