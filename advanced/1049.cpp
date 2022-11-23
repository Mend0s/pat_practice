/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int n;
/**
 * @brief dp[i][j][k]
 *
 *
 */
int dp[15][15][15];

/*functions*/
void sol()
{
    int left, cur, right, base = 1;
    int res = 0;
    while (n / base)
    {
        left = n / base / 10, cur = n / base % 10, right = n % base;
        if(cur == 0) res += left * base;
        else if (cur == 1) res += left * base + right + 1;
        else res += left * base + base;
        base *= 10;
    }
    cout << res << endl;
    
}
/*****main******/
int main(int argc, char **argv)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    freopen("c:\\tmp\\tmp.in", "r", stdin);
    cin >> n;
    memset(dp, 0, sizeof dp);
    sol();
    return 0;
}