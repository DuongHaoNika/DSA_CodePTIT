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
const ll mod = 1e9 + 7;

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        vi v;
        int tmp;
        FOR(i, 0, n - 1) 
        {
            cin >> tmp;
            v.pb(tmp);
        }
        FOR(i, 0, m - 1) 
        {
            cin >> tmp;
            v.pb(tmp);
        }
        sort(v.begin(), v.end());
        FOR(i, 0, v.sz - 1) cout << v[i] << " ";
        cout << endl;
    }
}