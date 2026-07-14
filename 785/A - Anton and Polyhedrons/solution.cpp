#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    int n, total_faces=0;
    cin>>n;
    while(n--) {
        cin>>s;
        if(s[0]=='T')
            total_faces+=4;
        else if(s[0]=='C')
            total_faces+=6;
        else if(s[0]=='O')
            total_faces+=8;
        else if(s[0]=='D')
            total_faces+=12;
        else
            total_faces+=20;
    }
    cout<<total_faces;
}