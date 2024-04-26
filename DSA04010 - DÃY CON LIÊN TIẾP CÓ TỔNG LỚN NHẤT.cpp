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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i];
        int res = 0;
        FOR(i, 0, n - 1)
        {
            if(a[i] < 0) continue;
            int sum = a[i];
            res = max(res, sum);
            FOR(j, i + 1, n - 1)
            {
                sum += a[j];
                if(sum < 0) break;
                res = max(res, sum);
                //cout << i << " " << j << ": " << res << "\n";
            }
        }
        cout << res << endl;
    }
}