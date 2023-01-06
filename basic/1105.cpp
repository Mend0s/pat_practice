#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 100010;

int n = 0, m = 0;
int num;
int h1, h2, e[N], ne[N];
void add(int st, int val, int ed){
    e[st] = val, ne[st] = ed;
    return ;
}
int getLength(int head){
    int cnt = 0;
    int tmp = head;
    while(tmp != -1){
        //cout << e[tmp] << " ";
        tmp = ne[tmp];
        cnt++;
    }
    //cout << endl;
    return cnt;

}
int reverse(int head){
    int pre = -1, hh = head, nex = ne[head];
    int tmp;
    while(nex != -1){
         ne[hh] = pre, pre = hh, hh = nex, nex = ne[hh];
    }
    return hh;
}

void merge(int longerhead, int shorterhead){
    int h1 = longerhead, h2 = reverse(shorterhead);
    
    while(h1 != -1 && h2 != -1){
        h1 = ne[h1];
        int tmp = ne[h2];
        ne[h2] = ne[h1];
        ne[h1] = h2;
        h1 = ne[h2], h2 = tmp;
    }
    int hh = longerhead;
    while(hh != -1){
        printf("%05d %d ", hh, e[hh]);
        if(ne[hh] != -1)printf("%05d\n", ne[hh]);  
        else printf("-1\n");

        hh = ne[hh];
    }    

    return ;    

}

int main(int argc, char* argv[]){
    cin.tie(0);
    cin >> h1 >> h2 >> num;
    for(int i = 0; i < num; i ++){
        int st, val, ed;
        cin >> st >> val >> ed;
        add(st, val, ed);

    }
    int n = getLength(h1), m = getLength(h2);
    if(n > m){
        merge(h1, h2);
    }
    else {
        merge(h2, h1);

    }
}

