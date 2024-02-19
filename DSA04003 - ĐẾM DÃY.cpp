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
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

const ll mod = 123456789;

ll Pow(ll k)
{
	if(k == 1) return 2;
	else if(k == 0) return 1;
	else
	{
		ll res = Pow(k / 2);
		if(k & 1) return (res * res) % mod * 2 % mod;
		else return (res * res) % mod;
	}
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		cout << Pow(n - 1) << endl;
	}
}