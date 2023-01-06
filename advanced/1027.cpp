/**
 *
 *Filename: 1027.cpp
 *created in 2023/01/06 22:34:52
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;
string trans(int &x){
    string dict = "0123456789ABC";
    cout << dict[x / 13] << dict[x % 13];
    return "";

}

int main(int argc,char** argv){
    cin.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << "#" << trans(a)
                << trans(b)
                << trans(c)
                <<endl;


    return 0;
}