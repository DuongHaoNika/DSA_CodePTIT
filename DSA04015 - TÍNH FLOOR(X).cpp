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
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i];
        int idx = upper_bound(a, a + n, k) - a;
        if(idx >= 1 && idx <= n) cout << idx << endl;
        else if(idx == 0) 
        {
            if(a[idx] <= k) cout << 1 << endl;
            else cout << -1 << endl;
        }
    }
}