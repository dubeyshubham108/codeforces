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
            int a;
            cin>>a;
            v[i]=a%2;
            s+=a%2;
        }
        if(s == n/2) {
            int c=0;
            for(int i=0; i<=n-1; i+=2) {
                if(v[i] != 0 ) {
                    c++;
                }
            }
            cout<<c<<endl;
        } else 
            cout<<-1<<endl;
    }
}