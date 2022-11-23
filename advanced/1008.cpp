#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int N = 10010;
int a[N];

int n;

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res = 0, curlevel = 0;
    for (int j = 0; j < n; j++)
    {
        if (j == 0)
        {
            curlevel = a[j];
            res += 6 * a[j];
        }
        else if (a[j] > a[j - 1])
        {
            curlevel = a[j];
            res += 6 * (a[j] - a[j - 1]);
        }
        else if (a[j] < a[j - 1])
        {
            curlevel = a[j];
            res += 4 * (a[j - 1] - a[j]);
        }

        res += 5;
    }
    cout << res << endl;

    return 0;
}
