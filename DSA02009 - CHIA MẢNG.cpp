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

int n, k, a[25];
bool mark[25], ans;

void Try(int i, int nset, int cur_sum, int needsum)
{   
    if(ans) return;
    if(i == n + 1)
    {
        if(nset == k)
        {
            ans = true;
            return;
        }
        return;
    }
    FOR(i,1,n)
    {
        if(!mark[i] && cur_sum + a[i] <= needsum)
        {
            mark[i] = 1;
            if(cur_sum + a[i] == needsum) Try(i + 1, nset + 1, 0, needsum);
            else Try(i + 1, nset, cur_sum + a[i], needsum);
            mark[i] = 0;
        }
    }
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        ans = false;
        int sum = 0;
        FOR(i,1,n) 
        {
            cin >> a[i];
            sum += a[i];
        }
        if(sum % k) 
        {
            cout << 0 << endl;
            continue;
        }
        int needsum = sum / k;
        Try(1, 0, 0, needsum);
        if(ans) cout << 1;
        else cout << 0;
        cout << endl;
    }    
}