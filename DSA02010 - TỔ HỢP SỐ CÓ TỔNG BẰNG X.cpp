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

int n, x;
int a[105];
vi v;
vector<vi> res;
ll sumA = 0;

void Try(int i)
{
    FOR(j, i, n)
    {
        sumA += a[j];
        v.pb(a[j]);
        if(sumA == x) res.pb(v);
        else if(sumA < x) Try(j);
        v.pop_back();
        sumA -= a[j];
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        res.clear();
        cin >> n >> x;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n);
        Try(1);
        if(res.sz == 0) cout << -1;
        else
        {
            FOR(i, 0, res.sz - 1)
            {
                cout << "[";
                for(int j = 0; j < res[i].sz - 1; j++) cout << res[i][j] << " ";
                cout << res[i][res[i].sz - 1] << "]";
            }
        }
        cout << endl;
    }
}