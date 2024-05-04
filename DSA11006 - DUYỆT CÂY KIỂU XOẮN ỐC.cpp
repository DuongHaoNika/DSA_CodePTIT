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

struct Node
{
    int value;
    Node* left;
    Node* right;

    Node (int val)
    {
        value = val;
        left = right = NULL;
    }
};

void AddNode(Node* cur, int par, int value, char typ)
{
	if(cur == NULL) return;
	if(cur->value == par)
	{
		if(typ == 'L') cur->left = new Node(value);
		else cur->right = new Node(value);
	}
	else
	{
		AddNode(cur->left, par, value, typ);
		AddNode(cur->right, par, value, typ);
	}
}

void LevelOrder(Node* root)
{
	vi v[100];
	set<int> s;
	pair<Node*, int> p;
	queue<pair<Node*, int>> q;
	q.push({root, 1});
	int high = 1;
	while(!q.empty())
	{
		Node* x = q.front().fi;
		int hg = q.front().se;
		high = max(hg, high);
		v[hg].pb(x->value);
		q.pop();
		if(x->left) q.push({x->left, hg + 1});
		if(x->right) q.push({x->right, hg + 1});
	}
	FOR(i, 1, high)
	{
		if(i & 1)
		{
			FORD(j, v[i].sz - 1, 0) cout << v[i][j] << " ";
		}
		else
		{
			FOR(j, 0, v[i].sz - 1) cout << v[i][j] << " ";
		}
	}
	cout << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int m; cin >> m;
        Node* root = NULL;
        bool fi = true;
        while(m--)
        {
            int par, chr;
            char typ; 
            cin >> par >> chr >> typ;
            if(root == NULL) root = new Node(par);
            AddNode(root, par, chr, typ);
        }
		LevelOrder(root);
    }
}
