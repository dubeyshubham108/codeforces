#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int total_cost=0, s=0;
    for(int i=1; i<=c; i++) {
        s+=i;
    }
    total_cost = s*a;
    if(total_cost > b ) 
        cout<<total_cost - b;
    else 
        cout<<0;
}