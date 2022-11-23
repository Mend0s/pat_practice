/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;
//typedef unordered_map<int,int> hashII;
/*variables*/
string n1, n2;
int flag, redix;
unordered_map<char, int> hashmap;

 
/*functions*/
void inithash(){
	for(char i = '0'; i <= '9'; i ++){
		hashmap[i] = i - '0';
	}
	for(char i = 'a'; i <= 'z'; i ++){
		hashmap[i] = i - 'a' + 10;
	}
	return ;
	
}

int transN(string s, int redix){
	int res = 0, t = 1;
	reverse(s.begin(), s.end());
	for(auto &p: s){
		if(hashmap[p] > redix)return -1;
		res = hashmap[p] * t + res;
		t *= redix;
	}
	return res;
	
	
}

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	inithash();
	cin >> n1 >> n2 >> flag >> redix;
	int t1, t2;
	if(flag == 1){
		t1 = transN(n1, redix);
		for(int i = 1; i <= 36; i++){
			if(t1 == transN(n2, i)){
				cout << i << endl;
				return 0;
			}
			
		}
		puts("Impossible");
		
	}
	else {
		t2 = transN(n2, redix);
		for(int i = 1; i <= 36; i++){
			if(t2 == transN(n1, i)){
				cout << i << endl;
				return 0;
			}
		}
		puts("Impossible");
		
	}
	return 0;
}

