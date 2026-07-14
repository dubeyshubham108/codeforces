#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        int min=INT_MAX, max=INT_MIN;
        for(int i=0; i<n; i++) {
            int a;
            cin>>a;
            v[i]=a;
            if(min > a)
                min=a;
            if(max<a)
                max=a;
        }
        cout<<max-min<<endl;
    }
}