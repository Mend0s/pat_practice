/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
vector<int> ans;

int m;
/*functions*/
vector<int> find(int minfac, int div){
	vector<int> tmp;
	for(int j = minfac; div / j; j ++){
//		cout << j << ' ' << div << endl;
		if(div % j == 0){
			tmp.push_back(j);
			div /= j;
		}
		else break;
	}
	if(div > 1){
		vector<int> nullvector;
		return nullvector;
	}
	else 
		return tmp;
}

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	int n;
	cin >> n;
	for(int i = 2; i <= n / i; i ++){
		vector<int> tmp;
		tmp = find(i, n);
		cout << tmp.size() << endl;
		if(tmp.size() > ans.size()){
			ans.clear();
			ans = tmp;
		}
		
	}
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i ++){
		cout << ans[i] ;
		if(i != ans.size() - 1)cout << '*';
	}
	cout << endl;
	
	return 0;
}

