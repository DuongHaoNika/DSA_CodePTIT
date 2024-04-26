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

int n, k;
vi v;
vector<vi> res;

bool check()
{
    int res = 0;
    FOR(i, 0, n - 1)
    {
        if(v[i] == 0)
        {
            int cnt = 0;
            int idx = i;
            while(idx < n && v[idx] == 0)
            {
                ++cnt;
                ++idx;
                if(cnt == k) break;
            }
            if(cnt == k) res++;
        }
    }
    if(res == 1) return true;
    return false;
}

void In()
{
    FOR(i, 0, res.sz - 1) 
    {
        FOR(j, 0, res[i].sz - 1) 
        {
            if(res[i][j] == 0) cout << 'A';
            else cout << 'B';
        }
        cout << endl;
    }
    cout << endl;
}

void Try()
{
    FOR(j, 0, 1)
    {
        v.pb(j);
        if(v.sz == n)
        {
            if(check()) res.pb(v);
        }
        else if(v.sz < n) Try();
        v.pop_back();
    }
}

int main()
{
    faster();
    cin >> n >> k;
    Try();
    cout << res.sz << endl;
    In();
}