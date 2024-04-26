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

int v, e;
vi adj[1005];
bool used[1005];
int lt;
vector<pii> vp;

void init()
{
    vp.clear();
    FOR(i, 1, v) adj[i].clear();
    memset(used, false, sizeof(used));
    cin >> v >> e;
    int x, y; 
    FOR(i, 1, e)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
        vp.pb(mp(x, y));
    }
}

void DFS(int u)
{
    used[u] = true;
    for(vector<int>::iterator it = adj[u].begin(); it != adj[u].end(); ++it)
    {
        if(!used[*it])
        {
            DFS(*it);
        }
    }
}

void DFS2(int u, int s, int t)
{
    used[u] = true;
    for(vi::iterator it = adj[u].begin(); it != adj[u].end(); it++)
    {
        if(!used[*it])
        {
            if((s == u && t == *it) || (s == *it && t == u)) continue;
            DFS2(*it, s, t);
        }
    }
}

void CheckCanhCau()
{
    for(vector<pii>::iterator it = vp.begin(); it != vp.end(); it++)
    {
        int x = it->fi, y = it->se;
        memset(used, false, sizeof(used));
        int cnt = 0;
        FOR(i, 1, v)
        {
            if(!used[i])
            {
                cnt++;
                DFS2(i, x, y);
            }
        }
        if(cnt > lt)
        {
            if(x < y) cout << x << " " << y << " ";
            else cout << y << " " << x << " ";
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        init();
        lt = 0;
        FOR(i, 1, v)
        {
            if(!used[i])
            {
                DFS(i);
                lt++;
            }
        }
        CheckCanhCau();
        cout << endl;
    }
}