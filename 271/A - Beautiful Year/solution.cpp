#include<bits/stdc++.h>
using namespace std;
 
bool dupli(int r) {
    vector<int> v(4);
    for(int i=0; i<4; i++) {
        v[i]=r%10;
        r/=10;
    }
    sort(v.begin(), v.end());
    for(int i=0; i<4; i++) {
        if(v[i]==v[i+1])
            return false;
    }
    return true;
}
 
int main() {
    int n, k=1;
    cin>>n;
    n++;
    while(k) {
        if(dupli(n)) {
            k=0;
            break;
        }
        n++;
    }
    cout<<n;
}
 
 