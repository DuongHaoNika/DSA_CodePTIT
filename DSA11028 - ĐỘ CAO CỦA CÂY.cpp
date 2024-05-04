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

int n; 
vi adj[100005];
int res = 0;

void DFS(int u, int cnt)
{
    res = max(res, cnt);
    for(auto x : adj[u])
    {
        DFS(x, cnt + 1);
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int x, y;
        res = 0;
        FOR(i, 1, 100000) adj[i].clear();
        FOR(i, 2, n)
        {
            cin >> x >> y;
            adj[x].pb(y);
        }
        DFS(1, 0);
        cout << res << endl;
    }
}
