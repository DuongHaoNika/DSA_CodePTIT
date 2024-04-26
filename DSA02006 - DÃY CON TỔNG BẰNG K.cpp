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

int n, sum;
int a[1005];
int sumRes = 0;
vi v;
vector<vi> res;

void Try(int i)
{
    FOR(j, 0, 1)
    {
        sumRes += j * a[i];
        //cout << sumRes << endl;
        if(j == 1) v.pb(a[i]);
        if(sumRes == sum)
        {
            res.pb(v);
        }
        else if(sumRes < sum)
        {
            if(i < n) Try(i + 1);
        }
        if(j == 1) v.pop_back();
        sumRes -= j * a[i];
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        sumRes = 0;
        cin >> n >> sum;
        FOR(i, 1, n) cin >> a[i];
        sort(a + 1, a + 1 + n);
        Try(1);
        if(res.sz == 0) cout << -1 << endl;
        else
        {
            FORD(i, res.sz - 1, 0)
            {
                cout << "[";
                FOR(j, 0, res[i].sz - 1) 
                {
                    cout << res[i][j];
                    if(j < res[i].sz - 1) cout << " ";
                }
                cout << "]" << " ";
            }
            cout << endl;
        }
        res.clear();
        v.clear();
    }
}