#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0, j=n-1; i<n/2, j>=n/2; i++, j--) {
            if(s[i]!=s[j]) 
                c++;
            else 
                break;
        }
        cout<<n - (2*c)<<endl;
    }
}