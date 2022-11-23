/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
ll n, m;
bool flag = true;
/*functions*/

/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n >> m;
	vector<ll> tmp;
	do{
		int t = n % m;
		n /= m;
		tmp.push_back(t);
		
	}while (n);
	reverse(tmp.begin(), tmp.end());
	for(int i = 0; i < tmp.size()/2; i++){
		if(tmp[i] != tmp[tmp.size() - i - 1])flag = false;
	}
	if(flag)puts("Yes");
	else puts("No");

	int size = tmp.size();
	for(int i = 0; i < size; i++)
	{
		cout << tmp[i] ;
		if(i != size - 1)cout << ' ' ;
	}

	return 0;
}

