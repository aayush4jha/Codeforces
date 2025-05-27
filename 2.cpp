#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() 
{
    int N,M;
    cin>>N>>M;
    vector<int> t(N + 1, 0);
    unordered_map<int, int> entry;
    for(int i=0;i< M; ++i) {
        int id, timestamp;
        string a;
        cin>>id>>a>>timestamp;
        if (a=="Enters") 
        {
            entry[id] = timestamp;
        } 
        else if (a == "Exit") 
        {
            t[id]+=timestamp - entry[id];
            entry.erase(id);
        }
    }
    for (int i = 1; i <= N; ++i) {
        cout << t[i] << " ";
    }
    cout << endl;

    return 0;
}

