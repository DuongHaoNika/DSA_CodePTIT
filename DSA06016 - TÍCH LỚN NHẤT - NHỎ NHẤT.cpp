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
        int n, m; cin >> n >> m;
        ll maxA = -1e9, minB = 1e9;
        ll tmp;
        FOR(i, 1, n) 
        {
            cin >> tmp;
            maxA = max(maxA, tmp);
        }
        FOR(i, 1, m)
        {
            cin >> tmp;
            minB = min(minB, tmp);
        }
        cout << maxA * minB << endl;
    }
}