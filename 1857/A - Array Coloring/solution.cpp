#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, s=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            v[i]=a;
            s+=a;
        }
        if(s%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        
    }
}