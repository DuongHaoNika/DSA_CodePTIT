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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        int maxRes = 1;
        FOR(i, 0, n - 1)
        cin >> a[i];
        int idx = 1;
        bool in = false, de = false;
        while (idx < n)
        {
            int count = 1;
            if (a[idx] > a[idx - 1])
            {
                in = true;
                de = false;
                while (idx < n && a[idx] > a[idx - 1])
                {
                    count++;
                    idx++;
                }
                maxRes = max(maxRes, count);
            }
            if (a[idx] < a[idx - 1])
            {
                de = true;
                if (!in)
                    count = 1;
                in = false;
                while (idx < n && a[idx] < a[idx - 1])
                {
                    count++;
                    idx++;
                }
                maxRes = max(maxRes, count);
            }
            else idx++;
        }
        cout << maxRes << endl;
    }
}