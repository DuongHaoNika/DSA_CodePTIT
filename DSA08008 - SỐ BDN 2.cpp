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

void solve()
{
	ll n; cin >> n;
	queue<ll> q;
	q.push(1);
	while(!q.empty())
	{
		ll x = q.front();
		if(x % n == 0)
		{
			cout << x << endl;
			break;
		}
		q.pop();
		q.push(x * 10);
		q.push(x * 10 + 1);
		
	}
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