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

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int v, e; cin >> v >> e;
		vector<int> adj[1005];
		int x, y; 
		FOR(i, 1, e)
		{
			cin >> x >> y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		FOR(i, 1, v) sort(adj[i].begin(), adj[i].end());
		FOR(i, 1, v)
		{
			cout << i << ": ";
			FOR(j, 0, adj[i].sz - 1) cout << adj[i][j] << " ";
			cout << endl;
		}
	}
}