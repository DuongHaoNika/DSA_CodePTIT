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
		bool check = false;
		for(char c : s) check |= (c == 'D');
		if(!check)
		{
			FOR(i, 1, s.sz + 1) cout << i;
			cout << endl;
			continue;
		}
		s.pb('I');
		int cur = 1, pre = 1;
		FOR(i, 0, s.sz - 1)
		{
			if(s[i] == 'I')
			{
				if(pre != 1) cur++;
				FORD(j, cur, pre) cout << j;
				pre = cur + 1;
			}
			else cur++;
		}
		cout << endl;
	}
}