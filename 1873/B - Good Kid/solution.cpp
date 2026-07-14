#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m=INT_MAX, j=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(m >= arr[i]) {
                m=arr[i];
                j=i;
            }
        }
        arr[j] = m+1;
        int p=1;
        for(int i=0; i<n; i++) 
            p*=arr[i];
        cout<<p<<endl;
    }
}