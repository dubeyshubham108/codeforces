#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n, c=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) 
            cin>>arr[i];
        for(int i=0; i<n-1; i++) {
            if((arr[i]%2 == 0 && arr[i+1]%2==0) || (arr[i]%2 != 0 && arr[i+1]%2!=0)) {
                c++;
            }
        }
        cout<<c<<'
';
    }
}