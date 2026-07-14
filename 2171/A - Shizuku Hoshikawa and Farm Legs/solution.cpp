#include<iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        if(n%2!=0) 
            cout<<"0
";
        else
            cout<<n/4+1<<"
";
    }
}