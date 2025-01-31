#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

// 10989

int main()
{
    int n, a;
    int arr[10001] = {
        0,
    };
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr[a] += 1;
    }

    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << i << '\n';
        }
    }
}
