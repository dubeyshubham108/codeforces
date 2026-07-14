#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        int m;
        m = *max_element(v.begin(), v.end());
        vector<int> b;
        vector<int> c;
        for(int i=0; i<n; i++) {
            if(v[i]!=m) 
                b.push_back(v[i]);
            else 
                c.push_back(v[i]);
        }
        if(b.size()==0) 
            cout<<-1<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0; i<b.size(); i++) 
                cout<<b[i]<<" ";
            cout<<endl;
            for(int i=0; i<c.size(); i++) 
                cout<<c[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
 
 