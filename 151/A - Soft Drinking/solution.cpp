#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
 
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a, b, z;
    a = k*l/nl;
    b = c*d;
    z = p/np;
    int minimum = (a < b) ? ((a < z) ? a : z) : ((b < z) ? b : z);
    cout<<minimum/n;
    return 0;
}