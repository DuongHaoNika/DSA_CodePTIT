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
const ll INF = 4e18;
const int mod = 1e9 + 7;

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n;
		ll k;
		cin >> n >> k;
		ll a[n + 5];
		FOR(i, 1, n) cin >> a[i];
		ll sumA = 0;
		int l = 1, r = 1;
		sumA += a[l];
		bool check = false;
		while(r <= n && l <= r)
		{
			if(sumA == k) 
			{
				check = true;
				break;
			}
			else if(sumA < k)
			{
				r++;
				if(r <= n) sumA += a[r];
			}
			else 
			{
				sumA -= a[l++];
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}