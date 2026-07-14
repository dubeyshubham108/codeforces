#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, j, k=1;
    cin>>n>>m;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if(i%2) {
                cout<<"#";
            } else {
                if(k) {
                    if(j==m) 
                        cout<<"#";
                    else
                        cout<<".";
                } else {
                    if(j==1)
                        cout<<"#";
                    else
                        cout<<".";
                }
            }
        }
        if(i%2==0)
            k=1-k;
        cout<<endl;
    }
}
 
 
 