#include<bits/stdc++.h>
using namespace std;
 
int hcf(int n, int m) {
    int h=1;
    for(int i = (n>m?m:n); i>0 ; i--) {
        if(n%i==0 && m%i==0) {
            h=i;
            return h;
        }
    }
    return h;
}
 
int main() {
    int y, w;
    cin>>y>>w;
    int m = max(y, w);
    int c=0;
    for(int i=m; i<=6; i++) {
        c++;
    }
    int h = hcf(c, 6);
    c = c/h;
    int d = 6/h;
    cout<<c<<"/"<<d;
}