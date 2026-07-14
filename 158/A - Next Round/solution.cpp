#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, s=0;
    cin>>n>>a;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++) {
        if(arr[i]>=arr[a-1] && arr[i]>0) {
            s++;
        } else {
            break;
        }
    }
    cout<<s;
}