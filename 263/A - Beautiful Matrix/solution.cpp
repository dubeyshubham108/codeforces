#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[5][5];
    int n, m, moves=0;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>arr[i][j];
            if(arr[i][j]==1) {
                m=i, n=j;
            }
        }
    }
    moves = abs(2-m) + abs(2-n);
    cout<<moves;
    
}