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

int n;
vi v;
vector<vi> res;
int a[50];
ll sum = 0;

bool cmp(int a, int b)
{
    return a > b;
}

bool primeCheck(int n)
{
    if (n == 2 || n == 3)
        return true;
    if (n < 3 || n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        sum += j * a[i];
        if (j == 1)
            v.pb(a[i]);
        if (primeCheck(sum) && j == 1)
        {
            res.pb(v);
        }
        if (i < n - 1)
            Try(i + 1);
        if (j == 1)
            v.pop_back();
        sum -= j * a[i];
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
        res.clear();
        FOR(i, 0, n - 1)
        cin >> a[i];
        sort(a, a + n, cmp);
        Try(0);
        FOR(i, 0, res.sz - 1)
        {
            FOR(j, 0, res[i].sz - 1) cout << res[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}