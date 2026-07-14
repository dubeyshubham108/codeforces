#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin>>a>>b;
    int m = a+b;
    
    cout<<(a>b?b:a)<<" ";
    m = (m - 2*( a > b ? b : a )) / 2;
    cout<<m;
    
    
}