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
#define maxn 1000000
vll ans;
void gen_ans()
{
    for(ll i = 1; i <= maxn; i++)
        ans.push_back(i * i * i);
}
bool check(ll a,ll b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    int idx = 0;
    FOR(i,0,s2.length()-1)
    {
        if (s2[i] == s1[idx]) idx++;
        if (idx == s1.length()) return 1;
    }
    return 0;
}
int main()
{
    faster();
    gen_ans();
    int tc; cin>>tc;
    while (tc--)
    {
        ll n; cin>>n;
        int fi = lower_bound(ALL(ans), n) - ans.begin();
        int res = -1;
        FORD(i,fi,0)
        {
            if (check(ans[i], n)) 
            {
                res = ans[i];
                break;
            }
        }
        cout<<res<<"\n";
    }
}