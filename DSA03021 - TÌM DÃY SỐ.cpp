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

int main()
{
    faster();
    int n; cin >> n;
    vi a(n), b(n), c(n);
    FOR(i,0,n-1) cin >> a[i];
    b = c = a;
    auto check = [] (int x, vi d)
    {
        for(int i : d) 
        {
            if(i / x == i / (x + 1)) return false;
        }
        return true;
    };
    sort(ALL(b));
    FORD(i, b[0], 1)
    {
        if(check(i, a))
        {
            FOR(j,0,n-1) c[j] = a[j] / (i + 1) + 1;
            break;
        }
    }
    int res = 0;
    for(int i : c) res += i;
    cout << res;
}