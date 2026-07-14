#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        sort(v.begin(), v.end());
        if((v.front() + v.back()) %2 == 0) 
            cout<<0<<'
';
        else {
            int cnt=0, c=0, k=1, m=1;
            for(int i=0; i<n; i++) {
                if(((v[i] + v[n-1])%2!=0) && k==1) {
                    cnt++;
                } else {
                    k=0;
                }
                if(((v[0] + v[n-i-1])%2!=0) && m==1)
                    c++;
                else
                    m=0;
            }
            cout<<((cnt > c) ? c : cnt)<<'
';
        }
    }
}
 
 
 
 