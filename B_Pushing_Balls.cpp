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
#define vvi vector<vector<int> >
#define pii pair<int, int>
#define vii vector<pair<int, int> >
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
    int b, c;
        cin >> b >> c;
        
        vector<string> x(b);
        vvi y(b, vi(c, 0));
        vvi z(b, vi(c, 0));
        
        for (int p = 0; p < b; p++) {
            cin >> x[p];
            for (int q = 0; q < c; q++) {
                if (x[p][q] == '1') {
                    y[p][q] = 1;
                    z[p][q] = 1;
                }
            }
        }
        
        for (int p = 1; p < b; p++) {
            for (int q = 0; q < c; q++) {
                y[p][q] += y[p - 1][q];
            }
        }
        
        for (int p = 0; p < b; p++) {
            for (int q = 1; q < c; q++) {
                z[p][q] += z[p][q - 1];
            }
        }
        
        bool w = true;
        
        for (int p = 0; p < b; p++) {
            for (int q = 0; q < c; q++) {
                if (x[p][q] == '1') {
                    if (p == 0 || q == 0) continue;
                    
                    bool r = (z[p][q] == q + 1);
                    bool s = (y[p][q] == p + 1);
                    
                    if (!(r || s)) {
                        w = false;
                        break;
                    }
                }
            }
            if (!w) break;
        }
        
        cout << (w ? "YES" : "NO") << "\n";

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