#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int ca=0, cb=0;
        string s;
        cin>>s;
        for(int i=0; i<5; i++) {
            if(s[i]=='A') {
                ca++;
            } else 
                cb++;
        }
        cout<<(ca>cb ? 'A':'B')<<endl;
    }
}