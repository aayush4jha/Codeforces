#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int testcases; cin>>testcases;
    while(testcases--) {
        int n; cin>>n; 
        string s; cin>>s;
        if(s.size()==1) {
            if(s[0]=='0') print("BOB");
            else print("ALICE"); continue;
        }
        if(s.size()==2) {
            if(s[0]=='0' && s[1]=='0') print("BOB");
            else print("ALICE"); 
            continue;
        }
        if(s[n-1]=='1') {print("ALICE"); continue;}
        int f=0; char c;
        for(int i=n-1;i>0;i--) {
            if(s[i]==s[i-1]) {f=1; c=s[i]; break;}
        }
        if(f) {
            if(c=='0') print("BOB");
            else print("ALICE");
        } 
        else {
            if(s[0]=='0') print("BOB");
            else print("ALICE");
        }
        
    }
    return 0;
}