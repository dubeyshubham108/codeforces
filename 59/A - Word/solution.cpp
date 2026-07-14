#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int l=0, h=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]>='A' && s[i]<='Z') 
            h++;
        else
            l++;
    }
    if(h>l) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;
    }
    else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }
        
}