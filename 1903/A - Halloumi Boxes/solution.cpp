#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        if(is_sorted(v.begin(), v.end())){
            cout<<"Yes
";
        } else if(k==1)
            cout<<"No
";
        else
            cout<<"Yes
";
    }
}