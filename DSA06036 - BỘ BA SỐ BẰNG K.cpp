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

bool cmp(pii a, pii b)
{
    return a.se > b.se;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        ll a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i];
        bool check = false;
        sort(a, a + n);
        FOR(i, 0, n - 1)
        {
            int l = i + 1, r = n - 1;
            while(l < r)
            {
                ll sum = a[i] + a[l] + a[r];
                if(sum == k)
                {
                    check = true;
                    break;
                }
                else if(sum < k) l++;
                else r--;
            }
            if(check) break;
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}