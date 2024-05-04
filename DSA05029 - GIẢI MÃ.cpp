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
#define pll pair<ll, ll>
#define endl '\n'
const ll INF = 4e18;
const int MOD = 1e9 + 7;

int dp[1005][1005] = {};

int main()
{
	faster(); 
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        if(s[0] == '0')
        {
            cout << 0 << endl;
            continue;
        }
		int len = s.sz;
		vi E(len + 1, 0);
		E[0] = E[1] = 1;
		FOR(i, 2, len)
		{
		    if(s[i - 1] > '0') E[i] = E[i - 1];
			if((s[i - 2] == '1') || (s[i - 2] == '2' && s[i - 1] <= '6'))
			{
			    E[i] += E[i - 2];
			}
		}
		cout << E[len] << endl;
    }
}