/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n;
/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	
	cin >> n;
	int i;
	int ge = n%10, shi = n % 100 / 10, bai = n / 100;
	
	if(bai)for(i = 0; i < bai; i ++)printf("B");
	if(shi)for(i = 0; i < shi; i ++)printf("S");
	if(ge)for(i = 0; i < ge; i ++)printf("%c", '1' + i);
	

	return 0;
}

