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

bool cmp(pii p1, pii p2)
{
    return p1.se < p2.se;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {   
        int n; cin >> n;
        vector<pii> v;
        FOR(i, 1, n)
        {
            pii tmp;
            cin >> tmp.fi >> tmp.se;
            v.pb(tmp);
        }
        sort(v.begin(), v.end(), cmp);
        int res = 0;
        int xend = 0;
        FOR(i, 0, n - 1)
        {
            if(v[i].fi >= xend)
            {
                res++;
                xend = v[i].se;
            }
        }
        cout << res << endl;
    }
}