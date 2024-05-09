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

struct Edge {
    int u, v, c;
    Edge(int _u, int _v, int _c): u(_u), v(_v), c(_c) {};
};

struct Dsu {
    vector<int> par;

    void init(int n) {
        par.resize(n + 5, 0);
        for (int i = 1; i <= n; i++) par[i] = i;
    }

    int find(int u) {
        if (par[u] == u) return u;
        return par[u] = find(par[u]);
    }

    bool join(int u, int v) {
        u = find(u); v = find(v);
        if (u == v) return false;
        par[v] = u;
        return true;
    }
} dsu;

int n, m, totalWeight = 0;

int main() {
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        totalWeight = 0;
        vector <Edge> edges;
        for (int i = 1; i <= m; i++) {
            int u, v, c;
            cin >> u >> v >> c;
            edges.pb({u, v, c});
        }

        dsu.init(n);

        sort(edges.begin(), edges.end(), [](Edge & x, Edge & y) {
            return x.c < y.c;
        });

        for (auto e : edges) {
            if (!dsu.join(e.u, e.v)) continue;
            totalWeight += e.c;
        }

        cout << totalWeight << '\n';
    }
}