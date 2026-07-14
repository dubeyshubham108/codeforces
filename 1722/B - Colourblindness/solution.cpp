#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s1, s2;
        int n;
        cin>>n;
        int k=0;
        cin>>s1>>s2;
        for(int i=0; i<n; i++) {
            if(s1[i] != s2[i]) {
                if((s1[i]=='B' && s2[i]=='G') || (s1[i] == 'G' && s2[i] == 'B')) {
                    continue;
                } else {
                    k=1;
                    break;
                }
            }
        }
        k==1 ? cout<<"No
" : cout<<"Yes
";
    }
}