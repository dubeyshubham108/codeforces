#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int ans = 0;
        if(n%m==0) 
            ans = min(ans, abs(m*(n/m) + m - n));
        else
            ans = abs(m*(n/m) + m - n);
        cout<<ans<<endl;
    }
}