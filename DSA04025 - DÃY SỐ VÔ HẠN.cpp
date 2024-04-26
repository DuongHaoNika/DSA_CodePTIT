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

const int MOD = 1e9 + 7;

unordered_map<ll, ll> um;

ll Fibonacci(ll n)
{
    if (um[n])
        return um[n];
    ll k = n >> 1;
    ll a = Fibonacci(k);
    ll b = Fibonacci(k - 1);
    if (n & 1)
    {
        return um[n] = (a * Fibonacci(k + 1) + a * b) % MOD;
    }
    else
    {
        return um[n] = (a * a + b * b) % MOD;
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        um[0] = 1;
        um[1] = 1;
        cout << Fibonacci(n - 1) << endl;
    }
}