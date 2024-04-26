#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define pii pair<int, int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll n, k;
ll a[94] = {};

char Fibonacci(int u)
{
    if(u == 1) return 'A';
    else if(u == 2) return 'B';
    if(k > a[u - 2]) 
    {
        k -= a[u - 2];
        return Fibonacci(u - 1);
    }
    return Fibonacci(u - 2);
}

int main()
{
    faster();
    int t; cin >> t;
    a[1] = 1; a[2] = 1;
    FOR(i, 3, 93) a[i] = a[i - 2] + a[i - 1];
    while(t--)
    {
        cin >> n >> k;
        cout << Fibonacci(n) << endl;
    }
}