#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, police=0, crime=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    for(int i=0; i<n; i++) {
        if(arr[i]>0) 
            police+=arr[i];
        else if( arr[i]==-1 && police==0)
            crime++;
        else 
            police--;
    }
    cout<<crime;
}
 
 
 