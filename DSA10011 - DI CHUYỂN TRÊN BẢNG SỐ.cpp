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

int n,m;
ll a[505][505];
ll f[505][505];
const int dx[] = {-1,0,0,1};
const int dy[] = {0,-1,1,0};

struct Data
{
    int x,y;
    ll val;
    friend bool operator < (const Data a,const Data b)
    {
        return a.val > b.val;
    }
};

void DIJKSTRA(int x, int y)
{
    priority_queue<Data> pq;
    f[x][y] = a[x][y];
    pq.push({x,y,a[x][y]});
    while(!pq.empty())
    {
        int i = pq.top().x, j = pq.top().y;
        ll val = pq.top().val;
        pq.pop();
        if(val != f[i][j]) return;
        FOR(u,0,3)
        {
            int xx = i + dx[u];
            int yy = j + dy[u];
            if(xx >= 1 && xx <= n && yy >= 1 && yy <= m && f[xx][yy] > val + a[xx][yy])
            {
                f[xx][yy] = val + a[xx][yy];
                pq.push({xx,yy,f[xx][yy]});
            }
        }
    }
    cout << f[n][m] << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        FOR(i,1,n)
        {
            FOR(j,1,m) 
            {
                cin >> a[i][j];
                f[i][j] = INF;
            }
        }
        DIJKSTRA(1,1);
    }
}