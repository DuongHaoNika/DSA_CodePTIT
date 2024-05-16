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

int n, dp[20][20];
int minRes = 1e9;
bool mark[20];

void Try(int i, int sum, int cnt)
{
    if(sum > minRes) return;
    bool check = false;
    FOR(j,1,n)
    {
        if(!mark[j])
        {
            check = true;
            mark[j] = 1;
            if(cnt <= n) Try(j, sum + dp[i][j], cnt + 1);
            mark[j] = 0;
        }
    }
    if(!check) minRes = min(minRes, sum + dp[i][1]);
}

int main()
{
    faster();
    cin >> n;
    FOR(i,1,n)
    {
        FOR(j,1,n) cin >> dp[i][j];
    }
    memset(mark, 0, 20);
    minRes = 1e9;
    mark[1] = 1;
    Try(1, 0, 1);
    cout << minRes;
}