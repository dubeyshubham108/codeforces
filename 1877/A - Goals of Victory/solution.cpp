#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n-1);
        int s=0;
        for(int i=0; i<n-1; i++) {
            cin>>v[i];
            s+=v[i];
        }
        int ans = -1 * s;
        cout<<ans<<endl;
    }
}