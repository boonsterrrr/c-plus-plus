#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>
#include <list>

using namespace std;

////1406

int main()
{
    string s; // abcd
    cin >> s;
    list<char> li(s.begin(), s.end());
    list<char>::iterator it = li.end();
    int a;  // 3
    char b; // p l
    char c; // x y

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b == 'L')
        {
            if (it != li.begin())
            {
                it--;
            }
        }
        else if (b == 'D')
        {
            if (it != li.end())
            {
                it++;
            }
        }
        else if (b == 'B')
        {
            if (it != li.begin())
            {
                it = li.erase(--it);
            }
        }
        else if (b == 'P')
        {
            cin >> c;
            li.insert(it, c);
        }
    }
    for (char m : li)
    {
        cout << m;
    }
}