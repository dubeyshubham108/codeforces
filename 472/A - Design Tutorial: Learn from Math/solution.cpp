#include<bits/stdc++.h>
using namespace std;
 
int isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int n;
    cin>>n;
    for(int p=1, q=n-1; p<n, q>1; p++,q--) {
        if(p + q  == n && isPrime(p)==0 && isPrime(q) == 0 ) {
            cout<<p<<" "<<q;
            break;
        }
    }
    
}
 
 