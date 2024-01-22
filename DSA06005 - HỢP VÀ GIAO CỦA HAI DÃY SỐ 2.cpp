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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        map<int, int> mp;
        map<int, int> np;
        map<int, int> pp;
        int tmp;
        FOR(i, 1, n) 
        {
            cin >> tmp;
            mp[tmp]++;
            pp[tmp]++;
        }
        FOR(i, 1, m)
        {
            cin >> tmp;
            mp[tmp]++;
            np[tmp]++;
        }
        for(map<int, int>::iterator it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->fi << " ";
        }
        cout << endl;
        for(map<int, int>::iterator it = np.begin(); it != np.end(); it++)
        {
            if(pp[it->fi]) cout << it-> fi << " ";
        }
        cout << endl;
    }
}