#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, s=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) {
            cin>>v[i];
            s+=v[i];
        }
        if(s%2==0 && n%2!=0 && s!=2*n)
            cout<<"Yes
";
        else if(n%2==0 && s%2==0 )
            cout<<"Yes
";
        else
            cout<<"No
";
    }
}