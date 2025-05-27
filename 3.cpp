#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) 
        {
            if(s[i]=='1') 
            {
                arr[i]=1;
            }
        }
        bool win = false;
        if(arr[0]||arr[n-1]) 
        {
            win=true;
        }
        for(int i = 1; i < n; i++) 
        {
            if(arr[i]&&arr[i-1]) 
            {
                win=true;
            }
        }
        if(win) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}