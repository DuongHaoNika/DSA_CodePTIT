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

vector<string> v;

struct Node
{
    string value;
    Node* left;
    Node* right;

    Node (string val)
    {
        value = val;
        left = right = NULL;
    }
};

Node *build(int idx)
{
    if (idx < v.size())
    {
        Node *root = new Node(v[idx]);
        root -> left = build(idx * 2 + 1);
        root -> right = build(idx * 2 + 2);
        return root;
    }
    return NULL;
}

ll Get(Node* root)
{
    if(isdigit(root->value[0])) return stoll(root->value);
    if(root->value == "+") return Get(root->left) + Get(root->right);
    if(root->value == "-") return Get(root->left) - Get(root->right);
    if(root->value == "*") return Get(root->left) * Get(root->right);
    if(root->value == "/") return Get(root->left) / Get(root->right);
    return 0;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        v.clear();
        cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			v.pb(tmp);
		}
        Node* root = build(0);
        cout << Get(root) << endl;
    }
}