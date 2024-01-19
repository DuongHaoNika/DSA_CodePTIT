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
	int t; cin >> t;
	while (t--) 
    {
        map<char, int> m;
		string s; cin >> s;
        int len = s.sz;
        int n = (len % 2) ? len/2 + 1 : len/2;
        int maxRes = 0;

        FOR(i, 0, len - 1)
        {
            m[s[i]]++;
            maxRes = max(maxRes, m[s[i]]);
        }
        if(maxRes > n) cout << "-1\n";
        else cout << "1\n";
	}
}