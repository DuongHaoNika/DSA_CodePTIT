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
		vi r(n + 1);
		stack<int> s;
		FORD(i, n, 1)
		{
			while(!s.empty() && a[i] <= a[s.top()]) s.pop();
			if(s.sz) r[i] = s.top() - 1;
			else r[i] = n;
			s.push(i);
		}
		s = stack<int>();
		vi l(n + 1);
		FOR(i, 1, n)
		{
			while(!s.empty() && a[i] <= a[s.top()]) s.pop();
			if(s.sz) l[i] = s.top() + 1;
			else l[i] = 1;
			s.push(i);
		}
		int res = 0;
		FOR(i, 1, n)
		{
			int len = r[i] - l[i] + 1;
			int len1 = i - r[i] + 1, len2 = r[i] - i + 1;
			if(len == a[i]) res = max(res, len);
			else
			{
				if(a[i] < len) res = max(res, a[i]); 
			}
		}
		// cout << endl;
		cout << res << endl;
	}
}