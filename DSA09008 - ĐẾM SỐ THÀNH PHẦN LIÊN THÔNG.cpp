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

int v, e, s, t;
vector<int> adj[1005];
bool visited[1005];

void init()
{
	memset(visited, false, 1005);
	FOR(i, 1, 1000) adj[i].clear();
	cin >> v >> e;
	int x, y;
	FOR(i, 1, e)
	{
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}

void DFS(int u)
{
	visited[u] = true;
	for(auto i : adj[u])
	{
		if(!visited[i])
		{
			DFS(i);
		}
	}
}

int solve()
{
	int res = 0;
	FOR(i, 1, v)
	{
		if(!visited[i])
		{
			res++;
			DFS(i);
		}
	}
	return res;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		init();
		cout << solve() << endl;
	}
} 

