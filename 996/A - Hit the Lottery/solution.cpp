#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[5] = { 1, 5, 10, 20, 100 };
    int n, c=0;
    cin>>n;
    for(int i=4; i>=0; i--) {
        c+=n/arr[i];
        n = n%arr[i];
    }
    cout<<c;
}