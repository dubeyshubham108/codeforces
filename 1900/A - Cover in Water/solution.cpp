#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n, k=0, c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n-1; i++) {
            if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.') {
                cout<<2<<'
';
                k=1;
                break;
            }
        }
        if(k==0) {
            for(int i=0; i<n; i++) {
                if(s[i]=='.') 
                    ++c;
            }
            cout<<c<<'
';
        }
    }
    
}