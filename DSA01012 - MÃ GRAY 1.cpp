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
		int n; cin >> n;
		string s;
		FOR(i, 1, n - 1) s += "0";
		int l = 1 << n;
		
		vector<string> v;
		v.pb("abc");
		v.pb(s + "0");
		v.pb(s + "1");
		int idx = 4;
		int cnt = 2;
		
		FOR(i, 3, l)
		{
			if(i <= idx)
			{
				string tmp = v[idx - i + 1];
				tmp[n - cnt] = '1';
				v.pb(tmp);
			}
			else
			{
				idx *= 2;
				cnt++;
				string tmp = v[idx - i + 1];
				tmp[n - cnt] = '1';
				v.pb(tmp);
			}
		}
		FOR(i, 1, v.sz - 1)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}