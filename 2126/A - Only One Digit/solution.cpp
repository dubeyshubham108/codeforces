#include<bits/stdc++.h>
using namespace std;
 
int minDigit(int n) {
    int m=n;
    int a;
    int ans = INT_MAX;
    while(m) {
        a=m%10;
        ans = min(ans, a);
        m/=10;
    }
    return ans;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<minDigit(n)<<endl;
    }
}
 
 
 