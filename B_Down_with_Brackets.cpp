#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 1;
        int flag = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                if (count == 0)
                {
                    flag = 0;
                    break;
                }
                count++;
            }
            else
            {
                count--;
            }
        }
        if (flag==0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}