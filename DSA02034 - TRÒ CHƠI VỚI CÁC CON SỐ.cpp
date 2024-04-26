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

int n;
vi v;

bool check()
{
    FOR(i, 0, n - 2)
    {
        if(abs(v[i] - v[i + 1]) == 1) return false;
    }
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        v.clear();
        FOR(i, 1, n) v.pb(i);
        do
        {
            if(check() == true)
            {
                FOR(i, 0, n - 1) cout << v[i];
                cout << endl; 
            }
        } while (next_permutation(v.begin(), v.end()));
        
    }
}