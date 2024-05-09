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

int main()
{
    faster();
    int t = 1; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 1];
        FOR(i, 1, n) cin >> a[i];
        int res = 0;
        vi L(n + 1, 1);
        vi R(n + 1, 1);

        FOR(i, 2, n)
        {
            if(a[i] > a[i - 1])
            {
                L[i] = max(L[i], L[i - 1] + 1);
            }
        }
        FORD(i, n -  1, 1)
        {
            if(a[i] > a[i + 1])
            {
                R[i] = max(R[i], R[i + 1] + 1);
            }
        }
        
        FOR(i, 1, n) res = max(res, L[i] + R[i] - 1);
        cout << res << endl;
    }
}