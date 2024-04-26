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
    stack<string> s;
    int t; cin >> t;
    cin.ignore();
    while(t--)
    {
        string line; getline(cin, line);
        vector<string> v;
        stringstream ss(line);
        string tmp;
        while(ss >> tmp)
            v.pb(tmp);
        if(v[0] == "PUSH") s.push(v[1]);
        else if(v[0] == "POP")
        {
            if(!s.empty()) s.pop();
        }
        else if(v[0] == "PRINT")
        {
            if(s.empty()) std::cout << "NONE";
            else
            {
                vector<string> res;
                while(!s.empty())
                {
                    res.pb(s.top());
                    s.pop();
                }
                std::reverse(res.begin(), res.end());
                std::cout << res[res.sz - 1] << " ";
                FOR(i, 0, res.sz - 1) 
                {
                    s.push(res[i]);
                }
            }
            std::cout << endl;
        }
    }
}