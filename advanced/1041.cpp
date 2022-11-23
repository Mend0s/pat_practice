/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n;
int a[N], cnt[N];
bool flag = false;
/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	memset(cnt, 0, sizeof cnt);
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cnt[a[i]] ++;
	}
	for(int i = 0; i < n; i ++){
		if(cnt[a[i]] == 1){
		flag = true, cout << a[i] << endl;
		break;
	}
	}
	if(!flag)puts("None");
	

	return 0;
}

