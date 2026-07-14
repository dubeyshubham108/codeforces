#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    int result=0;
    while(t--) {
        int a, b;
        cin>>a>>b;
        if(a>b)
            result++;
        else if(a<b)
            result--;
    }
    if(result > 0)
        cout<<"Mishka";
    else if(result < 0) 
        cout<<"Chris";
    else
        cout<<"Friendship is magic!^^";
}
 
 