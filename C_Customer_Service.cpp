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
#define int long long
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vii vector<pair<int, int>>
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
    vector<vector<int> > arr1(n+1, vector<int>(n+1));
    for(int i=1; i<=n; i++) 
    {
        for(int j=1; j<=n; j++) 
        {
            cin>>arr1[i][j];
        }
    }
    vector<vi> arr2(n+1, vi(n+1,0));
    for(int i=1; i<=n; i++) 
    {
        for(int j=n; j>=1; j--) 
        {
            arr2[i][n-j+1] = arr1[i][j] + arr2[i][n-j];
        }
    }
    vi visited(n+1);
    for(int i=1;i<=n;i++) 
    {
        int m=0;
        for(int j=1;j<n;j++) 
        {
            if(arr2[i][j]!=j) 
            {
                break;
            }
            m=j;
        }
        visited[m]++;
    }
    int k=n;
    for(int i=1;i<n;i++) 
    {
        int flag=1;
        if(visited[i]==0) 
        {
            flag=0;
            for(int j=i+1;j<n;j++) 
            {
                if(visited[j]) 
                {
                    visited[j]--; 
                    flag=1; 
                    break;
                }
            }
        }
        if(flag==0) 
        {
            k=i; 
            break;
        } 
    }
    cout<<k<<endl;
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