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
	while (t--) 
    {
        int n, m, k; cin >> n >> m >> k;
        map<int, int> mp;
        int tmp;
        FOR(i, 1, n)
        {
            cin >> tmp;
            mp[tmp]++;
        }
        map<int, int> m2;
        FOR(i, 1, m)
        {
            cin >> tmp;
            m2[tmp]++;
        }
        map<int, int> m3;
        FOR(i, 1, k)
        {
            cin >> tmp;
            m3[tmp]++;
        }
        bool check = false;
        for(map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it)
        {
            if(m2[it->first] > 0 && m3[it->first] > 0) 
            {
                int minN = min(it->second, min(m2[it->first], m3[it->first]));
                check = true;
                FOR(i, 1, minN) cout << it->first << " ";
            }
        }
        if(!check) cout << "NO";
        cout << endl;
	}
}