/*****Code By Cheems*****/
#include <bits/stdc++.h>
/**********-_-***********/
using namespace std;
const int N = 10010, INF = 0x3f3f3f3f, mod = 1e9 + 7;
typedef long long ll;
typedef pair<int, int> PII;

/*variables*/
int cnt[10];
int cmp[10];
string s;
/*functions*/
string mul(string s, int t)
{
    reverse(s.begin(), s.end());
    int tmp = 0;
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        tmp = tmp + (s[i] - '0') * t;
        res += '0' + tmp % 10;
        tmp /= 10;
    }
    if (tmp)
        res += '0' + tmp;
    reverse(res.begin(), res.end());
    return res;
}

bool check(string tmp)
{

    if (s.size() != tmp.size())
        return false;
    for (char &ch : tmp)
        cmp[ch - '0']++;
    for (int i = 0; i < 10; i++)
        if (cmp[i] != cnt[i])
            return false;
    return true;
}
/*****main******/
int main(int argc, char **argv)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    //     freopen("c:\\tmp\\tmp.in", "r", stdin);
    memset(cnt, 0, sizeof cnt);
    memset(cmp, 0, sizeof cmp);
    cin >> s;
    for (char &ch : s)
        cnt[ch - '0']++;
    string su = mul(s, 2);
    if (check(su))
    {
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;

    cout << su << endl;
    return 0;
}