/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
string s1, s2;
/*functions*/

/*****main******/
int main(int argc, char** argv){
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("c:\\tmp\\tmp.in", "r", stdin);
    
    getline(cin, s1);
    cin >> s2;
    unordered_map<char, int> hashmap;
    for(auto &p:s2){
        hashmap[p] = 1;
    }
    string res = "";
    for(auto p:s1){
        if(!hashmap.count(p))res += p;
    }
    cout << res << endl;

    return 0;
}