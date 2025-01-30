#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// 2751
int main()
{
    int n;
    int a;
    vector<int> v;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << '\n';
    }
}