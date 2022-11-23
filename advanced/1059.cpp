/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
ll cnt[N];

/*functions*/
bool isPrime(int x){
	if(x < 2)return false;
	for(int i = 2; i <= x / i; i ++){
		if(x % i == 0)return false;
	}
	return true;
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	ll tmp;
	cin >> tmp;
	memset(dict, 0, sizeof dict);
	ll div = 2;
	while(tmp){
		if(!isPrime(div)){
			div++;
			continue;
		}
		else {
			while(tmp % div == 0){
				tmp /= div;
				cnt[div] ++;
			}
			
			div ++;
		}
		
	}
	
	
	return 0;
}

