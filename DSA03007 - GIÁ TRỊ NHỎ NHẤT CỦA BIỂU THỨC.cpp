#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define endl '\n'

bool cmp(ll a, ll b)
{
	return a > b;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll a[n + 5];
		ll b[n + 5];
		FOR(i, 0, n - 1) cin >> a[i];
		FOR(i, 0, n - 1) cin >> b[i];
		sort(a, a + n);
		sort(b, b + n, cmp);
		ll res = 0;
		FOR(i, 0, n - 1) res += a[i]*b[i];
		cout << res << endl;
	}
}