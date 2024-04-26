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

bool CheckDiff(int n)
{
	map<int, int> m;
	while(n)
	{
		int k = n % 10;
		if(m[k]) return false;
		else m[k]++;
		n /= 10;
	}
	return true;
}

void solve()
{
	int l, r; cin >> l >> r;
	queue<int> q;
	q.push(0);
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	int res = 0;
	set<int> s;
	while(q.sz)
	{
		int x = q.front();
		q.pop();
		if(x >= l && x <= r)
		{
			if(CheckDiff(x)) 
			{
				s.insert(x);
				if(x != 0) q.push(x * 10);
				q.push(x * 10 + 1);
				q.push(x * 10 + 2);
				q.push(x * 10 + 3);
				q.push(x * 10 + 4);
				q.push(x * 10 + 5);
			}
		}
		else if(x < r)
		{
			if(x != 0) q.push(x * 10);
			q.push(x * 10 + 1);
			q.push(x * 10 + 2);
			q.push(x * 10 + 3);
			q.push(x * 10 + 4);
			q.push(x * 10 + 5);
		}
	}
	cout << s.sz << endl;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		solve();
	}
}