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

ll a[1000005], b[1000005];

inline int findDif(int l, int r)
{
    int res = -1, mid;
    while (l <= r)
    {
        mid = (l + r) >> 1;
        if (a[mid] != b[mid])
        {
            res = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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
        int n;
        cin >> n;
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, n - 1) cin >> b[i];
        int res = findDif(1, n - 1);
        if(res != -1) cout << res;
        else cout << n;
        cout << endl;
    }
}