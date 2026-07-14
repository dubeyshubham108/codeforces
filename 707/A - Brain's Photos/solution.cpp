#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, k=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) 
            cin>>arr[i][j];
    }
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(arr[i][j] != 'W' && arr[i][j] != 'B' && arr[i][j] != 'G') {
                k=1;
                break;
            }
        }
        if(k==1)
            break;
    }
    if(k==1)
        cout<<"#Color";
    else
        cout<<"#Black&White";
}