/******~by zhh~******/
#include <bits/stdc++.h>
/********o_O*********/
using namespace std;
typedef long long ll;
const int N = 10010;

string itof(int x)
{
	bool nag = false;
	if (x < 0)nag = true, x = -x;
	stringstream ss;
	ss << x;
	string tmp = ss.str();
	cout << tmp << endl;
	int len = tmp.size();
	string ans ;
	if(len <= 3)return tmp;
	
	for(int i = len-1; i >= 0; i--){
		if(i != len - 1 && i != 0&& (i - len + 1) % 3 == 0){
			
			ans += ",";
			ans += tmp[i];
		}
		else {
			ans += tmp[i];
		}
//		cout << ans << endl;
	}
	if(nag)ans += "-";
	reverse(ans.begin(), ans.end());
	
	return ans;
}

int main() {
	cin.tie(0);
    freopen("c:\\tmp\\tmp.in", "r", stdin);
//    freopen("c:\\tmp\\tmp.out", "w", stdout);
	int a, b;
	cin >> a >> b;
	cout << itof(a + b) << endl;

	return 0;
}
