#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

// 1978

int main()
{
    int n, a, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        int so = 0;
        for (int j = 2; j <= a; j++)
        {
            if (a % j == 0)
            {
                so++;
            }
        }
        if (so == 1)
        {
            count++;
        }
    }
    cout << count;
}