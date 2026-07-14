#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int d=0;
    char ch[n];
    for(int i=0; i<n; i++) {
        cin>>ch[i];
    }
    if(n<26)
        cout<<"NO";
    else {
        for(int i=0; i<n; i++) {
            if(ch[i]>='A' && ch[i]<='Z') 
                ch[i] = ch[i]+32;
        }
        for(int i=0; i<n-1; i++) {
            for(int r=0; r<n-1-i; r++) {
                if(ch[r]>ch[r+1]) {
                    char temp;
                    temp=ch[r];
                    ch[r] = ch[r+1];
                    ch[r+1] = temp;
                }
            }
        }
        for(int i=0; i<n; i++) {
            if(ch[i]!=ch[i+1])
                d++;
        }
        if(d==26)
            cout<<"YES";
        else
            cout<<"NO";
    }
}
 
 