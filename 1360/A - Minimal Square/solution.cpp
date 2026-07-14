#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int a, b, area=0, sq=0, min=0, max=0;
        cin>>a>>b;
        area = 2*a*b;
        min = a>b?b:a;
        min+=min;
        max = a>b?a:b;
        if(min*min >= area)
            cout<<min*min<<endl;
        else
            cout<<max*max<<endl;
    }
}