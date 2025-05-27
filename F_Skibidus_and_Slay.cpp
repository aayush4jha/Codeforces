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
    Code By Aayush int tsts;
    cin >> tsts;
    while (tsts--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        vector<vector<int>> g(n + 1);
        for (int i = 1; i <= n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        vector<char> res(n + 1, '0');

        for (int i = 1; i <= n; i++)
        {
            for (int j : g[i])
            {
                if (i < j && a[i] == a[j])
                {
                    res[a[i]] = '1';
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            if (g[i].size() < 2)
                continue;
            vector<int> tmp;
            tmp.reserve(g[i].size());
            for (int j : g[i])
            {
                tmp.push_back(a[j]);
            }
            sort(tmp.begin(), tmp.end());
            int cnt = 1;
            for (size_t k = 1; k < tmp.size(); k++)
            {
                if (tmp[k] == tmp[k - 1])
                {
                    cnt++;
                }
                else
                {
                    if (cnt >= 2)
                        res[tmp[k - 1]] = '1';
                    cnt = 1;
                }
            }
            if (cnt >= 2)
                res[tmp.back()] = '1';
        }

        string out;
        out.resize(n);
        for (int i = 1; i <= n; i++)
        {
            out[i - 1] = res[i];
        }
        cout << out << "\n";
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