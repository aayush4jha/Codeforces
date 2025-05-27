#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long> p(n);
        p[0] = 0;
        for (int i = 1; i < n; i++) {
            p[i] = p[i - 1] + a[i - 1];
        }
        long long s = p[n - 1] + a[n - 1];
        if (k * s < x) {
            cout << "0\n";
            continue;
        }
        long long r = k * s - x;
        long long ans = 0;
        for (int c = 0; c < k; c++) {
            long long l = r - (long long)c * s;
            if (l < 0) continue;
            ans += upper_bound(p.begin(), p.end(), l) - p.begin();
        }
        cout << ans << "\n";
    }
    return 0;
}
