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

int n, x;

bool cmp(pii a, pii b)
{
    if(abs(a.fi - x) == abs(b.fi - x)) return a.se < b.se;
    return abs(a.fi - x) < abs(b.fi - x);
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> x;
        vector<pii> vp;
        FOR(i, 0, n - 1) 
        {
            pii tmp;
            cin >> tmp.fi;
            tmp.se = i;
            vp.pb(tmp);
        }
        sort(vp.begin(), vp.end(), cmp);
        FOR(i, 0, n - 1) cout << vp[i].fi << " ";
        cout << endl;
    }
}