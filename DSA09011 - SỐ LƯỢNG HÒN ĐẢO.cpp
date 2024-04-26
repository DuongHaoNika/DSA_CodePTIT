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

const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int a[505][505];
int n, m;
int cnt = 0;
bool vis[505][505];

void BFS(int x, int y)
{
	if(vis[x][y] || a[x][y] == 0) return;
	cnt++;
	queue<pii> q;
	q.push({x, y});
	vis[x][y] = 1;
	while(!q.empty())
	{
		pii p = q.front();
		q.pop();
		FOR(i, 0, 7)
		{
			int xx = p.fi + dx[i];
			int yy = p.se + dy[i];
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] == 1 && !vis[xx][yy])
			{
				vis[xx][yy] = 1;
				q.push({xx, yy});
			}
		}
	}
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
		cin >> n >> m;
		FOR(i, 1, n)
		{
			FOR(j, 1, m) cin >> a[i][j];
		}
		cnt = 0;
		memset(vis, 0, sizeof(vis));
		FOR(i, 1, n)
		{
			FOR(j, 1, m)
			{
				BFS(i, j);
			}
		}
		cout << cnt << endl;
    }
}