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

int Max_Area(const vi& a)
{
	int N = a.sz - 1;
	vi l(N + 1), r(N + 1);
	stack<int> s;
	FOR(i, 1, N)
	{
		while(!s.empty() && a[i] <= a[s.top()]) s.pop();
		if(s.sz) l[i] = s.top() + 1;
		else l[i] = 0;
		s.push(i);
	}
	s = stack<int>();
	FORD(i, N, 1)
	{
		while(!s.empty() && a[i] <= a[s.top()]) s.pop();
		if(s.sz) r[i] = s.top() - 1;
		else r[i] = N;
		s.push(i);
	}
	int ans = -1;
	FOR(i, 1, N)
	{
		ans = max(ans, (r[i] - l[i] + 1) * a[i]);
	}
	return ans;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n, m; cin >> n >> m;
		vector<vi> a(n + 1, vi(m + 1));
		FOR(i, 1, n)
		{
			FOR(j, 1, m) cin >> a[i][j];
		}
		vector<vi> sum_col(m + 1, vi(n + 1));
		int res = -1;
		vi h(m + 1);
		FOR(i, 1, n)
		{
			FOR(j, 1, m) h[j] = (a[i][j] == 1) ? h[j] + 1 : 0;
			res = max(res, Max_Area(h));
		}
		cout << res << endl;
	}
}