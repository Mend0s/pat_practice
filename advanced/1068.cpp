/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, dp[N];
int a[N];

/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	
	cin >> n;
	memset(dp, 0, sizeof dp);
	
	dp[0] = true;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		
	}
	sort(a, a + n);
	

	return 0;
}

