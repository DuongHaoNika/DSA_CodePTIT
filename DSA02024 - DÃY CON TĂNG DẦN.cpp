#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int n;
int a[50];
vi v;
vector<vi> res;

bool check()
{
    if(v.sz < 2) return false;
    FOR(i, 1, v.sz - 1)
    {
        if(v[i] < v[i - 1]) return false;
    }
    return true;
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        if (j == 1)
        {
            v.pb(a[i]);
            if(check()) res.pb(v);
        }
        if(i < n) Try(i + 1);
        if(j == 1) v.pop_back();
    }
}

bool cmp(vi a, vi b)
{
    string s1, s2;
    FOR(i, 0, a.sz - 1) s1 += to_string(a[i]) + " ";
    FOR(i, 0, b.sz - 1) s2 += to_string(b[i]) + " ";
    return s1 < s2;
}

int main()
{
    faster();
    cin >> n;
    FOR(i, 1, n)
        cin >> a[i];
    //sort(a + 1, a + n + 1);
    Try(1);
    sort(all(res), cmp);
    FOR(i, 0, res.sz - 1)
    {
        FOR(j, 0, res[i].sz - 1) cout << res[i][j] << " ";
        cout << endl;
    }
}