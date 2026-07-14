#include<bits/stdc++.h>
using namespace std;
 
void solve() {
    long long x;
    cin>>x;
    int flag = 1;
    while(x >= 10) {
        int digit = x%10;
        if(flag == 1) {
            flag =0;
            if(digit > 8) {
                cout<<"NO
";
                return;
            }
        }
        else if (digit ==0) {
            cout<<"NO
";
            return;
        }
        x/=10;
    }
    if(x==1) {
        cout<<"YES
";
    } else {
        cout<<"NO
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        solve();
    }
}