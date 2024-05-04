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

vi adj[200005];
ll ans[200005] = {};
ll size[200005] = {};

void DFS(int u)
{
	size[u] = 1;
	for(int i : adj[u])
	{
		DFS(i);
		size[u] += size[i];
		ans[u] += ans[i];
	}
	ans[u] += size[u];
}

int main()
{
	int n; cin >> n;
	FOR(i, 2, n)
	{
		int x; cin >> x;
		adj[x].pb(i);
	}
	DFS(1);
	FOR(i, 1, n)
	{
		cout << ans[i] << " ";
	}
}