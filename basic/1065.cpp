/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 200010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, m, tmp;
int graph[N];
int guests[N];
/*functions*/
bool binary(int dist[],int size, int target){
	int l = 0, r = size - 1;
	while(l < r){
		int mid = (l + r) >> 1;
		if(dist[mid] < target)l = mid + 1;
		else r = mid;
	}
	return dist[l] == target;
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	memset(graph, 0, sizeof graph);
	
	for(int i = 0; i < n; i++){
		int b, g;
		cin >> b >> g;
		graph[b] = g;
		graph[g] = b;
	}
	cin >> m;
	vector<int> ans;
	
	for(int i = 0; i < m; i++){
		cin >> guests[i];
	}
	sort(guests, guests + m);
	
	for(int i = 0; i < m; i ++){
		if(!graph[guests[i]])
			ans.push_back(guests[i]);
		if(lower_bound(guests, guests + m, graph[guests[i]]) )
		{
			cout << 
		}
	}
	
	
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] ;
		if(i != ans.size() - 1)cout << ' ';
		
		
	}

	return 0;
}

