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

ll n, s;
ll a[35];
ll res = -1;

void Try(int i, int cnt, ll cur_sum)
{
    if(i > n || res != -1) return;
    if(cur_sum == s)
    {
        res = cnt;
        return;
    }
    if(cur_sum + a[i] <= s) Try(i + 1, cnt + 1, cur_sum + a[i]);
    Try(i + 1, cnt, cur_sum);
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> s;
        res = -1;
        FOR(i,1,n) cin >> a[i];
        sort(a + 1, a + 1 + n, [](ll a, ll b) {return a > b;});
        Try(1, 0, 0);
        cout << res << endl;
    }
}