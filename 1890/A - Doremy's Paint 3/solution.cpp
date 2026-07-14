#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        map<int, int> freq;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            freq[ v[i] ]++;
        }
        if(freq.size()>=3) {
           cout<<"No
";
        } else {
            if(abs(freq.begin()->second - freq.rbegin()->second)<=1) {
                cout<<"Yes
";
            } else {
                cout<<"No
";
            }
        }
    }
}