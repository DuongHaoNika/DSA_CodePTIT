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
        int n, s, m;
        cin >> n >> s >> m;
        if(s * m > (n - n / 7) * s) cout << -1;
        else
        {
            FOR(i, 1, s - s / 7)
            {
                if(n * i >= m * s)
                {
                    cout << i;
                    break;
                }
            }
        }
        cout << endl;
	}
}