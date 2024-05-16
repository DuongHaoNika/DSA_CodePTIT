#include <bits/stdc++.h>
using namespace std;
#define deb(...) 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define ALL(x) x.begin(), x.end()
#define NALL(x) x.begin() + 1, x.end()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'
const ll INF = 4e18;
const int MOD = 1e9 + 7;

void Try(ll tu, ll mau)
{
    if(mau % tu == 0)
    {
        cout << 1 << "/" << mau / tu << endl;
        return;
    }
    ll x = mau/tu + 1;
    cout << 1 << "/" << x << " + ";
    ll mau_n = x * mau;
    ll tu_n = tu * x - mau;
    Try(tu_n, mau_n);
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int tu, mau; cin >> tu >> mau;
        Try(tu, mau);
    }
}