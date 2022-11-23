/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 100010, INF = 0x3f3f3f3f, MOD = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
char s[N];
int p[N], a[N], t[N];
//p[i] number of p before index i
//
//
int n = 0;
int ans = 0;
/*
	APPAPATT

*/

/*functions*/
void sol(){
	
	for(int i = 1; i <= n; i ++){
		p[i] = p[i - 1];
		a[i] = a[i - 1];
		t[i] = t[i - 1];
		if(s[i] == 'P')p[i] ++;
		else if(s[i] == 'A')a[i] ++;
		else if(s[i] == 'T')t[i] ++;
	}
	
	for(int i = 1; i <= n; i ++){
		if(s[i] == 'A') ans = (ans + (p[i] - p[1]) * (t[n] - t[i])) % MOD;
	}
	cout << ans << endl;
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> s + 1;
	for(int i = 1; s[i]; i ++)n ++;
	memset(p, 0, sizeof p);
	memset(a, 0, sizeof a);
	memset(t, 0, sizeof t);
	sol();

	return 0;
}

