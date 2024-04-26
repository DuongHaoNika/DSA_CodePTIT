#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define ALL(x) x.begin(), x.end()
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(NULL);                \
	cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define endl '\n'
#define maxn 100005
const int MOD = 1e9 + 7;
const int max = 1005;

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		string line;
		cin >> line;
		stack<char> s;
		FOR(i, 0, line.sz - 1)
		{
			if(line[i] == '(' || line[i] == '[' || line[i] == '{') s.push(line[i]);
			else
			{
				if(s.empty()) s.push(line[i]);
				else
				{
					if(line[i] == ')') 
					{
						if(s.top() == '(') s.pop();
						else s.push(line[i]);
					}
					else if(line[i] == ']') 
					{
						if(s.top() == '[') s.pop();
						else s.push(line[i]);
					}
					else if(line[i] == '}') 
					{
						if(s.top() == '{') s.pop();
						else s.push(line[i]);
					}
				}
			}
		}
		if(s.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}