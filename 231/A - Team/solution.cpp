#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int s, c=0;
    while(n--) {
        int arr[3];
        for(int i=0; i<3; i++) {
            cin>>arr[i];
        }
        s=0;
        for(int i=0; i<3; i++) {
            s+=arr[i];
        }
        if(s>=2) {
            c++;
        }
    }
    cout<<c;
}