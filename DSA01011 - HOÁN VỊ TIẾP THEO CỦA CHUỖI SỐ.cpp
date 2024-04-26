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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

int main()
{
    faster();
    int t;
    cin >> t;
    FOR(u, 1, t)
    {
        cout << u << " ";
        int k;
        string s;
        cin >> k >> s;
        bool check = false;
        FORD(i, s.sz - 2, 0)
        {
            if(s[i] < s[i + 1])
            {
                check = true;
                char tmp = s[i + 1];
                int idx = i + 1;
                FOR(j, i + 1, s.sz - 1)
                {
                    if(s[j] <= tmp && s[j] > s[i])
                    {
                        tmp = s[j];
                        idx = j;
                    }
                }
                swap(s[i], s[idx]);
                int l = i + 1, r = s.sz - 1;
                while(l < r)
                {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
                break;
            }
        }
        if(check) cout << s << endl;
        else cout << "BIGGEST" << endl;
    }
}