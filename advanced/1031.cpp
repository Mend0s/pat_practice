/**
 *
 *Filename: 1031.cpp
 *created in 2023/01/07 00:41:59
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;


int main(int argc,char** argv){
	cin.tie(0);
	string s;
	cin >> s;
	char map[50][50];
	for(int i = 0; i < 50; i ++){
		for(int j = 0; j < 50; j ++){
			map[i][j] = ' ';
		}
	}
	int len = (s.size() - 2 ) / 3;
	map[len][0] = s[len];
	map[len][len] = s[len*2];
	for(int i = 0; i < len; i ++){
		map[i][0] = s[i];
		map[len][i+1] = s[len+i];
		map[len - i][len] = s[len*2+i];
	}
	for(int i = 0; i <= len; i ++){
		for(int j = 0; j <= len; j ++){
			cout << map[i][j];
		}
		cout << endl;
	}

	return 0;
}
