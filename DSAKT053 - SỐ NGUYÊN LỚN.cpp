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
        string s1; cin >> s1;
        string s2; cin >> s2;
        int l1 = s1.sz, l2 = s2.sz;
        memset(dp, 0, sizeof(dp));
        FOR(i, 1, l1)
        {
            FOR(j, 1, l2)
            {
                if(s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
                else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
        cout << dp[l1][l2] << endl;
    }
}