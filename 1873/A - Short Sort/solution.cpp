#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t, k;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        k=0;
        for(int i=0; i<2; i++) {
            if(s[i]=='c' && s[i+1]=='a') {
                cout<<"NO"<<endl;
                k=1;
                break;
            }
        }
        if(k==0) 
            cout<<"YES"<<endl;
    }
}