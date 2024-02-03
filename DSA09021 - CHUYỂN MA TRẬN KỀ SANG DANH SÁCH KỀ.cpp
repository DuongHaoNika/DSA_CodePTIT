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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int n;
    cin >> n;
    int x;
    vi adj[1005];
    FOR(i, 1, n)
    {
        FOR(j, 1, n)
        {
            cin >> x;
            if(x == 1) adj[i].pb(j);
        }
    }
    FOR(i, 1, n)
    {
        sort(adj[i].begin(), adj[i].end());
        FOR(j, 0, adj[i].size() - 1)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}