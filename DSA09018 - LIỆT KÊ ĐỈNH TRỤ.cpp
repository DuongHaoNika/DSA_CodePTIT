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

void init()
{
    FOR(i, 1, v) adj[i].clear();
    memset(used, false, sizeof(used));
    cin >> v >> e;
    int x, y; 
    FOR(i, 1, e)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
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

void KiemTra()
{
    FOR(i, 1, v)
    {
        memset(used, false, sizeof(used));
        used[i] = true;
        int cnt = 0;
        FOR(j, 1, v)
        {
            if(!used[j])
            {
                DFS(j);
                cnt++;
            }
        }
        if(cnt > lt) cout << i << " ";
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
        KiemTra();
        cout << endl;
    }
}