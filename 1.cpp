#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;
    int arr[n];
    int s1,s2;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s1+=arr[i];
        }
        else
        {
            s2+=arr[i];
        }
    }
    cout<<s1-s2<<endl;
    }
    return 0;
}