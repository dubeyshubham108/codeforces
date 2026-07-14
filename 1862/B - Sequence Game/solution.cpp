#include<iostream>
#include<vector>
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
        vector<int> b;
        b.push_back(v[0]);
        for(int i=1; i<n; i++) {
            if(v[i]>=v[i-1]) {
                b.push_back(v[i]);
            } else {
                b.push_back(v[i]);
                b.push_back(v[i]);
            }
        }
        cout<<b.size()<<endl;
        for(auto it: b)
            cout<<it<<" ";
        cout<<endl;
        
    }
}