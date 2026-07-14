#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        int diff = 0;
        for(int i=0; i<n; i++) 
            cin>>v[i];
        for(int i=0; i<n-1; i++) 
            diff = max(diff, v[i+1] - v[i]);
        int ans=0;
        ans = max(v[0], abs(k-v[n-1]) *2);
        ans = max(diff, ans);
        cout << ans << endl;
    }
}
 