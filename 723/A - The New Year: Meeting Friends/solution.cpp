#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
int main() {
    vector<int> v;
    for(int i=0; i<3; i++) {
        int n;
        cin>>n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout<<(v[2]-v[1]) + (v[1] - v[0]);
    return 0;
}