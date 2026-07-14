#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ln '
'
 
bool isFair(ll n) {
    ll m = n;
    while(m) {
        int a = m%10;
        if(a!=0) {
            if(n%a==0) {
                m/=10;
            } else
                return false;
        } else
            m/=10;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        ll x;
        cin>>x;
        while(!isFair(x)) {
            x++;
        }
        cout<<x<<ln;
    }
    return 0;
}