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

string minA(string s)
{
    FOR(i, 0, s.sz - 1) if(s[i] == '6') s[i] = '5';
    return s;
}

string maxA(string s)
{
    FOR(i, 0, s.sz - 1) if(s[i] == '5') s[i] = '6';
    return s;
}

int StringToInt(string s)
{
    int res = 0;
    FOR(i, 0, s.sz - 1) res = res * 10 + (s[i] - '0');
    return res;
}

int main()
{
    faster();
    string s1, s2; cin >> s1 >> s2;
    cout << StringToInt(minA(s1)) + StringToInt(minA(s2)) << " " << StringToInt(maxA(s1)) + StringToInt(maxA(s2));
}