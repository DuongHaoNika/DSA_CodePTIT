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

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        map<int, int> m;
        bool check = false;
        FOR(i, 1, n - 1)
        {
            cin >> x >> y;
            m[x]++;
            m[y]++;
        }
        FOR(i, 1, n)
        {
            if(m[i] == 0)
            {
                check = true;
                break;
            }
        }       
        if(check) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}