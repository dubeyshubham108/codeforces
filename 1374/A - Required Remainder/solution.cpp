#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y, n;
        cin>>x>>y>>n;
        int r = n/x * x + y;
        if(r > n) 
            cout<<(n/x - 1) * x + y<<endl;
        else
            cout<<r<<endl;
    }
}