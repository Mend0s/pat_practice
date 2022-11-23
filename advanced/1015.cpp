/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/

/*functions*/
string itos(int i);
string rev(string s);
bool isPrime(int x);


string transN(string s, int redix){
	reverse(s.begin(), s.end());
	int res = 0, t = 1;
	for(auto &p:s){
		res = (p - '0') * t + res;
		t *= redix;
	}
	string tmp;
	
}
string itos(int i){
	stringstream ss;
	ss << i;
	return ss.str();
	
}

bool isPrime(string s){
	
	int x = stoi(s);
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
	string s1;
	int redix;
	while(cin >> s1 >> redix && stoi(s1) >= 0){
		string tmp = transN(s1, redix), rtmp = rev(tmp);
//		cout << tmp << endl;
		if(isPrime(tmp) && isPrime(rtmp))puts("Yes");
		else puts("No");
	}

	return 0;
}

