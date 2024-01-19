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

void input()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

vi v;
int n;

void In()
{
    FOR(i, 0, v.sz - 1) 
    {
        if(v[i] == 0) cout << 'A';
        else cout << 'B';
    }
    cout << " ";
}

void Try()
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(v.sz == n) 
        {
            In();
        }
        else if(v.sz < n) Try();
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
        Try();
        cout << endl;
    }
}