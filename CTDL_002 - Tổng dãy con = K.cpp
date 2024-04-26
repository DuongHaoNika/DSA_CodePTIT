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
ll sum;
vi a;
vi b;
int cnt = 0;

void In()
{
    FOR(i, 0, b.sz - 1) cout << b[i] << " ";
    cout << endl;
}

void Try(int i)
{
    FOR(j, 0, 1) 
    {
        a.pb(j);
        if(j == 1) 
        {     
            b.pb(v[i]);
        }
        if(a.sz == n)
        {
            ll sumRes = 0;
            FOR(u, 0, n - 1)
            {
                sumRes += a[u] * v[u];
            }
            if(sumRes == sum)
            {
                cnt++;
                In();
            }
        }
        else if(a.sz < n) Try(i + 1);
        if(j == 1) b.pop_back();
        a.pop_back();
    }
}

int main()
{
    faster();
    cin >> n >> sum;
    int tmp;
    FOR(i, 1, n) 
    {
        cin >> tmp;
        v.pb(tmp);
    }
    Try(0);
    cout << cnt;
}