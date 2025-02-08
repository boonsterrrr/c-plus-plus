#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;
// 11650

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    vector<pair<int, int>> v; // 벡터 pair 요 기능 새로 알게됨
    int n;
    cin >> n;
    int x, y;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        v.push_back({x, y}); // 벡터 pair 일때 입력?알게됨
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << '\n';
    }
}