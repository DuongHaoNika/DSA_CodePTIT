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

vi v;

bool check()
{
    if(v[4] == 0) return false;
    if(v[0] == 0 && v[1] == 0) return false;
    if(v[2] == 0 && v[3] == 0) return false;
    if(v[2] == 1) return false;
    return true;
}

void In()
{
    FOR(i, 0, 7)
    {
        if(i == 2 || i == 4) cout << "/";
        if(v[i] == 0) cout << 0;
        else cout << 2;
    }
    cout << endl;
}

void Try()
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(v.sz == 8)
        {
            if(check()) In();
        }
        else Try();
        v.pop_back();
    }
}

int main()
{
    faster();
    Try();
}