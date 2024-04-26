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

int v, e;
vi adj[105];
bool vs[105];

bool DFS(int u, int cnt = 1)
{
	if(cnt == v) return 1;
	vs[u] = true;
	bool res = false;
	for(auto i : adj[u])
	{
		if(!vs[i]) res |= DFS(i, cnt + 1);
	}
	vs[u] = false;
	return res;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{	
		cin >> v >> e;
		int x, y;
		FOR(i, 1, 100) adj[i].clear();
		FOR(i, 1, e)
		{
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		bool ans = false;
		FOR(i, 1, v)
		{
			FOR(j, 1, 100) vs[j] = false;
			if(DFS(i)) 
			{
				ans = true;
				break;
			}
		}
		cout << ans << endl;
	}
}