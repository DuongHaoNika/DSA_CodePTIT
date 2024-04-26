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
    deque<int> dq;
    while(t--)
    {
        string s;
        int x;
        cin >> s;
        if(s == "PUSHBACK") 
        {
            cin >> x;
            dq.push_back(x);
        }
        else if(s == "PUSHFRONT")
        {
            cin >> x;
            dq.push_front(x);
        }
        else if(s == "PRINTFRONT")
        {
            if(!dq.empty()) cout << dq.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "PRINTBACK")
        {
            if(!dq.empty()) cout << dq.back() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT")
        {
            if(!dq.empty()) dq.pop_front();
        }
        else if(s == "POPBACK")
        {
            if(!dq.empty()) dq.pop_back();

        }
    }
}