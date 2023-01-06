#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string s;
int k;


int main(int argc, char** argv){
    cin >> s >> k;
    int i;
    for(i = 1; i <= k; i ++){
        string tmps = s;
        reverse(s.begin(), s.end());
        
        ll tmp = stoll(s) + stoll(tmps);
        s = to_string(tmp);
        tmps = s;
        reverse(s.begin(), s.end());
        
        if(tmps == s || i == k){
            reverse(s.begin(), s.end());
            
            cout << s << endl;
            break;
        }
    }    
    cout << i << endl;
    return 0;
}


