#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        if(a > b) {
            cout<<"First
";
        } else if(a < b) {
            cout<<"Second
";
        } else {
            if(c % 2!=0) {
                cout<<"First
";
            } else {
                cout<<"Second
";
            }
        }
        
    }
}