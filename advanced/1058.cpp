/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/

/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	int g1, s1, k1;
	int g2, s2, k2;
	
	scanf("%d.%d.%d", &g1, &s1, &k1);
	scanf("%d.%d.%d", &g2, &s2, &k2);
	int ansg = g1 + g2, anst = s1 + s2, ansk = k1 + k2;
	if(ansk >= 29) ansk -= 29, anst ++;
	if(anst >= 17) anst -= 17, ansg ++;
	printf("%d.%d.%d\n", ansg, anst, ansk );
	
	

	return 0;
}

