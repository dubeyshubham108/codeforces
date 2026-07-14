#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        if(n==1) {
            cout<<"YES"<<endl;
        } else {
            for(int i=0; i<n-1; i++) {
                if(abs(v[i+1] - v[i]) > 1) {
                    cout<<"NO"<<endl;
                    break;
                } else {
                    if(i==n-2) {
                        cout<<"YES"<<endl;
                    }
                }
            }
        }
 
    }
}