#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k=0;;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0; i<s.length(); i++) {
            for(int j=s.length() - 1; j > i ; j--) {
                if(s[i]==s[j] && abs(i-j) > 1) {
                    for(int m=i; m<=j; m++) {
                        if(s[m]!=s[i]) {
                            k=1;
                            break;
                        } 
                    }
                
                }
            }
        }
        if(k)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
}