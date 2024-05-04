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
	queue<pair<Node*, char>> q;
	q.push({root, '0'});
    ll res = 0;
	while(!q.empty())
	{
		Node* x = q.front().fi;
        char stt = q.front().se;
        if(x->left == NULL && x->right == NULL && stt == 'R') res += x->value;
		q.pop();
		if(x->left) q.push({x->left, 'L'});
		if(x->right) q.push({x->right, 'R'});
	}
    cout << res << endl;
}

int sum_right_child(Node* cur)
{
    if (cur == NULL)
        return 0;
    int res = 0;
    if (cur->right != NULL && cur->right->left == NULL && cur->right->right == NULL)
        res += cur->right->value;
    res += sum_right_child(cur->left) + sum_right_child(cur->right);
    return res;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int m; cin >> m;
		map<int, Node*> mark;
        Node* root = NULL;
        while (m--)
        {
            int par,child;
            char type;
            cin>>par>>child>>type;
            if (root == NULL)
            {
                root = new Node(par);
                mark[par] = root;
            }
            Node* cur;
            if (type == 'L')
            {
                mark[par]->left = new Node(child);
                mark[child] = mark[par]->left;
            }
            if (type == 'R')
            {
                mark[par]->right = new Node(child);
                mark[child] = mark[par]->right;
            }
        }
		cout<<sum_right_child(root)<<"\n";;
    }
}