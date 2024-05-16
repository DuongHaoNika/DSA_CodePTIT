#include <bits/stdc++.h>
using namespace std;
#define deb(...) 
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define ALL(x) x.begin(), x.end()
#define NALL(x) x.begin() + 1, x.end()
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); 
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define endl '\n'
const ll INF = 4e18;
const int MOD = 1e9 + 7;

string s; 
vector<char> tmp;
int n;
vector<vector<char>> res;

void Try(int i)
{
    FOR(j,0,1)
    {
        if(j == 1) tmp.pb(s[i]);
        if(i == n) res.pb(tmp);
        else if(i < n) Try(i + 1);
        if(j == 1) tmp.pop_back();
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        cin >> s;
        s = " " + s;
        Try(1);
        sort(ALL(res));
        FOR(i,0,res.sz-1) 
        {
            for(char c : res[i]) cout << c;
            cout << " ";
        }
        res.clear();
        cout << endl;
    }
}