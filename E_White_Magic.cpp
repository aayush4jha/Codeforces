#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int mex(vector<int>& arr) {
    unordered_set<int> s(arr.begin(), arr.end());
    int m = 0;
    while (s.count(m)) m++;
    return m;
}

int maxMagicalSubsequenceLength(vector<int>& a) {
    int n = a.size();
    int m = mex(a);
    
    vector<int> lessThanM, greaterOrEqualM;
    for (int num : a) {
        if (num < m) lessThanM.push_back(num);
        else greaterOrEqualM.push_back(num);
    }
    
    if (lessThanM.empty()) return n;
    
    int minLessThanM = *min_element(lessThanM.begin(), lessThanM.end());
    int mexGreaterOrEqualM = mex(greaterOrEqualM);
    
    if (minLessThanM >= mexGreaterOrEqualM) {
        return n;
    } else {
        return lessThanM.size() + greaterOrEqualM.size() - 1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        cout << maxMagicalSubsequenceLength(a) << '\n';
    }
    
    return 0;
}