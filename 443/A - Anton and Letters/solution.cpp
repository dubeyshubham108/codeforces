#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    set<char> ch;
    for(int i=0; i<s.length(); i++) {
        if(s[i]!='{' && s[i]!='}' && s[i]!=' ' && s[i]!=',') 
            ch.insert(s[i]);
    }
    cout<<endl<<ch.size();
}