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

int n, k, s;
int a[21];
int cnt = 0;

bool checkSum()
{
	int res = 0;
	FOR(i, 1, k) res += a[i];
	return res == s;
}

void Try(int i)
{
	FOR(j, a[i - 1] + 1, n - k + i)
	{
		a[i] = j;
		if(i == k)
		{
			if(checkSum()) cnt++;
		}
		else if(i < k) Try(i + 1);
	}
}

int main()
{
	faster();
	while(true)
	{
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0) break;
		a[0] = 0;
		cnt = 0;
		Try(1);
		cout << cnt << endl;
	}
}