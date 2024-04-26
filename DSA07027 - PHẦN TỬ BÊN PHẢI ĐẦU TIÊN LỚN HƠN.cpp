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
		stack<int> s;
		vi v;
		FORD(i, n, 1)
		{
			if(s.empty())
			{
				s.push(a[i]);
				v.pb(-1);
			}
			else
			{
				while(!s.empty())
				{
					if(a[i] >= s.top()) s.pop();
					else break;
				}
				if(s.empty()) 
				{
					s.push(a[i]);
					v.pb(-1);
				}
				else 
				{
					v.pb(s.top());
					s.push(a[i]);
				}
			}
		}
		FORD(i, n - 1, 0) cout << v[i] << " ";
		cout << endl;
	}
}