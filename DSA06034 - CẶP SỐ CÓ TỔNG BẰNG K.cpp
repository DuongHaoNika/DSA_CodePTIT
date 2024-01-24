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
        int n, k; cin >> n >> k;
        vi a;
        map<int, int> m;
        int tmp;
        FOR(i, 0, n - 1) 
        {
            cin >> tmp;
            if(m[tmp] == 0) a.pb(tmp);
            m[tmp]++;
        }
        if(a.sz > 1)
        {
            sort(a.begin(), a.end());
            int res = 0;
            int l = 0, r = a.sz - 1;
            while(l < r)
            {
                int sum = a[l] + a[r];
                if(sum == k)
                {
                    res+= m[a[l]] * m[a[r]];
                    l++;
                    r--;
                }
                else if(sum < k) l++;
                else r--;
            }
            cout << res << endl;
        }
        else if(a.sz == 1)
        {
            if(n == 1) cout << 0 << endl;
            else if(n > 1)
            {
                if(a[0] * 2 == k)
                {
                    ll res = 0;
                    FOR(i, 1, n - 1) res += i;
                    cout << res << endl;
                }
            }
        }
    }
}