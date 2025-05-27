#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
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

int32_t main() {
    Code By Aayush
    int tsts;
    cin >> tsts;
    while (tsts--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        map<int, int> mp;
        vector<int> frequencies;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        for (auto &[value, count] : mp) {
            frequencies.push_back(count);
        }

        sort(all(frequencies));
        int ans = frequencies.size();

        for (int freq : frequencies) {
            k -= freq;
            if (k < 0) {
                break;
            }
            ans--;
        }

        cout << max(ans, 1LL) << endl;
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