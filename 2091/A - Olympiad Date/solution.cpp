#include<bits/stdc++.h>
using namespace std;
 
int main() {
    string date = "01.03.2025";
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        int zero=3, ones=1, twos=2, threes=1, fives=1;
        int czero=0, cones=0, ctwos=0, cthrees=0, cfives=0;
        for(int i=0; i<n; i++) 
            cin>>arr[i];
        if(n<8) 
            cout<<0<<endl;
        else {
            for(int i=0; i<n; i++) {
                if(arr[i]==0) 
                    czero++;
                else if(arr[i]==1)
                    cones++;
                else if(arr[i]==2)
                    ctwos++;
                else if(arr[i]==3)
                    cthrees++;
                else if(arr[i]==5)
                    cfives++;
                if(czero>=zero && cones>=ones && ctwos>=twos && cthrees >= threes && cfives >= fives) {
                    cout<<i+1<<endl;
                    break;
                } 
                if(i==n-1) {
                    if(czero!=zero || cones!=ones || ctwos!=twos || cthrees != threes || cfives != fives) {
                        cout<<0<<endl;
                        break;
                    } 
                }
            }
        }   
    }
}
 
 
 
 