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

int prio(char s)
{
	if(s == '(') return 0;
	else if(s == '+' || s == '-') return 1;
	else if(s == '*' || s == '/') return 2;
	return 3;
}

void process_op(stack<string>& res, char op)
{
	string r = res.top(); res.pop();
	string l = res.top(); res.pop();
	res.push(l + r + op);
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		string s; cin >> s;
		stack<char> op;
		stack<string> res;
		for(char c : s)
		{
			if(isalpha(c)) res.push(string(1, c));
			else
			{
				if(c == '(')
				{
					op.push('(');
					continue;
				}
				else if(c == ')')
				{
					while(op.top() != '(')
					{
						process_op(res, op.top());
						op.pop();
					}
					op.pop();
				}
				else
				{
					while(!op.empty() && prio(op.top()) >= prio(c))
					{
						process_op(res, op.top());
						op.pop();
					}
					op.push(c);
				}
			}
		}
		while(!op.empty())
		{
			process_op(res, op.top());
			op.pop();
		}
		cout << res.top() << endl;
	}
}