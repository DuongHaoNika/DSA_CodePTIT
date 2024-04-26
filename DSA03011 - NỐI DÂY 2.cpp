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
const int MOD = 1e9 + 7;

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        priority_queue<ll, vector<ll>, greater<ll> > pq;
        int tmp;
        FOR(i, 0, n - 1) 
        {
            cin >> tmp;
            pq.push(tmp);
        }
        ll res = 0;
        while(pq.sz > 1)
        {
            ll a = pq.top() % MOD; pq.pop();
            ll b = pq.top() % MOD; pq.pop();
            res += (a + b) % MOD;
            res %= MOD;
            pq.push((a + b) % MOD);
        }
        cout << res << endl;
    }
}