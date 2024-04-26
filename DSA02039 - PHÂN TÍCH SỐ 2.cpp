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

int n;
vi tmp;
vector<vi> res;
ll sum = 0;

bool cmp(int a, int b)
{
    return a > b;
}

void Try(int i)
{
    FOR(j, i, n)
    {
        tmp.pb(j);
        sum += j;
        if (sum == n)
            res.pb(tmp);
        else if (sum < n)
            Try(j);
        sum -= j;
        tmp.pop_back();
    }
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        res.clear();
        Try(1);
        FORD(i, res.sz - 1, 0)
        {
            sort(res[i].begin(), res[i].end(), cmp);
        }
        sort(res.begin(), res.end());
        cout << res.sz << endl;
        FORD(i, res.sz - 1, 0)
        {
            sort(res[i].begin(), res[i].end(), cmp);
            cout << "(";
            F(j, 0, res[i].sz - 1)
            cout << res[i][j] << " ";
            cout << res[i][res[i].sz - 1] << ") ";
        }
        cout << endl;
    }
}