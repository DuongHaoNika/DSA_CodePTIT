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
const int MOD = 1e9 + 7;

bool cmp(int a, int b) 
{
    return a > b;
}

int main()
{
    faster();
    int n; cin >> n;
    int a[n + 5];
    vi x;
    vi y;
    FOR(i, 0, n - 1) 
    {
        cin >> a[i];
        if(i & 1) y.pb(a[i]);
        else x.pb(a[i]);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end(), cmp);
    int idx1 = 0, idx2 = 0;
    int cnt = 0;
    while(idx1 < x.sz || idx2 < y.sz)
    {
        if(cnt & 1)
        {
            if(idx2 < y.sz) cout << y[idx2++] << " ";
        }
        else
        {
            if(idx1 < x.sz) cout << x[idx1++] << " ";
        }
        cnt++;
    }
}