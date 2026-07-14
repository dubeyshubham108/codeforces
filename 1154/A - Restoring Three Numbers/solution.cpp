#include<bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, x2, x3, x4, m;
    cin>>x1>>x2>>x3>>x4;
    m = max({x1, x2, x3, x4});
    if(m==x1) 
        cout<<x1-x2<<" "<<x1-x4<<" "<<x1-x3;
    else if(m==x2)
        cout<<x2-x1<<" "<<x2-x4<<" "<<x2-x3;
    else if(m==x3)
        cout<<x3-x2<<" "<<x3-x4<<" "<<x3-x1;
    else
        cout<<x4-x2<<" "<<x4-x1<<" "<<x4-x3;
    return 0;
}