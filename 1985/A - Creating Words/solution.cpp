#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string a, b;
        cin>>a;
        cin>>b;
        char ch;
        ch=a[0];
        a[0]=b[0];
        b[0]=ch;
        cout<<a<<" "<<b<<endl;
    }
}