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

string convert(string s1)
{
	string ans; 
	int fl = 0;
	int last_sign = 0;
	FOR(i, 0, s1.sz - 1)
	{
		if(s1[i] != '(' && s1[i] != ')')
		{
			if(isalpha(s1[i]))
			{
				ans.pb(s1[i]);
				continue;
			}
			if(fl)
			{
				if(s1[i] == '+') ans.pb('-');
				else if(s1[i] == '-') ans.pb('+');
			}
			else ans.pb(s1[i]);
		}
		if(s1[i] == '(' && s1[i - 1] == '-')
		{
			last_sign++;
			fl ^= 1;
		}
		if(s1[i] == ')' && last_sign)
		{
			last_sign--;
			fl ^= 1;
		}
	}
	return ans;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		string s1, s2; 
		cin >> s1 >> s2;
		s1 = convert(s1);
		s2 = convert(s2);
		if(s1 == s2) cout << "YES\n";
		else cout << "NO\n";
	}
}