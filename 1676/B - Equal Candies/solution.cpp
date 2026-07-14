#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        int m = *min_element(v.begin(), v.end());
        int s=0;
        for(int i=0; i<n; i++) 
            s+=v[i] - m;
        cout<<s<<endl;
    }
}