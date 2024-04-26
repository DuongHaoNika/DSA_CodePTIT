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
int n; 

void Try(int i, int j, string s)
{
    if(i > n || i < 0 || j > n || j < 0) return;
    used[i][j] = true;
    if(i == n && j == n) 
    {
        res.pb(s);
    }

    if(!used[i][j + 1] && a[i][j + 1] == 1)
    {
        Try(i, j + 1, s + "R");
    }
    if(!used[i + 1][j] && a[i + 1][j] == 1)
    {
        Try(i + 1, j, s + "D");
    }
    if(!used[i - 1][j] && a[i - 1][j] == 1)
    {
        Try(i - 1, j, s + "U");
    }
    if(!used[i][j - 1] && a[i][j - 1] == 1)
    {
        Try(i, j - 1, s + "L");
    }
    used[i][j] = false;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        FOR(i, 1, 15)
        {
            FOR(j, 1, 15) used[i][j] = false;
        }
        cin >> n;
        FOR(i, 1, n)
        {
            FOR(j, 1, n) cin >> a[i][j];
        }
        if(a[1][1] == 1 && a[n][n]) Try(1, 1, "");
        if(res.sz == 0) 
        {
            cout << -1 << endl;
            continue;
        }
        sort(res.begin(), res.end());
        FOR(i, 0, res.sz - 1)
        {
            FOR(j, 0, res[i].sz - 1) cout << res[i][j];
            cout << " ";
        }
        cout << endl;
    }
}