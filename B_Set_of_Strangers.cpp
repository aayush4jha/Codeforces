#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        if(n==1 && m==1)
        {
            cout<<0<<endl;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int i=1;i<m;i++)
                {
                    if()
                }
            }
        }
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