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

struct SV
{
    int start, end;
};

bool cmp(SV a, SV b)
{
    return a.end < b.end;
}

int main() 
{
    faster();
	int t; cin >> t;
	while (t--) 
    {
        int n; cin >> n;
        int res = 0;
        int h = 0;
        SV sv[n + 5];
        FOR(i, 0, n - 1) cin >> sv[i].start;
        FOR(i, 0, n - 1) cin >> sv[i].end;
        sort(sv, sv + n, cmp);
        FOR(i, 0, n - 1) 
        {
            if(sv[i].start >= h)
            {
                if(sv[i].end > sv[i + 1].end) 
                {
                    res++;
                    h = sv[i + 1].end;
                    i++;
                }
                else
                {
                    res++;
                    h = sv[i].end;
                }
            }
        }
        cout << res << endl;
	}
}