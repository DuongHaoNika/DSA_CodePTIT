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
        int d; cin >> d;
        string s; cin >> s;
        map<char, int> m;
        int maxA = 0;
        FOR(i, 0, s.sz - 1) 
        {
            m[s[i]]++;
            maxA = max(maxA, m[s[i]]); 
        }
        if(s.sz > (maxA - 1) * d) cout << 1;
        else cout << -1;
        cout << endl;
    }
}