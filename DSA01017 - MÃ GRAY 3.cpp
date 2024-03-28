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
		string s1; cin >> s1;
		int n = s1.sz;
		string s;
		FOR(i, 1, n - 1) s += "0";
		int l = 1 << n;
		vector<string> v;
		v.pb("abc");
		v.pb(s + "0");
		v.pb(s + "1");
		if(v[1] == s1 || v[2] == s1)
		{
			cout << s1 << endl;
			continue;
		} 

		string res;
		FOR(i, 1, n) res += "0"; 
		int index = 1;
		while(true)
		{
			index++;
			bool check = false;
			FORD(i, n - 1, 0)
			{
				if(res[i] == '0')
				{
					check = true;
					res[i] = '1';
					FOR(j, i + 1, n - 1) res[j] = '0';
					break;
				}
			}
			if(res == s1) 
			{
				break;
			}
			if(!check) break;
		}
		
		
		int idx = 4;
		int cnt = 2;
		FOR(i, 3, l)
		{
			if(i <= idx)
			{
				string tmp = v[idx - i + 1];
				tmp[n - cnt] = '1';
				v.pb(tmp);
				if(i == index) 
				{
					cout << tmp << endl;
					break;
				}
			}
			else
			{
				idx *= 2;
				cnt++;
				string tmp = v[idx - i + 1];
				tmp[n - cnt] = '1';
				v.pb(tmp);
				if(i == index) 
				{
					cout << tmp << endl;
					break;
				}
			}
		}
	}
}