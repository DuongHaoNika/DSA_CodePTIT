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
        vi v;
        int n, k; cin >> n >> k;
        v.resize(n);
        F(i, 0, n) cin >> v[i];
        deque<int> dq;
        FOR(i, 0, n - 1)
        {
            while(!dq.empty() && v[i] >= v[dq.back()]) dq.pop_back();
            dq.push_back(i);
            if(i >= k - 1)
            {
                cout << v[dq.front()] << " ";
                while(!dq.empty() && dq.front() <= i - k + 1) dq.pop_front();
            }
        }
        cout << endl;
    }
}