/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;


//jan, feb, mar, apr, may, jun, jly, aug, sep, oct, nov, dec
//"tam, hel, maa, huh, tou, kes, hei, elo, syy, lok, lok, jou"
/*variables*/
unordered_map<int, string> num_to_mars_higher = {
	{1, "tam"}, 
	{2, "hel"}, 
	{3, "maa"}, 
	{4, "huh"}, 
	{5, "tou"}, 
	{6, "kes"}, 
	{7, "hei"}, 
	{8, "elo"}, 
	{9, "syy"}, 
	{10, "lok"}, 
	{11, "lok"}, 
	{12, "jou"}, 
} ;
unordered_map<int, string> num_to_mars = {
	{0, "tret"}, 
	{1, "jan"}, 
	{2, "feb"}, 
	{3, "mar"}, 
	{4, "apr"}, 
	{5, "may"}, 
	{6, "jun"}, 
	{7, "jly"}, 
	{8, "aug"}, 
	{9, "sep"}, 
	{10, "oct"}, 
	{11, "nov"}, 
	{12, "dec"}, 
};
unordered_map<string, int> mars_to_num = {
	{"tret", 0},
	{"jan", 1}, 
	{"feb", 2}, 
	{"mar", 3}, 
	{"apr", 4}, 
	{"may", 5}, 
	{"jun", 6}, 
	{"jly", 7}, 
	{"aug", 8}, 
	{"sep", 9}, 
	{ "oct", 10}, 
	{ "nov", 11}, 
	{ "dec", 12}, 

};
unordered_map<string, int> mars_to_num_higher = {
	{"tam", 1 }, 
	{"hel", 2 }, 
	{"maa", 3 }, 
	{"huh", 4 }, 
	{"tou", 5 }, 
	{"kes", 6 }, 
	{"hei", 7 }, 
	{"elo", 8 }, 
	{"syy", 9 }, 
	{"lok", 10}, 
	{"lok", 11}, 
	{"jou", 12}, 
} ;

/*functions*/
void solnum(string s){
	int t = stoi(s);
	int a = t / 13, b = t % 13;
	if(a)cout << num_to_mars_higher[a] << ' ' << num_to_mars[b] << endl;
	else cout << num_to_mars[b] << endl;
	return ;
}
void solmars(string s){
	if(s.size() >= 4){
		cout << mars_to_num_higher[s.substr(0, 3)]*13 + mars_to_num[s.substr(4, 3)] << endl;
	}
	else cout << mars_to_num[s.substr(0, 3)] << endl;
	
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
//	freopen("c:\\tmp\\tmp.in", "r", stdin);
	int t;
	string s;
	cin >> t;
	for(int i = 0; i < t; i ++){
		getline(cin, s);
		cout << s << endl;
		if(s[0] >= '0' && s[0] <= '9')
			solnum(s);
		else solmars(s);
		
	}

	return 0;
}

