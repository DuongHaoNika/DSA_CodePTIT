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

vector<string> res;
bool used[105][105];
int a[105][105];
int n, m;

void Try(int i, int j, string s)
{
    if(i > n || i < 0 || j > m || j < 0) return;
    if(i == n && j == m) 
    {
        res.pb(s);
    }
    Try(i, j + 1, s + "R");
    Try(i + 1, j, s + "D");
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        cin >> n >> m;
        FOR(i, 1, n)
        {
            FOR(j, 1, m) cin >> a[i][j];
        }
        Try(1, 1, "");
        if(res.sz == 0) 
        {
            cout << -1 << endl;
            continue;
        }
        cout << res.sz << endl;
    }
}