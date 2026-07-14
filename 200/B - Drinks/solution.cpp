#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    double total, sum=0;
    cin>>n;
    total = n*100;
    while(n--) {
        int a;
        cin>>a;
        sum+=a;
    }
    cout<< fixed << setprecision(12)<<(sum*100)/total;
}
 
 
 