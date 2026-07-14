#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '
';
 
int main() {
    int t;
    cin>>t;
    vector<ll> primes;
    for(ll i=2; i<= 100000; i++) {
        bool is_prime = true;
        for(ll j=2; j*j<=i; j++) {
            if(i%j==0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime)
            primes.push_back(i);
    }
    while(t--) {
        ll d;
        cin>>d;
        
        ll p = *lower_bound(primes.begin(), primes.end(), 1+d);
        ll q = *lower_bound(primes.begin(), primes.end(), p+d);
        
        ll a = min(1LL * p * p * p, 1LL * p * q);
        cout<<a<<endl;
        
    }
}