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

int main()
{
    faster();
    int n; cin >> n;
    vi v(n);
    FOR(i, 0, n - 1) cin >> v[i];
    sort(v.begin(), v.end());
    FOR(i, 0, n - 1) cout << v[i] << " ";
    cout << endl;
    while(next_permutation(v.begin(), v.end())) 
    {
        FOR(i, 0, n - 1) cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}