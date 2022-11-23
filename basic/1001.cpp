/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/

/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	int n, cnt;
	cin >> n;

	while(n != 1){
		if(n & 1){
			n = 3 * n + 1;
		}
		else 
			n  /= 2;
		cnt++;	
	}
	cout << cnt << endl;
	

	return 0;
}

