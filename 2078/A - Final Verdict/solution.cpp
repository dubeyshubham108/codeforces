#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x, s=0;
        cin>>n>>x;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            s+=arr[i];
        }
        if( s == x * n ) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
 
 
 