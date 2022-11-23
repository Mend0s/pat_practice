/******~by zhh~******/
#include <bits/stdc++.h>
/********o_O*********/
using namespace std;
typedef long long ll;
const int N = 10010;
int n, m;
struct poly{
	int p;
	double q;
} poly1[N], poly2[N], ans[2 * N];
int compare(int i, int j){
	if(i > j)return 1;
	else if (i == j)return 0;
	else return -1;
	
}
void sol(){
	int i = 0, j = 0, idx = 0, tp;
	while(i < n && j < m){
		switch(compare(poly1[i].p, poly2[j].p)){
			case 1:
				ans[idx++] = poly1[i++];
				break;
			case 0:{
				
			
				tp = poly1[i].p;
				double sum = poly1[i++].q + poly2[j++].q;
				
				if(sum)ans[idx++] = {tp, sum};
				else
					break;
				break;
			}
				
			case -1:
				ans[idx++] = poly2[j ++];
				break;
		}
		
	}
	while(i < n)ans[idx++] = poly1[i++];
	while(j < m)ans[idx++] = poly2[j++];
	cout << idx << ' ';
	for(int i = 0; i < idx; i++){
		printf("%d %.1f ", ans[i].p, ans[i].q);
	}
	
	
	
	return ;
}
int main() {
	cin.tie(0);
    freopen("c:\\tmp\\tmp.in", "r", stdin);
//    freopen("c:\\tmp\\tmp.out", "w", stdout);
	
	cin >> n;
	
	for(int i = 0; i < n; i++){
		int p;
		double q;
		cin >> p >> q;
		poly1[i] = {p, q};
	}
	
	cin >> m;
	for(int j = 0; j < m; j ++){
		int p;
		double q;
		cin >> p >> q;
		poly2[j] = {p, q};
	}
	sol();

	return 0;
}
