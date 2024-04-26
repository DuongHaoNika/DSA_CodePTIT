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

int n;
vll v;
set<ll> s;

void In()
{
    ll tmp = 0;
    FOR(i, 0, v.sz - 1) 
    {
        int k = (v[i] == 0) ? 6 : 8;
        tmp = tmp * 10 + k;
    }
    //cout << tmp << " ";
    s.insert(tmp);
}

void Try()
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(v.sz <= n)
        {
            In();
            Try();
        }
        v.pop_back();
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        ll res = 0;
        FOR(i, 1, n) res += (ll)pow(2, i);
        cout << res << endl;
        Try();
        for(set<ll>::iterator it = s.begin(); it != s.end(); it++) cout << *it << " ";
        cout << endl;
    }
}