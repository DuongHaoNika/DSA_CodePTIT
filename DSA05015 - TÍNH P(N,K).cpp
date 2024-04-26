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

ll P[1005][1005];

ll Pow(int n, int k)
{
	if(k == 1) return n;
	if(k > n) return 0;
	if(P[n][k] != -1) return P[n][k];
	ll res = (k * Pow(n - 1, k - 1) + Pow(n - 1, k)) % mod;
	return P[n][k] = res;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		memset(P, -1, sizeof(P));
		int n, k; cin >> n >> k;
		cout << Pow(n, k) << endl;
	}
}