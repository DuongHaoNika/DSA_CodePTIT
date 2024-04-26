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

vector <vi> res;
vi v;
int n, k;
int a[105];

void Try(int i)
{
    FOR(j, i, n)
    {
        v.pb(a[j]);
        if (accumulate(v.begin(), v.end(), 0) == k) res.pb(v);
        else if (accumulate(v.begin(), v.end(), 0) < k) Try(j);
        v.pop_back();
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        cin >> n >> k;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1);
        if(res.sz == 0) cout << -1 << endl;
        else
        {
            cout << res.sz << " ";
            FOR(i, 0, res.sz - 1)
            {
                cout << "{";
                FOR(j, 0, res[i].sz - 1)
                {
                    cout << res[i][j];
                    if (j != res[i].sz - 1) cout << " ";
                }
                cout << "} ";
            }
            cout << endl;
        }
    }
}