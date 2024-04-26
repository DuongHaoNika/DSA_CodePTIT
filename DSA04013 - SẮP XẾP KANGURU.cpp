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

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(auto &i : a) cin >> i;
		sort(a, a + n);
		int lA = 0, lB = n >> 1; 
		int cnt = 0;
		while(lB <= n - 1)
		{
			if(a[lA] * 2 <= a[lB])
			{
				cnt++;
				lA++;
				lB++;
			}
			else
			{
				lB++;
			}
		}
		cout << n - cnt << endl;
	}
}
