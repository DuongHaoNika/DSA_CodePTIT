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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define PI 3.141592653589793238
#define endl '\n'

int a[1005] = {};
int n, k;
vector<string> v;

void In()
{
    FOR(i, 1, k) 
    {
        cout << v[a[i] - 1] << " ";
    }
    cout << endl;
}

void Try(int i)
{
    FOR(j, a[i - 1] + 1, n - k + i)
    {
        a[i] = j;
        if(i == k)
        {
            In();
        }
        else if(i < k) Try(i + 1);
    }
}

int main()
{
    faster();
    cin >> n >> k;
    string tmp;
    map<string, int> m;
    FOR(i, 1, n) 
    {
        cin >> tmp;
        if(m[tmp] == 0) v.pb(tmp);
        m[tmp]++;
    }
    sort(v.begin(), v.end());
    n = v.sz;
    //FOR(i, 0, v.sz - 1) cout << v[i] << endl;
    Try(1);
}