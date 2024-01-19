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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

const int mod = 1e9 + 7;

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

ll LT(ll n, ll k)
{
    if (k == 0) return 1;
    ll x = LT(n, k / 2);
    if (k % 2 == 0) return ((x % mod) * (x % mod)) % mod;
    return (((n % mod) * (x % mod)) % mod * (x % mod)) % mod;
}

int main()
{
    faster();
    ll a, b; 
    cin >> a >> b;
    while(true)
    {
        if(a == 0 && b == 0) break;
        cout << LT(a, b) << endl;
        cin >> a >> b;
    }
}