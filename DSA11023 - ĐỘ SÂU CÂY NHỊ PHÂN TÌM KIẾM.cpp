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
int maxRes = 1;
int n; 

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

void addNode(Node* &cur, int val)
{
    if (cur == NULL)
    {
        cur = new Node(val);
        return;
    }
    if (cur->value > val)
        addNode(cur->left, val);
    else
        addNode(cur->right, val);
}

int solveHigh(Node* root, int res)
{
	if(root->left) solveHigh(root->left, res+1);
	if(root->right) solveHigh(root->right, res+1);
	maxRes = max(maxRes, res);
	return maxRes;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        cin >> n;
        Node* root = NULL;
		maxRes = 1;
        while(n--)
		{
			int x; cin >> x;
			addNode(root, x);
		}
        cout << solveHigh(root, 0) << endl;
    }
}