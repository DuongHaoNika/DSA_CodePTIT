#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define pii pair<int, int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

bool cmp(pii a, pii b)
{
    return a.fi < b.fi;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pii> a;
        F(i, 0, n)
        {
            int x;
            cin >> x;
            a.pb(mp(x, i));
        }
        sort(all(a), cmp);
        int res = -1e9;
        int last = a[0].se;
        FOR(i, 1, n - 1)
        {
            res = max(res, a[i].se - last);
            last = min(last, a[i].se);
        }
        cout << res << endl;
    }
}