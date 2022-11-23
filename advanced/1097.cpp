/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 100010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int ne[N], w[N];
unordered_map<int , int> count_map;
unordered_map<int , int> st;
/*functions*/
void clear(int head){
	for(int i = head; i != -1; i = ne[i]){
		count_map[w[i]] ++;
	}
	int hh = head;
	int nne[N], nw[N];
	for(int i = head; i != -1; i = ne[i]){
		nne[i] = ne[i];
		nw[i] = w[i];
		
	}
	
	
	
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	
	int n;
	int h;
	cin >> h >> n;
	
	memset(ne, -1, sizeof ne);
	memset(w, 0, sizeof w);
//	memset(cnt, 0, sizeof cnt);
	
	for(int i = 0; i < n; i ++){
		int addr ,key, nex;
		cin >> addr >> key >> nex;
		ne[addr] = nex;
		w[addr] = key;
	}
//	clear(h);
	for(int i = h; i != -1; i = ne[i]){
		printf("%05d %d %05d\n", i, w[i], ne[i]);
		
		
	}
	return 0;
}

