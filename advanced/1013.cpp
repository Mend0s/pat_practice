/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 1010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, m, k;
int G[N][N], G2[N][N];
int visited[N];
int connection;
/*functions*/
void sol(int delnode){
	int sum = 0;
}
void dfs(int node, int deleteNode){
	if(node == deleteNode){
		return ;
	}
	visited[node] = connection;
	for(int i = 1; i <= n; i++){
		if(G2[node][i] && !visited[i]){
			dfs(i, deleteNode);
		}
		
	}
	return ;
	
}


/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
 	freopen("c:\\tmp\\tmp.in", "r", stdin);
	memset(G, 0, sizeof G);
	
	cin >> n >> m >> k;
	for(int i = 0; i < m; i++){
		int s, e;
		cin >> s >> e;
		G[s][e] = G[e][s] = 1;
		
	} 
	
	while(k -- ){
		int del;
		
		memcpy(G2, G, sizeof G);
		connection = 0;//original connection field
						//after delete one node, what you need to do is count the rest of the connection field
		cin >> del;
		memset(visited, 0, sizeof visited);
		for(int i = 1; i <= n; i++)G2[i][del] = G2[del][i] = 0;
		
		//delete the edge of connection!
		
		for(int i = 1; i <= n; i++){
			if(i == del)continue;
			if(!visited[i]){
				connection ++;
				dfs(i, del);
			}
		} 
		//recover the graph
		
		
		cout << connection - 1 << endl;
	}

	return 0;
}

