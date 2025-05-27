#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tsts;
    cin>>tsts;
    while(tsts--)
    {
        int n; cin>>n;
        vector<int> b(n-2);
        for(int i=0;i<n-2;i++)
        {
            cin>>b[i];
        }
        int flag=1;
        for(int i=0;i<n-4;i++)
        {
            if(b[i]==1 && b[i+2]==1 && b[i+1]==0)
            {
                flag=0;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
    
    
    
    
    
    /*
            -----       -----    --     --   --     --    -------  --     --
           --   --     --   --    --   --    --     --   --        --     --
          --     --   --     --    -- --     --     --   --        --     --
          ---------   ---------     ---      --     --    ------   ---------
          --     --   --     --     ---      --     --         --  --     --
          --     --   --     --     ---      --     --         --  --     --
          --     --   --     --     ---       -------    -------   --     --
    */
