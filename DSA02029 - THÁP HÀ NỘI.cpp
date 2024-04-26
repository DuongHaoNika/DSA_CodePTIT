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

void Try(int i, char a, char b, char c)
{
    if(i == 1) 
    {
        cout << a << " -> " << c << endl;
        return;
    }
    Try(i - 1, a, c, b);
    Try(1, a, b, c);
    Try(i - 1, b, a, c);
}

int main()
{
    int n; 
    char a = 'A', b = 'B', c = 'C';
    cin >> n;
    Try(n, a, b, c);
}