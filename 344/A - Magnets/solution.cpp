#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k=1, m=0;
    cin>>n;
    string ch[n];
    for(int i=0; i<n; i++) {
        cin>>ch[i];
    }
    for(int i=m; i<n-1; i++) {
        if(ch[i]!=ch[i+1]) 
            k++;
    }
    cout<<k;
}
 
 