#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    int c=1;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]!=s[i+1]) 
            c++;
    }
    if(c%2) 
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
}