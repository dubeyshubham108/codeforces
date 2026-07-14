#include<bits/stdc++.h>
using namespace std;
 
 
 
int isPrime(int n) {
    int k=1;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
 
int nextPrime(int n) {
    n++;
    while(n) {
        if(isPrime(n)) 
            return n;
        else 
            n++;
    }
    return 0;
}
 
int main() {
    int n, m;
    cin>>n>>m;
    if(nextPrime(n) == m)
        cout<<"YES";
    else
        cout<<"NO";
}