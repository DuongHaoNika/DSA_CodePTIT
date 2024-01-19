#include <bits/stdc++.h>
using namespace std;
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
        int a[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int res = 0;
        int i = 9;
        while(n > 0)
        {
            if(n >= a[i])
            {
                res += n / a[i];
                n %= a[i];
            }
            else i--;
        }
        cout << res << endl;
    }
}