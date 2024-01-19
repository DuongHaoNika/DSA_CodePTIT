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

vi v;
int n, k;
bool used[105];

void In()
{
    FOR(i, 0, v.sz - 1) cout << v[i];
    cout << " ";
}

void Try(int i)
{
    FOR(j, i, n)
    {
        if(!used[j])
        {
            used[j] = true;
            v.pb(j);
            if(v.sz == k) In();
            else if(v.sz < k) Try(j + 1);
            v.pop_back();
            used[j] = false;
        }
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
        Try(1);
        cout << endl;
    }
}