#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <array>
#include <deque>
#include <list>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <queue>
#include <stack>
#include <iterator>
#include <utility>
#include <tuple>
#include <functional>
#include <memory>
#include <new>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <cmath>
#include <random>
#include <ctime>
#include <cstdio>
#include <future>
#include <chrono>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cctype>
#include <climits>
#include <cfloat>
#include <bitset>
#include <iomanip>
#include <limits>
using namespace std;
#define Code ios::sync_with_stdio(false);
#define By cin.tie(nullptr);
#define Aayush cout.tie(nullptr);
int32_t main()
{
Code By Aayush
int tsts;
cin>>tsts;
while(tsts--)
{
    int n; 
    cin>>n;
    vector<int> arr(n);
    unordered_map<int, int> mpp;   
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        mpp[arr[i]]++; 
    }
    int i=0,dist=0,j=-1,k=-1;
    for(int r=0;r<n;r++) 
    {
        if(mpp[arr[r]]>1) 
        { 
            i=r+1;  
            continue;
        }
        if(r-i+1>dist) 
        {
            dist=r-i+1;
            j=i;
            k=r;
        }
    }
    if(dist==0) 
    {
        cout<<0<<endl;
    }
    else 
    {
        cout<<j+1<<" "<<k+1<<endl; 
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