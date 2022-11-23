/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 310, M = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n;
int q[N], z[N], h[N];
int tree[M];
bool st[N];
void build(int post[N], int postst, int posted, int in[N], int inst, int ined, int node){
	if(inst > ined)return ;
	if(postst > posted )return ;
	
	tree[node] = post[posted--];
	//find the mid node of subtree:
	int mid ;
	for(int i = inst; i <= ined; i ++){
		if(in[i] == tree[node]){
			mid = i;
			break;
		}
	}
	
	build(post, postst, postst + mid - inst - 1, in, inst, mid - 1, node * 2);
	build(post, postst + (mid - inst) , posted, in, mid + 1, ined, node * 2 + 1);
	
}

/*functions*/


void bfs(int tree[N], int node){
	int q[N];
	int hh = 0, tt = 0;
	q[0] = node;
	
	while(hh <= tt){
		auto t = q[hh ++ ];
		if(tree[t * 2] != -1)q[++tt] = t * 2;
		if(tree[t * 2 + 1] != -1)q[++tt] = t * 2 + 1;
	}
	
	for(int i = 0; i < hh; i ++)
	{
		cout << tree[q[i]];
		if(i != hh - 1)cout << ' ';
	}
	 
	
}

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	memset(st, 0, sizeof st);
	memset(tree, -1, sizeof tree);
	for(int i = 1; i <= n; i ++)cin >> h[i];
	for(int i = 1; i <= n; i ++)cin >> z[i];
	
	build(h, 1, n, z, 1, n, 1);
	
	bfs(tree, 1);

	return 0;
}

