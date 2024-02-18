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

const int mod = 1e9 + 7;
int n;

struct matrix
{
    ll a[15][15];
    matrix operator*(matrix b)
    {
        matrix res, tmp = *this;
        FOR(i, 0, n - 1)
        {
            FOR(j, 0, n - 1)
            {
                res.a[i][j] = 0;
                FOR(k, 0, n - 1)
                {
                    res.a[i][j] += (tmp.a[i][k] * b.a[k][j]) % mod;
                    res.a[i][j] %= mod;
                }
            }
        }
        return res;
    }
};

inline matrix Pow(matrix m, int k)
{
    if (k == 1)
        return m;
    matrix res = Pow(m, k >> 1);
    res = res * res;
    if (k & 1)
        res = res * m;
    return res;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> n >> k;
        matrix m;
        FOR(i, 0, n - 1)
        {
            FOR(j, 0, n - 1)
            cin >> m.a[i][j];
        }
        m = Pow(m, k);
        ll res = 0;
        FOR(i, 0, n - 1)
        {
            res += m.a[i][n - 1] % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}