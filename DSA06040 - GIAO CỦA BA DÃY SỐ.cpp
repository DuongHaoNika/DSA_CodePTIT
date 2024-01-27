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
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1 + 5], b[n2 + 5], c[n3 + 5];
        vi v;
        F(i, 0, n1) cin >> a[i];
        F(i, 0, n2) cin >> b[i];
        F(i, 0, n3) cin >> c[i];
        int idx1 = 0, idx2 = 0, idx3 = 0;
        while(idx1 < n1 && idx2 < n2 && idx3 < n3)
        {
            if (a[idx1] == b[idx2] && b[idx2] == c[idx3])
            {
                v.pb(a[idx1]);
                idx1++;
                idx2++;
                idx3++;
            }
            else if (a[idx1] < b[idx2]) idx1++;
            else if (b[idx2] < c[idx3]) idx2++;
            else idx3++;
        }
        if(v.sz == 0) cout << -1;
        else
        {
            F(i, 0, v.sz) cout << v[i] << " ";
        }
        cout << endl;
    }
}