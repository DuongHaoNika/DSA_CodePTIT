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
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        deque<int> dq;
        int m;
        while(n--)
        {
            cin >> m;
            if(m == 1) cout << dq.sz << endl;
            else if(m == 2)
            {
                if(dq.empty()) cout << "YES\n";
                else cout << "NO\n";
            }
            else if(m == 3)
            {
                int x; cin >> x;
                dq.push_back(x);
            }
            else if(m == 4)
            {
                if(!dq.empty()) dq.pop_front();
            }
            else if(m == 5)
            {
                if(!dq.empty()) cout << dq.front() << endl;
                else cout << "-1\n";
            }
            else if(m == 6)
            {
                if(!dq.empty()) cout << dq.back() << endl;
                else cout << "-1\n";
            }
        }
    }
}