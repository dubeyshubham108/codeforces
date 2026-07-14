#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v(3);
        for(int i=0; i<3; i++) 
            cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0; i<2; i++) {
            if(v[i] + v[i+1] >= 10) {
                cout<<"YES"<<endl;
                break;
            } else {
                if(i==1) {
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }
        
    }
}