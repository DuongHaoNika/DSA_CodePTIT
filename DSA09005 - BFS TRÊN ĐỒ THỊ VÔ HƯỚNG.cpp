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
        adj[y].pb(x);
    }
}

void BFS(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        cout << s << " ";
        FOR(i, 0, adj[s].sz - 1)
        {
            if(!visited[adj[s][i]])
            {
                q.push(adj[s][i]);
                visited[adj[s][i]] = true;
            }
        }
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
        BFS(start);
        cout << endl;
    }
}