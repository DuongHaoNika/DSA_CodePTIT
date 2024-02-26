#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i) 
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define endl '\n'
#define maxn 100005

void IO()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);  
    #endif
}

int main()
{
    IO();
    faster(); 
    int t; cin >> t;
    while(t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;
        int l1 = s1.sz, l2 = s2.sz;
        int dp[1005][1005] = {};
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