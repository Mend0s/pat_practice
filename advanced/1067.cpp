/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 100010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, a[N], t, cnt = 0;

/*functions*/
void sol(){
	for(int i = 1; i < n; i++){
		if(i!=a[i]){
			while(a[0]){
				//if pos[0] isn't 0 ,swap the number where the 0 pos in and the number 
				swap(a[0], a[a[0]]);
				cnt ++;
			}
			if(i != a[i]){
				swap(a[0], a[i]);
				cnt++;
			}
		}
	}
	cout << cnt ;
	return ;
}


/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	
	for(int i = 0; i < n; i++)	
		cin >> t, a[t] = i;
	
	sol();
	return 0;
}

