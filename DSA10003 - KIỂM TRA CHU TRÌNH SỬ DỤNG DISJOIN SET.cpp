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
#define endl '\n'
const ll INF = 4e18;
const int MOD = 1e9 + 7;

struct DSU 
{
	vi parent, size;
	int n;

	DSU(int _n)
	{
		n = _n;
		parent.resize(n + 1);
		size.assign(n + 1, 1);		
		FOR(i, 1, n) parent[i] = i;
	}

	int find(int u)
	{
		if(u == parent[u]) return u;
		return parent[u] = find(parent[u]);
	}

	int union_sets(int u, int v)
	{
		u = find(u);
		v = find(v);
		if(u == v) return 0;
		if(size[u] < size[v]) swap(u, v);
		size[u] += size[v];
		size[v] = 0;
		return parent[v] = u, 1;
	}
};

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		DSU dsu(n);
		set<int> s;
		bool check = false;
		FOR(i, 1, m)
		{
			int u, v; cin >> u >> v;
			if(!dsu.union_sets(u, v)) check = true;	
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}