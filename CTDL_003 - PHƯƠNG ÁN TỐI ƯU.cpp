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
#define all(x) (x).begin(), (x).end()
#define PI 3.141592653589793238
#define endl '\n'

int n, w;

int main()
{
    //ifstream fin("data.in");
    cin >> n >> w;
    ll maxRes = 0;
    ll c[n + 5], a[n + 5];
    FOR(i, 1, n) cin >> c[i];
    FOR(i, 1, n) cin >> a[i];
    int v[n + 5];
    FOR(i, 1, n) v[i] = 0;
    int b[n + 5];
    while(true)
    {
        bool check = false;
        FORD(i, n, 1)
        {
            if(v[i] == 0)
            {
                v[i] = 1;
                FOR(j, i + 1, n) v[j] = 0;
                check = true;
                break;
            }
        }
        if(!check) break;
        ll sumC = 0, sumA = 0;
        FOR(i, 1, n)
        {
            if(v[i] == 1)
            {
                sumC += c[i];
                sumA += a[i];
            }
        }
        if(sumA <= w) 
        {
            if(sumC > maxRes)
            {
                maxRes = sumC;
                FOR(i, 1, n) b[i] = v[i];
                //std::cout << sumA << " " << sumC << endl;
            } 
        }
    }
    std::cout << maxRes << endl;
    FOR(i, 1, n) std::cout << b[i] << " ";
    //fin.close();
}