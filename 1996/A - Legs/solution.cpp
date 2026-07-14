#include<iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int ans=0;
        if(n%4==0) {
            ans = n/4;
        } else {
            n-=2;
            ans = n/4 + 1;
        }
        cout<<ans<<endl;
    }
}