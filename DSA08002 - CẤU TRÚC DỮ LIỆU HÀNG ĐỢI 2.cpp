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
    queue<int> q;
    int n; cin >> n;
    string tmp;
    int x;
    while(n--)
    {
        cin >> tmp;
        if(tmp == "PUSH")
        {
            cin >> x;
            q.push(x);  
        }
        else if(tmp == "PRINTFRONT")
        {
            if(q.empty()) cout << "NONE\n";
            else cout << q.front() << endl;
        }
        else if(tmp == "POP")
        {
            if(!q.empty()) q.pop();
        }
    }
}