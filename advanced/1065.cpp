#include <bits/stdc++.h>
using namespace std;
int n, tmp;
string a, b, c;
vector<int > A, B, ans;
//consider the nagative situation-_-....

void sol(){
	int l1 = a.size(), l2 = b.size();
	A.clear(), B.clear(), ans.clear();
	for(int i = 0; i < l1; i ++)A.push_back(a[i] - '0');
	for(int i = 0; i < l2; i ++)B.push_back(b[i] - '0');
	int tmp = 0;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	
	
	
	for(int i = 0; i < l1 || i < l2; i ++){
		if(i < l1)tmp += A[i];
		if(i < l2)tmp += B[i];
		ans.push_back(tmp%10);
		tmp /= 10;
	}
	
	
	if(tmp)ans.push_back(tmp);
	string cmp;
	for(auto& p: ans){
		cmp += '0' + p;
	}
	reverse(cmp.begin(), cmp.end());
	cout << cmp << ' ' << c << endl;
//	if(strcmp(c.c_str(), cmp.c_str()) >= 0){
//		cout << "false";
//	}
//	else cout << "true";
//	cout << endl;
	
	
	
}

int main(){
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a >> b >> c;
		printf("Case #%d: ", i);
		sol();
	}
	
	return 0;
}
