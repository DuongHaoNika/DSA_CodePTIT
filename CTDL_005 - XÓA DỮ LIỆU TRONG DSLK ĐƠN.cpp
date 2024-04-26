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
#define pii pair<int, int>
#define PI 3.141592653589793238
#define endl '\n'

struct Node
{
    int data;
    Node* next;
};

typedef Node* node;

inline node CreateNode(int x)
{
    node res = new Node;
    res->data = x;
    res->next = NULL;
    return res;
}

inline void AddBack(node& head, int x)
{
    if(head == NULL)
    {
        head = CreateNode(x);
        return;
    }
    node tmp = head;
    while(tmp -> next != NULL) tmp = tmp -> next;
    tmp -> next = CreateNode(x);
}

int main()
{
    faster();
    int n; cin >> n;
    int x;
    node head = NULL;
    while(n--)
    {
        cin >> x;
        AddBack(head, x);
    }
    cin >> x;
    while(head != NULL)
    {
        if(head -> data != x)
        {
            cout << head->data << " ";
        }
        head = head -> next;
    }
    delete head;
    return 0;
}