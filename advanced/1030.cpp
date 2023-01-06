/**
 *
 *Filename: 1030.cpp
 *created in 2023/01/06 23:18:40
 *By tabbleman
 *
 */
#include <bits/stdc++.h>
using namespace std;
using piii = pair<int, pair<int, int> >;
const int N = 510, M = 250010, INF = 0x3f3f3f3f;
int n, m, s, d;
int h[N], e[M], ne[M], w1[M], w2[M], idx = 0;
bool st[N];
int dist[N];
int cst[N];
int pre[N];
void add(int a, int b, int c1, int c2){
    w1[idx] = c1, w2[idx] = c2;
    e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void solve(int s){
    memset(dist, 0x3f, sizeof dist);
    memset(cst, 0x3f, sizeof cst);
    memset(st, 0, sizeof st);

    dist[s] = 0;
    priority_queue<piii, vector<piii>, greater<piii> > heap;
    // distance, cost, vertex;
    heap.push({0, {0, s}});
    while(!heap.empty()){
        piii t = heap.top();
        heap.pop();
        int ver = t.second.second, distance = t.first, cost = t.second.first;
        if(st[ver])continue;

        // st[ver] = 1;
        // cout << "current vertex" << ver << endl;
        // cout << "ver: " << ver << ", distance " << distance << endl;

        for(int i = h[ver]; i != -1; i = ne[i]){
            int j = e[i];
            if(dist[j] == distance + w1[i] && cst[j] > cost + w2[i]){
                pre[j] = ver;
                cst[j] = cost + w2[i];
                continue;
            }
            if(dist[j] > distance + w1[i]){
                cst[j] = cost + w2[i];

                dist[j] = distance + w1[i];
                heap.push({dist[j], {cst[j], j}});
                pre[j] = ver;
                // cout << "pre["<< j << "] = "<< ver << endl;
            }
        }
    }
    // cout << dist[d] << endl;

}

int main(int argc,char** argv){
    cin.tie(0);
    cin >> n >> m >> s >> d;
    memset(h, -1, sizeof h);
    for(int i = 0; i < n; i ++)pre[i] = i;
    pre[s] = -1;
    for(int i = 0; i < m; i ++){
        int start, ed;
        int di, co;
        cin >> start >> ed >> di >> co;
        add(start, ed, di, co);
        add(ed, start, di, co);
    }
    
    solve(s);
    int end = d;
    string ansstr = "";
    int totalcost = 0;
    while(end != -1){
        
        ansstr = ansstr + " " + to_string(end);
        end = pre[end];
    }
    reverse(ansstr.begin(), ansstr.end());
    cout << ansstr << dist[d] << ' ' << cst[d] << endl;
    return 0;
}
