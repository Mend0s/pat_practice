/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 110, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, m, level, population;
int fa[N];
vector<vector<int> > son;
int ansLevel, ansPopulation;
/*functions*/
int find(int x){
	if(x != fa[x]) return find(fa[x]);
	return x;
}
int dfs(int x){
	if(population > ansPopulation){
		ansPopulation = population;
		ansLevel = level;
		
	}
	for(auto p: g[x]){
		
	}
	
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	memset(fa, 0, sizeof fa);
	cin >> n >> m;
	for(int i = 1; i <= n; i ++){
		fa[i] = i;
	}
	for(int i = 0; i < m; i ++){
		int id;
		int k;
		cin >> id >> k;
		
		for(int i = 0; i < k; i ++){
			int son;
			cin >> son;
			fa[son] = id;
			
		}
	}
	for(int i = 1; i <= n; i ++) {
		level = 1;
		population = 0;
		dfs(i);
		
	}
	
	
	return 0;
}

