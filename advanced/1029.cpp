/**
 *
 *Filename: 1029.cpp
 *created in 2023/01/06 23:11:53
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv){
	cin.tie(0);
	int n, m;
	cin >> n;
	vector<int> vecn, vecm, vecall;
	for(int i = 0; i < n; i ++){
		int tmp;
		cin >> tmp;
		vecall.push_back(tmp)	;
	}
	cin >> m;
	for(int i = 0; i < m; i ++){
		int tmp;
		cin >> tmp;
		vecall.push_back(tmp)	;
	}
	sort(vecall.begin(), vecall.end());
	
	cout << vecall[(vecall.size() - 1) / 2] << endl;;

	return 0;
}
