#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string guest, host, pile;
    cin>>guest>>host>>pile;
    if(guest.length() + host.length() == pile.length()) {
        string s = guest + host;
        sort(s.begin(), s.end());
        sort(pile.begin(), pile.end());
        if(s==pile)
            cout<<"YES";
        else
            cout<<"NO";
    } else
        cout<<"NO";
    return 0;
}