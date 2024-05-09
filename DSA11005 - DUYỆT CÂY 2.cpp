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
#define maxn 1003 
int n, in[maxn], level[maxn], mark[maxn];
struct Node{
    int val;
    Node *left, *right;
    Node (int _val)
    {
        val = _val;
        left = right = NULL;
    }
};
Node *build(int l,int r)
{
    if (l > r) return NULL;
    int pos = l;
    FOR(i,l+1,r)
        if (mark[in[i]] < mark[in[pos]]) pos = i;
    Node *root = new Node(in[pos]);
    if (l == r) return root;
    root->left = build(l,pos-1);
    root->right = build(pos+1,r);
    return root;
}
vi ans;
void postOrder(Node *cur)
{
    if (cur == NULL)
        return;
    postOrder(cur->left);
    postOrder(cur->right);
    ans.push_back(cur->val);
}
int main()
{
    faster();
    cin.tie(NULL);
    int tc; cin>>tc;
    while (tc--)
    {
        cin>>n;	
        FOR(i,1,n) cin>>in[i];
        FOR(i,1,n) cin>>level[i], mark[level[i]] = i;
        Node *root = build(1,n);
        ans.clear();
        postOrder(root);
        for (int x : ans) cout<<x<<" ";
        cout<<"\n";
    }
}