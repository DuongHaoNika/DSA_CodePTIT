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

int main()
{
    faster();
    int n; cin>>n;
    string s; cin>>s;
    int cntT = 0, cntD = 0, cntX = 0;
    s = " " + s;
    FOR(i,1,n)
        if (s[i] == 'T') cntT++;
        else 
        if (s[i] == 'D') cntD++;
        else cntX++;

    int step = 0;
    FOR(i,1,n)
    {
        if(s[i] == 'X' && cntX)
        {
            cntX--;
            continue;
        }
        if(s[i] == 'T' && cntT && cntX == 0)
        {
            cntT--;
            continue;
        }
        if(s[i] == 'D' && cntD && cntT == 0 && cntX == 0)
        {
            cntD--;
            continue;
        }
        if(s[i] != 'X' && cntX)
        {
            int pos;
            if(s[i] == 'T')
            {
                FOR(j, i + cntX, n)
                {
                    if(s[j] == 'X')
                    {
                        pos = j;
                        break;
                    }
                }
            }
            else 
            {
                FORD(j, n, i + 1)
                {
                    if(s[j] == 'X')
                    {
                        pos = j;
                        break;
                    }
                }
            }
            swap(s[i], s[pos]);
            step++;
            cntX--;
        }
        else if(s[i] != 'T' && cntT)
        {
            int pos;
            FORD(j, n, i + 1)
            {
                if(s[j] == 'T')
                {
                    pos = j;
                    break;
                }
            }
            swap(s[i], s[pos]);
            step++;
            cntT--;
        }
        else if (s[i] != 'D' && cntD)
        {
            int pos;
            FORD(j,n,i+1)
            {
                if (s[j] == 'D')
                {
                    pos = j;
                    break;
                }
            }
            swap(s[i], s[pos]);
            step++;
            cntD--;
        }  
    }
    cout << step;
}