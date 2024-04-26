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
#define ALL(x) x.begin(), x.end()
#define NALL(x) x.begin() + 1, x.end()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define endl '\n'
const ll INF = 4e18;
const int mod = 1e9 + 7;

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n + 5];
		FOR(i, 1, n) cin >> a[i];
		a[0] = -1e9;
		vi r(n + 1);
		stack<int> s;
		FORD(i, n, 1)
		{
			while(!s.empty() && a[i] >= a[s.top()]) s.pop();
			if(s.sz) r[i] = s.top();
			else r[i] = 0;
			s.push(i);
		}
		s = stack<int>();
		vi rl(n + 1);
		FORD(i, n, 1)
		{
			while(!s.empty() && a[i] <= a[s.top()]) s.pop();
			if(s.sz) rl[i] = s.top();
			else rl[i] = 0;
			s.push(i);
		}
		FOR(i, 1, n) 
		{
			if(r[i] == 0) cout << -1;
			else
			{
				if(rl[r[i]] == 0) cout << -1;
				else cout << a[rl[r[i]]];
			}
			cout << " ";
		}
		cout << endl;
	}
}