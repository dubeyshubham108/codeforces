#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, steps=0, i=5;
    cin>>n;
    while(n) {
        if(n/i!=0)
            steps+=n/i;
            n%=i;
            i--;
    }
    cout<<steps;
}
 
 
 