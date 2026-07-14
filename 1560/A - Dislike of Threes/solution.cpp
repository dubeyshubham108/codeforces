#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k=1, m=0;
        cin>>n;
        while(n) {
            if(m % 3 == 0 || m % 10 == 3) {
                m++;
            } else {
                if(k == n) {
                    cout<<m<<endl;
                    break;
                }
                k++;
                m++;
            }
 
        }
    }
}