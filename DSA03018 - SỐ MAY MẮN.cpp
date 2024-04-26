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

int n;

void solve()
{
    int k = n / 4;
    bool check = false;
    int a = 0, b = 0;
    FORD(i, k, 0)
    {
        if((n - 4 * i) % 7 == 0)
        {
            check = true;
            a = i;
            b = (n - 4 * i) / 7;   
        }
    }
    if(!check) cout << -1;
    else
    {
        FOR(i, 1, a) cout << 4;
        FOR(i, 1, b) cout << 7;
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        solve();
        cout << endl;
    }
}