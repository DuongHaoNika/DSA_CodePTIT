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

int main()
{
	faster();
	int t = 1; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vll v(n + 1);
		vll E(n + 1);
		FOR(i, 1, n) 
		{
			cin >> v[i];
			E[i] = v[i];
		}
		FOR(i, 2, n)
		{
			FOR(j, 1, i - 1)
			{
				if(v[j] < v[i]) E[i] = max(E[i], E[j] + v[i]);
			}
		}
		ll res = -INF;
		FOR(i, 1, n) res = max(res, E[i]);
		cout << res << endl;
	}
}