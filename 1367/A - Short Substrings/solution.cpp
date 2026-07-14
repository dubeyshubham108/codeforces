#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        if(s.length() == 2) 
            cout<<s<<endl;
        else {
            cout<<s[0]<<s[1];
            for(int i=3; i<s.length(); i+=2) {
                cout<<s[i];
            }
            cout<<endl;
        }
    }
}