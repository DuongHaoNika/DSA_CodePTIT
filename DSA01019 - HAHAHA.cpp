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
#define PI 3.141592653589793238
#define endl '\n'

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vector<string> v;
vector<vector<string> > res;
int n, k;
int cnt = 0;

void Try(int i)
{
    int fi = (i == 0) ? 1 : 0;
    FOR(j, fi, 1)
    {
        if(j == 0) v.pb("H");
        else v.pb("A");
        if (v.sz == n - 2)
        {
            res.pb(v);
        }
        else if (v.sz < n - 2)
        {
            Try(j);
        }
        v.pop_back();
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n == 2)
            cout << "HA\n";
        else
        {
            Try(0);
            sort(res.begin(), res.end());
            FOR(i, 0, res.sz - 1)
            {
                cout << "H";
                FOR(j, 0, res[i].sz - 1) cout << res[i][j];
                cout << "A\n";
            }
            res.clear();
        }
    }
}