#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, s=0, m;
        cin>>a>>b>>c;
        s = a+b+c;
        
        if(s/3>=b && s%3==0)
            cout<<"Yes
";
        else
            cout<<"No
";
    }
}