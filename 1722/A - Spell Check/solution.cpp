#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    string name = "Timur";
    while(t--) {
        int n, k=0;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        sort(name.begin(), name.end());
        if(s.length() != 5) 
            cout<<"NO
";
        else {
            for(int i=0; i<5; i++) {
                for(int j=0; j<5; j++) {
                    if(s[i]!=name[i]) {
                        cout<<"NO
";
                        k=1;
                        break;
                    }
                }
                if(k==1) 
                    break;
                if(i==4) {
                    cout<<"YES
";
                }
            }
        }
        
    }
}