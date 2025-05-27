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
    long long n,m; 
    cin>>n>>m;
    vector<long long> a(n), b(m);
    for(int i=0;i<n;i++) 
    {
        cin>>a[i];
    };
    for (int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    long long p=LLONG_MIN;
    int flag=1;
    for(int i=0;i<n;i++)
    {
        long long x=LLONG_MAX;
        if(a[i]>=p)
        {
            x=a[i];
        }
        long long q=p+a[i];
        long long y=LLONG_MAX;
        auto iter=lower_bound(b.begin(),b.end(),q)-b.begin();
        if(iter<m) 
        {
            y=b[iter]-a[i];
        }
        long long m=min(x,y);
        if(m==LLONG_MAX) 
        {   
            flag=0;
            break;
        }
        p=m;
    }
    if(flag) 
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
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