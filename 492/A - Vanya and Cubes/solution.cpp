#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, level=0, a=1;
    cin>>n;
    int s=1;
    while(s<=n) {
        level++;
        a++;
        a+=level;
        s+=a;
    }
    cout<<level;
}