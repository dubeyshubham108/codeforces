#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, a, b;
        cin>>n;
        a = round((double)n/3);
        b = n - a*2;
        cout<<b<<" "<<a<<endl;
    }
}