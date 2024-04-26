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
#define mii map<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int k; cin >> k;
        string s; cin >> s;
        int n = s.sz;
        priority_queue<int> pq;
        map<char, int> m;
        F(i, 0, n) m[s[i]]++;
        for(map<char, int>::iterator it = m.begin(); it != m.end(); it++) pq.push(it->se);
        while(k--)
        {
            int tmp = pq.top();
            pq.pop();
            tmp--;
            pq.push(tmp);
        }
        ll res = 0;
        while(!pq.empty())
        {
            res += pq.top() * pq.top();
            pq.pop();
        }
        cout << res << endl;
    }
}