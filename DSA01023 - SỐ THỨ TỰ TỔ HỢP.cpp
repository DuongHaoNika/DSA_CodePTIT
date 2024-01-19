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

int v[105] = {};
vi a;
int n, k;
bool used[105];
int cnt = 0;

bool Compare(int a[], vi b)
{
    FOR(i, 0, b.sz - 1)
    {
        if(a[i + 1] != b[i]) return false;
    }
    return true;
}

void Try(int i)
{
    FOR(j, v[i - 1] + 1, n - k + i)
    {
        v[i] = j;
        if(i == k) 
        {
            cnt++;
            if(Compare(v, a)) 
            {
                cout << cnt << endl;
                return;
            } 
        }
        else if(i < k) Try(i + 1);
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        memset(used, false, sizeof(used));  
        int tmp;
        FOR(i, 1, k)
        {
            cin >> tmp;
            a.pb(tmp);
        }

        cnt = 0;
        Try(1);
        a.clear();
    }
}