#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define FORD(i, a, b) for (int i = a; i >= b; i--)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define pii pair<int, int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
#define endl '\n'

int n, k;
int cnt = 0;
vi v;
int a[105];

bool check()
{
    FOR(i, 1, v.sz - 1)
    {
        if (v[i] < v[i - 1])
            return 0;
    }
    return 1;
}

void Try(int i)
{
    FOR(j, 0, 1)
    {
        if(j == 1) v.pb(a[i]);
        if (i == n)
        {
            if (v.sz == k && check()) 
            {
                cnt++;
            }
        }
        else if(i < n) Try(i + 1);
        if(j == 1) v.pop_back();
    }
}

int main()
{
    faster();
    cin >> n >> k;
    FOR(i, 1, n)
        cin >> a[i];
    Try(1);
    cout << cnt;
}