#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long a,b,n;
    cin>>a>>b>>n;
    long long x=a;
    while(n--)
    {
        for(int i=1;i<=10;i++)
        {
            if((x*10+i)%b==0)
            {
                x=x*10+i;
                break;
            }
            if(i==10)
            {
                cout<<-1;
                return 0;
            }
        }
    }
    return 
    return 0;
}