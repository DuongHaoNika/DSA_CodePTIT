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

vll v;
ll p2[70], p3[70], p5[70];

void init()
{
    p2[0] = p3[0] = p5[0] = 1;
    FOR(i,1,60)
    {
        if(p2[i - 1] < INF) p2[i] = p2[i - 1] * 2;
        if(p3[i - 1] < INF) p3[i] = p3[i - 1] * 3;
        if(p5[i - 1] < INF) p5[i] = p5[i - 1] * 5;
    }
    FOR(i,0,60)
    {
        FOR(j,0,60)
        {
            FOR(k,0,60)
            {
                if(!p2[i] || !p3[j] || !p5[k]) continue;
                if(log(p2[i]) + log(p3[j]) + log(p5[k]) > log(INF)) continue;
                v.pb(p2[i] * p3[j] * p5[k]);
            }
        }
    }
    sort(ALL(v));
}

int main()
{
    faster();
    init();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << v[n - 1] << endl;
    }
}