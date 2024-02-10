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
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int pos = 0;

inline void print(int in[], int pre[], int l, int r, unordered_map<int, int>& m)
{
	if(l <= r)
	{
		int idx = m[pre[pos++]];
		print(in, pre, l, idx - 1, m);
		print(in, pre, idx + 1, r, m);
		cout << in[idx] << " ";
	}
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		pos = 0;
		int n; cin >> n;
		int in[n], pre[n];
		for(auto &i : in) cin >> i;
		for(auto &i: pre) cin >> i;
		unordered_map<int, int> m;
		FOR(i, 0, n - 1) m[in[i]] = i;
		print(in, pre, 0, n - 1, m);
		cout << endl;
	}
	return 0;
}