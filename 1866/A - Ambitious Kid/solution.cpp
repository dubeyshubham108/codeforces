#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    vector<int> v(n);
    int m = INT_MAX;
    for(int i=0; i<n; i++) {
        cin>>v[i];
        m = min(m, abs(v[i]));
    }
    
    cout<<m;
 
    
}