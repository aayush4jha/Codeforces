#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=stoi(s);
        bool flag=false;
        for(int i=0;i<=99;i++)
        {
            for(int j=0;j<=99;j++)
            {
                if((i+j)*(i+j)==n)
                {
                    flag=true;
                    cout<<i<<" "<<j<<endl;
                    break;
                }
            }
            if(flag==true)
            {
                break;
            }
        }
        if(flag==false)
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}