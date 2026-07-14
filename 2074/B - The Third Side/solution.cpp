#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v;
        int s=0;
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            s+=a;
            v.push_back(a);
        }
        cout<<s-n+1<<endl;
    }
}