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

vector<vi> ans;
int n, k;
bool used[15];
int a[15][15];
int x[15];
int sum = 0;

void Try(int i)
{
	FOR(j, 1, n)
	{
		if(!used[j])
		{
			sum += a[i][j];
			x[i] = j;
			used[j] = true;
			if(i == n)
			{
				if(sum == k)
				{
					vi tmp(x + 1, x + 1 + n);
					ans.pb(tmp);
				}
			}
			else if(i < n) Try(i + 1);
			used[j] = false;
			sum -= a[i][j];
		}
	}
}

int main()
{
	faster();
	memset(used, false, sizeof(used));
	cin >> n >> k;
	FOR(i, 1, n)
	{
		FOR(j, 1, n) cin >> a[i][j];
	}
	Try(1);
	cout << ans.sz << endl;
	FOR(i, 0, ans.sz - 1)
	{
		FOR(j, 0, ans[i].sz - 1) cout << ans[i][j] << " ";
		cout << endl;
	}
}