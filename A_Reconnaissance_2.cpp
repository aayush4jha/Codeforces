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
int n; cin>>n;
vector<int> a(n);
vector<int> b(n);
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
int mn=abs(a[0]-a[n-1]);
int i1=0,i2=n-1;
for(int i=0;i<n-1;i++)            
{
    if(abs(a[i]-a[i+1])<mn)
    {
        mn=abs(a[i]-a[i+1]);
        i1=i;
        i2=i+1;
    }
}
cout<<i1+1<<" "<<i2+1<<endl;
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