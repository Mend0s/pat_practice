/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 20010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n, m;
int a[N], b[N];
int tmp[N];

/*functions*/
int cmp(int idx1, int idx2){
	if(a[idx1] == b[idx2]) return 0;
	else if (a[idx1] > b[idx2])return 1;
	else return -1;
}
/*****main******/
int main(int argc, char** argv){
	cin.tie(0);
	ios::sync_with_stdio(false);
	freopen("c:\\tmp\\tmp.in", "r", stdin);
	cin >> n;
	for(int i = 1; i <= n; i ++)cin >> a[i];
	
	cin >> m;
	for(int j = 1; j <= m; j ++)cin >> b[j];
	
	int p1 = 1, p2 = 1;
	int ptr = 1;
	while(p1 <= n && p2 <= m){
		switch(cmp(p1, p2)){
			case -1:
				tmp[ptr++] = a[p1++];
				
				break;
			case 0:
				tmp[ptr++] = a[p1++];
				p2++;
				break;
			case 1:
				tmp[ptr++] = b[p2++];
				break;
			
		}
		
	}
	while(p1 <= n)tmp[ptr++] = a[p1++];
	while(p2 <= m)tmp[ptr++] = b[p2++];
	
//	for(int i = 1; i < ptr; i ++)cout << tmp[i] << ' ' ;
//	cout << endl;
	cout << tmp[(ptr + 1) / 2] << endl;
	

	return 0;
}

