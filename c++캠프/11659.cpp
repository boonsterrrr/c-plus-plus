#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

// 11659
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, t, p, k = 0;
    cin >> n >> m;
    int a[100001] = {
        0,
    };
    int sum[100001] = {
        0,
    };
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t >> p;
        cout << sum[p] - sum[t - 1] << '\n';
    }
}