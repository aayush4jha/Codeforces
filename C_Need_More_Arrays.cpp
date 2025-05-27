#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++) 
        {
            int x;
            cin >> x;
            if (v.empty() || x != v.back()) 
            {
                v.push_back(x);
            }
        }
        int ans = 1;
        for (int i = 1; i < v.size(); i++) 
        {
            if (v[i] - v[i-1] > 1) 
            {
                ans++;
            }
            else
            {
                v[i]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}