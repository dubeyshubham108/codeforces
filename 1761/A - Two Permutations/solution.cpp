#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    
    while(t--) {
        int n, a, b;
        cin>>n>>a>>b;
        if((a+b <= (n-2)) || ((a==b) && (b==n)))
            cout<<"Yes
";
        else
            cout<<"No
";
    }
}