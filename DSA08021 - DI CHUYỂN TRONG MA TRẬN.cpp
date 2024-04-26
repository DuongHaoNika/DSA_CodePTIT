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

int n, m;
int M[1005][1005] = {};
int a[1005][1005] = {};

int BFS()
{
	pii p;
	queue<pii> q;
	memset(M, 0, sizeof(M));
	M[1][1] = 0;
	q.push({1, 1});
	while(q.sz)
	{
		p = q.front();
		q.pop();
		if(p.fi + a[p.fi][p.se] <= m && !M[p.fi + a[p.fi][p.se]][p.se])
		{
			if(p.fi + a[p.fi][p.se] == m && p.se == n) return M[p.fi][p.se] + 1;
			M[p.fi + a[p.fi][p.se]][p.se] = M[p.fi][p.se] + 1;
			q.push({p.fi + a[p.fi][p.se], p.se});
		}
		if(p.se + a[p.fi][p.se] <= n && !M[p.fi][p.se + a[p.fi][p.se]])
		{
			if(p.fi == m && p.se + a[p.fi][p.se] == n) return M[p.fi][p.se] + 1;
			M[p.fi][p.se + a[p.fi][p.se]] = M[p.fi][p.se] + 1;
			q.push({p.fi, p.se + a[p.fi][p.se]});
		}
	}
	return -1;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		cin >> m >> n;
		FOR(i, 1, m)
		{
			FOR(j, 1, n) cin >> a[i][j];
		}
		cout << BFS() << endl;
	}
}