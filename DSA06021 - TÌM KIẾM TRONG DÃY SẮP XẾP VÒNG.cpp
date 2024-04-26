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
#define pii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define endl '\n'

int k;

int binarySearch(int a[], int l, int r)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == k)
            return mid;
        else if (a[mid] < k)
        {
            l = mid + 1;
        }
        else
        {
            if (a[l] > k)
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> k;
        int a[n + 5];
        FOR(i, 0, n - 1)
        cin >> a[i];
        int res = binarySearch(a, 0, n - 1);
        cout << res + 1 << endl;
    }
}