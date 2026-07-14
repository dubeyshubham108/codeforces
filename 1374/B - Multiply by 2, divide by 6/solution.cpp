#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int a=0, b=0;
        int n;
        cin>>n;
        while(n%2==0) {
            ++a;
            n/=2;
        }
        while(n%3==0) {
            ++b;
            n/=3;
        }
        if(n==1 && a<=b) 
            cout<<2*b-a<<'
';
        else
            cout<<-1<<'
';
        }
    return 0;
}
 
 
 