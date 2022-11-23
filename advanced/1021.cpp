/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, m, a[N];
int dp[N];

/*functions*/


/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		
	}
	dp[0] = true;
	
	sort(a, a + n);
	for(int i = 0; i < n; i++){
		
		for(int j = m; j >= a[i]; j--){
			
		}
		
	}
	
	

	return 0;
}

