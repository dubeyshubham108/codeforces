#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[6];
        for(int i=1; i<6; i++) {
            arr[i]=n%10;
            n/=10;
        }
        int c=0;
        for(int i=1; i<6; i++) {
            if(arr[i]!=0) {
                c++;
            }
        }
        cout<<c<<endl;
        int m=1;
        for(int i=1; i<6; i++) {
            if(arr[i] != 0) {
                cout<<arr[i]*m<<" ";
                m*=10;
            } else 
                m*=10;
        }
        cout<<endl;
    }
}