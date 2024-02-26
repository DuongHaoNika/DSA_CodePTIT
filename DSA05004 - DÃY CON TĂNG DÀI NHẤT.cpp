#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
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
#define endl '\n'
#define maxn 100005

void IO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    // IO();
    faster();
    int n;
    cin >> n;
    int a[n + 5];
    FOR(i, 0, n - 1)
        cin >> a[i];
    vi v;
    v.pb(a[0]);
    FOR(i, 1, n - 1)
    {
        if (v.back() < a[i])
            v.pb(a[i]);
        else
        {
            int l = 0, r = v.sz - 1;
            int idx = r;
            while (l <= r)
            {
                int m = (l + r) >> 1;
                if (v[m] >= a[i])
                {
                    r = m - 1;
                    idx = m;
                }
                else
                    l = m + 1;
            }
            v[idx] = a[i];
        }
    }
    cout << v.sz;
}