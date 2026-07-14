#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, t;
    cin>>n>>t;
    int time_contest = 240-t;
    int s=0, i=0;
    for(i=1; i<=n; i++) {
        s=s+5*i;
        if(s>time_contest) {
            
            break;
        }
    }
    cout<<i-1;
    
}