#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        n > m ? cout<<m<<" "<<n<<endl : cout<<n<<" "<<m<<endl;
    }
}