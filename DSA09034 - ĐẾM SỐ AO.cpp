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

char s[101][101];
int n, m;
int cnt = 0;
bool vs[101][101];

void BFS(int i, int j)
{
	if(s[i][j] != 'W' || vs[i][j]) return;
	queue<pii> q;
	q.push(mp(i, j));
	vs[i][j] = 1;
	cnt++;
	//cout << i << " " << j << endl;
	while(!q.empty())
	{
		int x = q.front().fi;
		int y = q.front().se;
		q.pop();
		FOR(k, 0, 7)
		{
			int xx = x + dx[k], yy = y + dy[k];
			if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && !vs[xx][yy] && s[xx][yy] == 'W')
			{
				vs[xx][yy] = 1;
				q.push({xx, yy});
			}
		}
	}
}

int main()
{
	faster();
	cin >> n >> m;
	memset(vs, 0, sizeof(vs));
	FOR(i, 1, n)
	{
		FOR(j, 1, m) cin >> s[i][j];
	}
	FOR(i, 1, n)
	{
		FOR(j, 1, m) BFS(i, j);
	}
	cout << cnt;
}