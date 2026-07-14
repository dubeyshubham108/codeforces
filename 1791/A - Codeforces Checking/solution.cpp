#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s = "codeforces";
        char ch;
        cin>>ch;
        int k=1;
        for(int i=0; i<s.length(); i++) {
            if(ch==s[i]) {
                cout<<"Yes"<<endl;
                k=0;
                break;
            }
        }
        if(k==1) 
            cout<<"No"<<endl;
    }
}