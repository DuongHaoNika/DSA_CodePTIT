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
    stack<string> s;
    string line;
    while(getline(cin, line))
    {
        stringstream ss(line);
        vector<string> v;
        string tmp;
        while(ss >> tmp)
            v.pb(tmp);
        if(v[0] == "push") s.push(v[1]);
        else if(v[0] == "pop")
        {
            if(!s.empty()) s.pop();
        }
        else if(v[0] == "show")
        {
            if(s.empty()) cout << "empty";
            else
            {
                vector<string> res;
                while(!s.empty())
                {
                    res.pb(s.top());
                    s.pop();
                }
                reverse(res.begin(), res.end());
                FOR(i, 0, res.sz - 1) 
                {
                    cout << res[i] << " ";
                    s.push(res[i]);
                }
            }
            cout << endl;
        }
    }
}