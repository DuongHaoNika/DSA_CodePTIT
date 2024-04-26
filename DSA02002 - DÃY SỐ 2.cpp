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
#define PI 3.141592653589793238
#define endl '\n'

int main() 
{
    faster();
	int t; cin >> t;
	while (t--) 
    {
		int n; cin >> n;
        vector<vi> res;
        vi a(n);
        FOR(i, 0, n - 1) cin >> a[i];
        int idx = 0;
        int m = n;
        while(m--)
        {
            vi tmp;
            FOR(i, idx, n - 1) tmp.pb(a[i]);
            res.pb(tmp);
            idx++;
            FORD(i, n - 1, idx) a[i] += a[i - 1];
        }
        FORD(i, res.sz - 1, 0)
        {
			cout << "[";
			F(j, 0, res[i].sz - 1) cout << res[i][j] << " ";
			cout << res[i][res[i].size() - 1] << "] ";
		}
        cout << endl;
	}
}