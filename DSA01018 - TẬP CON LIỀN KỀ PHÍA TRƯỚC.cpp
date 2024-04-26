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

void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n + 5];
    for(int i = 1; i <= k; i++) cin >> a[i];
    int idx = -1;
    for(int i = k; i > 1; i--)
    {
        if(a[i] - 1 > a[i - 1] ) 
        {
            idx = i;
            break;
        }
    }
    if(idx > 0) 
    {
        a[idx]--;
        for(int i = idx + 1; i <= k; i++) a[i] = n - k + i;
    }
    else
    {
        if(a[1] != 1)
        {
            a[1]--;
            for(int i = 2; i <= k; i++) a[i] = n - k + i;
        }
        else
        {
            for(int i = k; i >= 1; i--) a[i] = n - k + i;
        }
    }
    for(int i = 1; i <= k; i++) cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}