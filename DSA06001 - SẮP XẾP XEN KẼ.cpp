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
const ll mod = 1e9 + 7;

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i];
        sort(a, a + n);
        int idx = 0;
        int l = 0, r = n - 1;
        while(l <= r)
        {
            if(idx & 1) cout << a[l++] << " ";
            else cout << a[r--] << " ";
            idx++;
        }
        cout << endl;
    }
}