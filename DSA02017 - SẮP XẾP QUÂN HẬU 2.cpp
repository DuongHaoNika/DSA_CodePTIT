#include <bits/stdc++.h>
using namespace std;
#define deb(...) 
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

int n, cnt;
bool col[100], a[100], b[100];
int dp[105][105];
int res = 0;

void Try(int i, int sum)
{
    FOR(j,1,n)
    {
        if(!col[j] && !a[i - j + n] && !b[i + j - 1])
        {
            col[j] = a[i - j + n] = b[i + j - 1] = 1;
            if(i == n) 
            {
                res = max(res, sum + dp[i][j]);
            }
            Try(i + 1, sum + dp[i][j]);
            col[j] = a[i - j + n] = b[i + j - 1] = 0;
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        n = 8;
        res = 0;
        FOR(i,1,8)
        {
            FOR(j,1,8) cin >> dp[i][j];
        }
        Try(1, 0);
        cout << res << endl;
    }
}