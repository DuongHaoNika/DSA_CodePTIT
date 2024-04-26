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
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5], b[n + 5];
        FOR(i, 1, n) 
        {
            cin >> a[i];
        }
        vi res;
        int maxA[n + 5];
        int minA[n + 5];
        maxA[1] = a[1];
        minA[n] = a[n];
        FOR(i, 2, n) maxA[i] = max(maxA[i - 1], a[i]);
        FORD(i, n - 1, 1) minA[i] = min(minA[i + 1], a[i]);
        FOR(i, 1, n - 1)
        {
            if(maxA[i] <= minA[i + 1]) res.pb(i);
        }
        cout << res.sz << endl;
        for(int i = 0; i < res.sz; i++) cout << res[i] << " ";
        cout << endl;
    }
}