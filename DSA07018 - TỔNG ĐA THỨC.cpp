#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define ALL(x) x.begin(), x.end()
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
#define endl '\n'
#define maxn 100005
const int MOD = 1e9 + 7;
const int max = 1005;

struct Node
{
	float heso;
	float somu;
	Node *next;
};

Node *CreateNode(int x, int y)
{
	Node *res = new Node();
	res->heso = x;
	res->somu = y;
	res->next = NULL;
	return res;
}

void AddBack(Node *head, int x, int y)
{
	Node *tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = CreateNode(x, y);
}

float StringToFloat(string s)
{
	float res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		res = res * 10 + (s[i] - '0');
	}
	return res;
}

int main()
{
	faster();
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		Node *p = new Node();
		Node *q = new Node();
		Node *r = new Node();
		Node *pHead = NULL;
		Node *qHead = NULL;
		string line;
		getline(cin, line);
		stringstream ss(line);
		string tmp;
		while (ss >> tmp)
		{
			if(tmp == "+") continue;
			int k = tmp.find("*");
			float x = StringToFloat(tmp.substr(0, k));
			k = tmp.find("^");
			tmp = tmp.substr(k + 1);
			float y = StringToFloat(tmp);
			if(pHead == NULL)
			{
				pHead = CreateNode(x, y);
			}
			else AddBack(pHead, x, y);
		}
		getline(cin, line);
		stringstream ss1(line);
		while (ss1 >> tmp)
		{
			if(tmp == "+") continue;
			int k = tmp.find("*");
			float x = StringToFloat(tmp.substr(0, k));
			k = tmp.find("^");
			tmp = tmp.substr(k + 1);
			float y = StringToFloat(tmp);
			if(qHead == NULL)
			{
				qHead = CreateNode(x, y);
			}
			else AddBack(qHead, x, y);
		}
		while(pHead != NULL && qHead != NULL)
		{
			if(pHead->somu < qHead->somu) 
			{
				AddBack(r, qHead->heso, qHead->somu);
				qHead = qHead->next;
			}
			else if(pHead->somu > qHead->somu)
			{
				AddBack(r, pHead->heso, pHead->somu);
				pHead = pHead->next;
			}
			else
			{
				AddBack(r, pHead->heso + qHead->heso, pHead->somu);
				pHead = pHead->next;
				qHead = qHead->next;
			}
		}
		Node* rHead = r->next;
		while(rHead -> next != NULL)
		{
			cout << rHead->heso << "*x^" << rHead->somu << " + ";
			rHead = rHead->next;
		}
		cout << rHead->heso << "*x^" << rHead->somu << endl;
	}
}