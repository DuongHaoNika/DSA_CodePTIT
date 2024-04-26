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
const ll mod = 1e9 + 7;

ll n;

ll LT(ll k)
{
    if(k == 0) return 1;
    else if(k == 1) return n;
    ll tmp = LT(k/2);
    if(k & 1) return (((tmp % mod) * (tmp % mod)) % mod * n) % mod;
    else return ((tmp % mod) * (tmp % mod)) % mod;
}

int main() 
{
    faster();
	int t; cin >> t;
	while (t--) 
    {
        ll k; cin >> n >> k;
        cout << LT(k) << endl;
	}
}