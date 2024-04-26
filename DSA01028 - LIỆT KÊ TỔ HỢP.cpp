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

int n, k;
vi v;
vector<vi> res;
vi a;

void In()
{
    FOR(i, 0, a.sz - 1) cout << a[i] << " ";
    cout << endl;
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        if (j == 1)
            a.pb(v[i]);
        if (a.sz == k)
        {
            res.pb(a);
            //In();
        }
        else if (a.sz < k)
        {
            if(i < n - 1) 
            {
                Try(i + 1);
            }
        }
        if (j == 1)
            a.pop_back();
    }
}

int main()
{
    faster();
    cin >> n >> k;
    map<int, int> m;
    int tmp;
    FOR(i, 0, n - 1)
    {
        cin >> tmp;
        if (m[tmp] == 0)
            v.pb(tmp);
        m[tmp]++;
    }
    n = v.sz;
    sort(v.begin(), v.end());
    Try(0);
    FOR(i, 0, res.sz - 1)
    {
        sort(res[i].begin(), res[i].end());
    }
    sort(res.begin(), res.end());
    FOR(i, 0, res.sz - 1)
    {
        FOR(j, 0, res[i].sz - 1) cout << res[i][j] << " ";
        cout << endl;
    }
}