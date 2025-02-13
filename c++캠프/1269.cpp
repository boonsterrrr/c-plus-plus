#include <iostream>
#include <map>

using namespace std;

// 1269
int main()
{
    map<int, bool> m;

    int a, b;
    cin >> a >> b;
    int num;
    for (int i = 0; i < a + b; i++)
    {
        cin >> num;
        if (m[num] == true)
        {
            m.erase(num);
        }
        else
        {
            m[num] = true;
        }
    }
    cout << m.size();
}