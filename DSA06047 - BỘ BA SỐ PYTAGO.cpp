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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        double a[n + 5];
        FOR(i, 0, n - 1) 
        {
            cin >> a[i];
            a[i] = a[i] * a[i];
        }
        sort(a, a + n);
        bool check = false;
        FOR(i, 0, n - 3)
        {
            FOR(j, i + 1, n - 2)
            {
                ll sum = a[i] + a[j];
                int idx = lower_bound(a + j + 1, a + n, sum) - a;
                if(a[idx] == sum) 
                {
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
}