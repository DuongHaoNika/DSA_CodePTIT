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

char c;
int n, k;
int a[105] = {};
vi v;

void Try(int i)
{
    FOR(j, a[i - 1], n - k + 1)
    {
        a[i] = j;
        if(i == k)
        {
            FOR(i, 1, k) cout << char(a[i] + 'A');
            cout << endl;
        }
        else if(i < k) Try(i + 1);
    }
}

int main()
{
    faster();
    cin >> c >> k;
    n = c - 'A' + k - 1;
    Try(1);

}