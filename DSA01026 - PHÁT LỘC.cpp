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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int n;
vi v;
vector<vi> res;

bool check1()
{
    if(v[0] == 0 && v[n - 1] == 1) return true;
    return false;
}

bool check2()
{
    FOR(i, 1, n - 1)
    {
        if(v[i] == 0 && v[i - 1] == 0) return false;
    }
    return true;
}

bool check3()
{
    FOR(i, 3, n - 1)
    {
        if(v[i] == 1 && v[i - 1] == 1 && v[i - 2] == 1 && v[i - 3] == 1) return false;
    }
    return true;
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(i == n) 
        {
            if(check1() && check2() && check3()) res.pb(v);
        }
        else Try(i + 1);
        v.pop_back();
    }
}

int main()
{
    faster();
    cin >> n;
    Try(1);
    sort(res.begin(), res.end());
    FORD(i, res.sz - 1, 0) 
    {
        FOR(j, 0, n - 1) 
        {
            if(res[i][j] == 0) cout << '8';
            else cout << '6';
        }
        cout << endl;
    }
}