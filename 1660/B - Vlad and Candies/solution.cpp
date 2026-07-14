#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        sort(v.begin(), v.end());
        if(n==1) 
            v[0] == 1 ? cout<<"Yes
" : cout<<"No
";
        else if(n>1 && (v[n-1] - v[n-2]) >1)
            cout<<"NO
";
        else
            cout<<"YES
";
    }
}