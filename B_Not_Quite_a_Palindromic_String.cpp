#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one=0, zero=0;
        for (char c : s)
        {
            if (c == '1')
                one++;
            else
                zero++;
        }
        int a=n/2;
        int b=a-k;
        if(b>one || b>zero)
        {
            cout<<"NO" << endl;
            continue;
        }
        one=one-b;
        zero=zero-b;
        int c=zero/2;
        int d=one/2;
        int e=c+d;
        if(k>e)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}