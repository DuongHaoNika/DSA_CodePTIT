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
        int n; cin >> n;
        priority_queue<int, vector<int>, greater<int> > pq;
        int tmp;
        FOR(i, 1, n) 
        {
            cin >> tmp;
            pq.push(tmp);
        }
        ll res = 0;

        while(pq.sz > 1) 
        {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            res += a + b;
            pq.push(a + b);
        }
        cout << res;
        cout << endl;
	}
}