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
        int k; cin >> k;
        string s; cin >> s;
        int n = s.sz;
        FOR(i, 0, n - 2)
        {
            int idx = i;
            FOR(j, i + 1, n - 1)
            {
                if (s[j] >= s[idx]) idx = j;
            }
            if (idx != i && k > 0 && s[idx] != s[i])
            {
                swap(s[i], s[idx]);
                k--;
            }
        }
        cout << s << endl;
    }
}