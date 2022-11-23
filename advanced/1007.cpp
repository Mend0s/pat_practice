#include <bits/stdc++.h>
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
int n, mx;
int a[N], dp[N];
int st, ed;

int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		
	}
	dp[0] = -INF;
	for(int i = 1; i <= n; i++){
		dp[i] = max(dp[i-1] + a[i], a[i]);
		if(dp[i] > mx){
			ed = i;
			mx = dp[i];
			
		}
	}
	memset(dp, -0x3f, sizeof dp);
	dp[n+1] = -INF;
	for(int i = n; i >= 1; i--){
		dp[i] = max(dp[i+1] + a[i], a[i]);
		if(dp[i] >= mx){
			st = i;
			
		}
	}
//	mx = mx < 0? 0 : mx;	
	if(mx < 0) cout << mx << ' ' << a[1] << ' ' << a[n] << endl;
	else {
		
		cout << mx << ' ';
		cout << a[st] << ' ' << a[ed] << endl;
	}

	return 0;
}

