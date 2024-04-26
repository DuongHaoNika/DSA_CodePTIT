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
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m + 5], b[n + 5];
        FOR(i, 0, m - 1)
        cin >> a[i];
        FOR(i, 0, n - 1)
        cin >> b[i];
        map<int, int> mp;
        FOR(i, 0, m - 1)
        {
            FOR(j, 0, n - 1)
            mp[i + j] += a[i] * b[j];
        }
        FOR(i, 0, m + n - 2)
            cout << mp[i] << " ";
        cout << endl;
    }
}