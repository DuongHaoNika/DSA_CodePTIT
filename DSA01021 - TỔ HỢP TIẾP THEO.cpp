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
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        int a[n + 5];
        int b[n + 5];
        FOR(i, 1, k) 
        {
            cin >> a[i];
            b[i] = a[i];
        }

        bool check = false;
        int cnt = n;
        FORD(i, k, 1)
        {
            if(a[i] != cnt--)
            {
                check = true;
                break;
            }
        }

        if(!check) cout << k << endl;
        else
        {
            FORD(i, k, 1)
            {
                if(a[i] < n - k + i)
                {
                    a[i]++;
                    FOR(j, i + 1, k) a[j] = a[j - 1] + 1;
                    break;
                }
            }
            map<int, int > m;
            FOR(i, 1, k) m[b[i]]++;
            int ans = 0;
            FOR(i, 1, k) 
            {
                if(m[a[i]] == 0) 
                {
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }
}