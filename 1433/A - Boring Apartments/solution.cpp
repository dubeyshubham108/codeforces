#include<bits/stdc++.h>
using namespace std;
 
int digit(int n) {
    int d=0;
    while(n) {
        d++;
        n/=10;
    } 
    return d;
}
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int d = digit(n);
        cout<< d*(d+1)/2 + (n%10 - 1) * 10 << endl;
    }
}