#include <bits/stdc++.h>
using namespace std;
const int N = 10010;
int n, arr[N];
int tree[N];
int q[N];

void constructTree(int node){
    

}

void bfs(){
    int hh, tt = 0;
    q[0] = 1;//root of the tree
    while(hh <= tt){
        int t = q[hh++];
        if(tree[2 * t] != -1){
            q[tt++] = 2 * t;

        }
        if(tree[2 * t + 1] != -1){
            q[tt++] = 2 * t + 1;

        }
    }
    for(int i = 0; i < hh; i ++){
        cout << tree[q[i]] << ' ' << endl;

    }
}

int main(int argc,char** argv){
    cin.tie(0);
    cin >> n;
    memset(tree, -1, sizeof tree);

    for(int i = 0; i < n; i ++){
        int node;
        cin >> node;
        constructTree(node);
    }
    bfs();


    return 0;
}
