#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if(a>c && a<b)
            cout<<a<<endl;
        else if (a<c && b<a)
            cout<<a<<endl;
        else if(b>c && b<a)
            cout<<b<<endl;
        else if(b>a && c>b)
            cout<<b<<endl;
        else if(c>b && a>c)
            cout<<c<<endl;
        else
            cout<<c<<endl;
    }
        
}