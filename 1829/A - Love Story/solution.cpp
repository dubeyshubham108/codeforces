#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        string ch = "codeforces";
        int c=0;
        for(int i=0; i<10; i++) {
            if(ch[i]!=s[i]) 
                c++;
        }
        cout<<c<<endl;
    }
}