/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
string s;

/*functions*/
void sol(){
	char buffer[N][N];
	int radius = (s.size() - 2) / 3;
	int len = s.size();
	for(int i = 0; i < len; i ++){
		if(i <= radius ){
			buffer[i][0] = s[i];
			
		}
		else if (i <= radius * 2 + 1){
			buffer[radius][i - radius - 1] = s[i];
		}
		else {
			buffer[radius + 1][radius - i] = s[i];
		}
		
	}
}

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> s;
	sol();

	return 0;
}

