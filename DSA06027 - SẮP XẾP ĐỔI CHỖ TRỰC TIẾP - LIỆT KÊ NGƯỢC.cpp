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
        int n; cin >> n;
        int a[n + 5];
        vector<vi> res;
        FOR(i, 0, n - 1) cin >> a[i];
        FOR(i, 0, n - 2)
        {
            int idx = i;
            FOR(j, i + 1, n - 1) if(a[j] < a[idx]) swap(a[j], a[idx]);
            vi tmp;
            FOR(j, 0, n - 1) tmp.pb(a[j]);
            res.pb(tmp);
        }
        FORD(i, res.sz - 1, 0)
        {
            cout << "Buoc " << 1 + i << ": ";
            F(j, 0, res[i].sz) cout << res[i][j] << " ";
            cout << endl;
        }
    }
}