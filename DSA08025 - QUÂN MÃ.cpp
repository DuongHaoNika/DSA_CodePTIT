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
const int mod = 1e9 + 7;

int dx[] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int s, t;

void BFS(int i, int j)
{
	queue<pii> q;
	int vs[9][9];
	memset(vs, 0, sizeof(vs));
	q.push({i, j});
	vs[i][j] = 1;
	while(!q.empty())
	{
		pii p = q.front();
		q.pop();
		int x = p.fi, y = p.se;
		FOR(k, 0, 7)
		{
			int xx = x + dx[k], yy = y + dy[k];
			if(xx >= 1 && xx <= 8 && yy >= 1 && yy <= 8 && !vs[xx][yy])
			{
				vs[xx][yy] = vs[x][y] + 1;
				q.push({xx, yy});
			}
		}
	}
	cout << vs[s][t] - 1 << endl;
}

int main()
{
	faster();
	int tc; cin >> tc;
	while(tc--)
	{
		string A, B; cin >> A >> B;
		int a = A[0] - 'a' + 1, b = A[1] - '0';
		s = B[0] - 'a' + 1, t = B[1] - '0';
		BFS(a, b);
	}
}