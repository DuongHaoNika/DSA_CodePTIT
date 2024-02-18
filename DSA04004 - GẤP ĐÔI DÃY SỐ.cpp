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

ll a[30];
ll k;

ll findK(int n)
{
    ll mid = (a[n] + 1) >> 1;
    if (mid == k)
    {
        ll cnt = 0;
        ll res = 1;
        while(res < k)
        {
            res *= 2;
            cnt++;
        }
        return (1 + cnt);
    }
    else if(mid > k)
    {
        return findK(n - 1);
    }
    else
    {
        k -= mid;
        return findK(n - 1);
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    a[0] = 0;
    a[1] = 1;
    FOR(i, 2, 50) a[i] = 2 * a[i - 1] + 1;
    while (t--)
    {
        ll n;
        cin >> n >> k;
        //cout << a[n] << endl;
        cout << findK(n) << endl;
    }
}