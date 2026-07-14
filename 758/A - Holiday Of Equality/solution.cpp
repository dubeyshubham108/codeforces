#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];
    int s=0;
    if(n==1) 
        cout<<0;
    else {
        int m = *max_element(v.begin(), v.end());
        for(int i=0; i<n; i++) {
            s+=m-v[i];
        }
        cout<<s;
    }
}
 