/******~by zhh~******/
#include <bits/stdc++.h>
/********o_O*********/
using namespace std;
typedef long long ll;
const int N = 10010;

unordered_map<char, string> hash_map = {
	{'0', "zero"}, 
	{'1', "one"}, 
	{'2', "two"}, 
	{'3', "three"}, 
	{'4', "four"}, 
	{'5', "five"}, 
	{'6', "six"},
	{'7', "seven"},
	{'8', "eight"}, 
	{'9', "nine"}
};

string s;
int res = 0;
string itos(int x){
	stringstream ss;
	ss << x;
	return ss.str();
}
int main()
{
 	cin.tie(0);
    freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> s;
	for(auto&p : s)res += p - '0';
	string tmp = itos(res);
	for(int i = 0; i < tmp.size(); i ++){
		cout << hash_map[tmp[i]];
		if( i != tmp.size() - 1)cout << ' ';
	}
	return 0;
}
