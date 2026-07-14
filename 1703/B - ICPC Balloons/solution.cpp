#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s(n, 'x');
        cin>>s;
        sort(s.begin(), s.end());
        int d=0;
        for(int i=0; i<n; i++) {
            if(s[i]!=s[i+1])
                d++;
        }
        cout<<n+d<<endl;
    }
}