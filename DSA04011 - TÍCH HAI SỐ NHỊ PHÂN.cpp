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

ll BiToDec(string s)
{
    ll res = 0;
    FOR(i, 0, s.sz - 1)
    {
        res = res * 2 + (s[i] - '0');
    }
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string n, m;
        cin >> n >> m;
        cout << BiToDec(n) * BiToDec(m) << endl;
    }
}