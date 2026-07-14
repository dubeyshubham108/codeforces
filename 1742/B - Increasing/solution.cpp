#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0; i<n-1; i++) {
            if(v[i] == v[i+1]) {
                k=1;
                break;
            }
        }
        cout<< ((k==0 || n==1) ? "Yes
" : "No
");
    }
}