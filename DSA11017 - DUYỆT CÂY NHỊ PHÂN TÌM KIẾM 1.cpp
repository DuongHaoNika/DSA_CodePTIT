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

int a[1005];

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

Node* build(int l, int r)
{
    if(l > r) return NULL;
    int pos = -1;
    Node* root = new Node(a[l]);
    if(l == r) return root;
    FOR(i, l, r)
    {
        if(a[i] > a[l])
        {
            pos = i;
            break;
        }
    }
    root->left = build(l + 1, pos-1);
    root->right = build(pos, r);
    return root;
}

void PostOrder(Node* root)
{
    if(root == NULL) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->value << " ";
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        Node* root = NULL;
        FOR(i, 1, n) cin >> a[i];
        root = build(1, n);
        PostOrder(root);
        cout << endl;
    }
}
