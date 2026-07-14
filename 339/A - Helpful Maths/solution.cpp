#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    for(int k=0; k<s.length()/2; k++) {
        for(int i=0; i<s.length()-2; i+=2) {
            if(s[i]>s[i+2]) {
                char ch;
                ch=s[i];
                s[i]=s[i+2];
                s[i+2]=ch;
            }
        }   
    }
    for(int i=0; i<s.length(); i++) {
        cout<<s[i];
    }
}