#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ln '
'
#define iofast ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
int main() {
    iofast;
    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll> a(n);
        map<ll, ll> mp;
        for(ll i = 0; i<n; i++) {
            cin>>a[i];
            mp[a[i] - i]++;
        }
        ll ans = 0;
        for(auto x : mp) {
            ans += (x.second * (x.second - 1)) / 2;
        }
        cout << ans << ln;
    }
}