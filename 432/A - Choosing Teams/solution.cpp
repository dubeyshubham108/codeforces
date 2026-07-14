#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];
    int team=0, s=0;
    for(int i=0; i<n; i++) {
        if(v[i] + k <= 5) 
            s++;
    }
    cout<<s/3;
}