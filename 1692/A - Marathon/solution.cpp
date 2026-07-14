#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int m=0;
        if(b>a)
            m++;
        if(c>a)
            m++;
        if(d>a)
            m++;
        cout<<m<<endl;
    }
}