#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        if ((a[0] % 2 == 0 && a[n - 1] % 2 == 0) || (a[0] % 2 == 1 && a[n - 1] % 2 == 1)) {
            cout << 0 << endl;
        }
        else{
            int left = 0, right = 0;
            if(a[0] % 2 == 0) {
                while (left < n && a[left] % 2 == 0) {
                    left++;
                }
                while (right < n && a[n - 1 - right] % 2 == 1) {
                    right++;
                }
            } else {
                while (left < n && a[left] % 2 == 1) {
                    left++;
                }
                while (right < n && a[n - 1 - right] % 2 == 0) {
                    right++;
                }
            }
        cout << min(left, right) << endl;
        }
    }
    return 0;
}