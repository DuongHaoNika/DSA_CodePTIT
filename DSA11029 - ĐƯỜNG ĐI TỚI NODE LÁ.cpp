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

vi adj[1005], leaf;
int par[1005];

void DFS(int u)
{
    if(adj[u].size() == 1 && par[u] != -1) leaf.pb(u);
    for(int v : adj[u])
    {
        if(v != par[u])
        {
            par[v] = u;
            DFS(v);
        }
    }
}

void trace(int u)
{
    vi res;
    while(u != -1)
    {
        res.pb(u);
        u = par[u];
    }
    reverse(ALL(res));
    for(int i : res) cout << i << " ";
    cout << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        FOR(i,1,n) 
        {
            adj[i].clear();
            par[i] = 0;
        }
        FOR(i,1,n-1)
        {
            int x,y; cin >> x >> y;
            adj[x].pb(y);
            adj[y].pb(x);
        }
        par[1] = -1;
        leaf.clear();
        DFS(1);
        sort(ALL(leaf));
        for(int u : leaf) trace(u);
    }
}