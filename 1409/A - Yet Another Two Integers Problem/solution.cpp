#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, c;
        cin>>a>>b;
        c = abs(a-b);
        cout<<(c+9)/10<<endl;
    }
}