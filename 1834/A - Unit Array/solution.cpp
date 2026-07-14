#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        int p=0, m=0, cnt=0;
        for(int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]==1) 
                p++;
            else
                m++;
        }
        while(p<m || m%2==1) {
            p++;
            m--;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}