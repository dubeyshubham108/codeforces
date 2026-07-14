#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, min, max;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v;
        max=n, min=1;
        for(int i=n-1; i>=0; i--) {
            if(s[i]=='>') {
                v.push_back(max);
                max--;
            } else if(s[i]=='<') {
                v.push_back(min);
                min++;
            }
            if(min==max) {
                v.push_back(min);
            }
        }
        int arr[n];
        for(int i=0; i<n; i++) {
            arr[n-i-1] = v[i];
            // cout<<v[i]<<" ";
        }
        for(int i=0; i<n; i++) {
            cout<<arr[i]<<" ";
        }
    }
}