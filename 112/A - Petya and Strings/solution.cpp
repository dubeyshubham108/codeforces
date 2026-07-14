#include<bits/stdc++.h>
using namespace std;
 
string toLowerCase(string s) {
    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        }
    }
    return s;
}
 
int main() {
    string s1, s2;
    cin>>s1>>s2;
    s1 = toLowerCase(s1);
    s2 = toLowerCase(s2);
    
    for(int i=0; i<s1.length(); i++) {
        if(s1[i] != s2[i]) {
            if(s1[i] < s2[i]) {
                cout<<-1;
                break;
            } else if (s1[i] > s2[i]) {
                cout<<1;
                break;
            }
        } else {
            if(i==s1.length() - 1) 
                cout<<0;
        }
    }
}
 