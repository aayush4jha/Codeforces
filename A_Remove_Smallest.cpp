#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
            if(a[i+1]-a[i]>1)
            {
                f=1;
                break;
            }
        }
        if(f==1)
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