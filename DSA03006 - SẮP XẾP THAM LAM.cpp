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
const ll mod = 1e9 + 7;

int a[55];
int b[55];
int n; 

bool Check()
{
    FOR(i, 1, n) if(a[i] != b[i] && a[i] != b[n - i + 1]) return false;
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;   
        FOR(i, 1, n) 
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);   
        if(Check()) cout << "Yes\n";
        else cout << "No\n";
    }
}