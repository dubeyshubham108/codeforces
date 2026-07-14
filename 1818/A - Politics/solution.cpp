#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        char arr[n][k];
        for(int i=0; i<n; i++) {
            for(int j=0; j<k; j++) {
                char ch;
                cin>>ch;
                arr[i][j] = ch;
            }
        }
        int c=1;
        for(int i=1; i<n; i++) {
            for(int j=0; j<k; j++) {
                if(arr[i][j] != arr[0][j]) 
                    break;
                if(j==k-1) 
                    c++;
            }
        }
        cout<<c<<endl;
    }
}