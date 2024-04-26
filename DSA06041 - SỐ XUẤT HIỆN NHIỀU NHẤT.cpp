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

bool cmp(pii a, pii b)
{
    return a.se > b.se;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        map<int, int> m;
        FOR(i, 0, n - 1) 
        {
            cin >> a[i];
            m[a[i]]++;
        }
        vector<pii> v;
        for(map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
            v.pb(mp(it->fi, it->se));
        sort(v.begin(), v.end(), cmp);
        //cout << v[0].fi;
        if(v[0].se > n/2) cout << v[0].fi;
        else cout << "NO";
        cout << endl;
    }
}