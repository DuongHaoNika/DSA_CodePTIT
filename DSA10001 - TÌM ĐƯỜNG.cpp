#include <bits/stdc++.h>
using namespace std;
#define deb(...) 
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

int n, m, sx, sy, ex, ey, mark[505][505], a[505][505];

void BFS(int i, int j)
{
    queue<pii> q;
    q.push({i, j});
    mark[i][j] = 0;
    while(!q.empty())   
    {
        pii p = q.front();
        q.pop();
        int x = p.fi, y = p.se;
        if(mark[x][y] > 2) continue;
        FOR(yy, y + 1, m)
        {
            if(mark[x][yy] == 1e9 && a[x][yy] != 1)
            {
                mark[x][yy] = mark[x][y] + 1;
                q.push({x, yy});
            }
            else break;
        }
        FORD(yy, y - 1, 1)
        {
            if(mark[x][yy] == 1e9 && a[x][yy] != 1)
            {
                mark[x][yy] = mark[x][y] + 1;
                q.push({x, yy});
            }
            else break;
        }
        FOR(xx, x + 1, n)
        {
            if(mark[xx][y] == 1e9 && a[xx][y] != 1)
            {
                mark[xx][y] = mark[x][y] + 1;
                q.push({xx, y});
            }
            else break;
        }
        FORD(xx, x - 1, 1)
        {
            if(mark[xx][y] == 1e9 && a[xx][y] != 1)
            {
                mark[xx][y] = mark[x][y] + 1;
                q.push({xx, y});
            }
            else break;
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
        char c;
        FOR(i,1,n)
        {
            FOR(j,1,m)
            {
                mark[i][j] = 1e9;
                cin >> c;
                if(c == 'S') 
                {
                    sx = i, sy = j;
                    a[i][j] = 0;
                }
                else if(c == 'T')
                {
                    ex = i, ey = j;
                    a[i][j] = 0;
                }
                else if(c == '.') a[i][j] = 0;
                else if(c == '*') a[i][j] = 1;
            }
        }
        BFS(sx, sy);
        if(mark[ex][ey] <= 3) cout << "YES\n";
        else cout << "NO\n";
    }
}