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

int v, e, start;
vector<int> adj[1005];
bool visited[1005];

void init()
{
    cin >> v >> e >> start;
    memset(visited, false, sizeof(visited));
    F(i, 0, 1005) adj[i].clear();
    int x, y;
    FOR(i, 1, e)
    {
        cin >> x >> y;
        adj[x].pb(y);
    }
}

void DFS(int u)
{
    visited[u] = true;
    cout << u << " ";
    for(vi::iterator it = adj[u].begin(); it != adj[u].end(); it++)
    {
        if(!visited[*it]) DFS(*it);
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        init();
        DFS(start);
        cout << endl;
    }
}