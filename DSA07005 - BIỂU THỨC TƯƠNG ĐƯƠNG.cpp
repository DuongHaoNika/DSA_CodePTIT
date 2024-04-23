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
		string s; cin >> s;
		string ans;
		int fl = 0;
		int last_sign = 0;
		FOR(i, 0, s.length() - 1)
		{
			if(s[i] != '(' && s[i] != ')')
			{
				if(isalpha(s[i]))
				{
					ans.pb(s[i]);
					continue;
				}
				if(fl)
				{
					if(s[i] == '+') ans.pb('-');
					else if(s[i] == '-') ans.pb('+');
				}
				else ans.pb(s[i]);
			} 
			if(s[i] == '(' && s[i - 1] == '-')
			{
				fl ^= 1;
				last_sign++;
			}
			if(s[i] == ')' && last_sign)
			{
				fl ^= 1;
				last_sign--;
			}
		}
		cout << ans << endl;
	}
}