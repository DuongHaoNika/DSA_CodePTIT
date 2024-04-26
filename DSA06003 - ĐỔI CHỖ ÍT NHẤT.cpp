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
        int res = 0;
        FOR(i, 1, n) cin >> a[i];
        FOR(i, 1, n)
        {
            int minA = a[i];
            int idx = i;
            FOR(j, i + 1, n)
            {
                if(a[j] < minA)
                {
                    minA = a[j];
                    idx = j;
                }
            }
            if(idx != i) 
            {
                swap(a[i], a[idx]);
                res++;
            }
        }
        cout << res << endl;
    }
}