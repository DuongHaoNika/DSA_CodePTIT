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

int StringToInt(string s)
{
    int res = 0;
    FOR(i, 0, s.sz - 1) res = res * 10 + (s[i] - '0');
    return res;
}

int main()
{
    int n; cin >> n;
    cin.ignore();
    int a[n + 1][n + 1];
    FOR(i, 1, n) FOR(j, 1, n) a[i][j] = 0;
    string s;

    int cnt = 1;

    while(getline(cin, s))
    {
        stringstream ss(s);
        string x;
        while(ss >> x)
        {
            int k = StringToInt(x);
            a[cnt][k] = 1;
            a[k][cnt] = 1;
        }
        cnt++;
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, n) 
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}