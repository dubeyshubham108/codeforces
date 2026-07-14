#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int s=0, d=0, k=1, p=1;
    while(n) {
        if(p) {
            if(v[0] > v[v.size()-1]) {
                s+=v[0];
                v.erase(v.begin());
                p=1-p;
            }
            else {
                s+=v[v.size()-1];
                v.pop_back();
                p=1-p;
            }
        } else {
            if(v[0] > v[v.size()-1]) {
                d+=v[0];
                v.erase(v.begin());
                p=1-p;
            } else {
                d+=v[v.size()-1];
                v.pop_back();
                p=1-p;
            }
        }
        n--;
    }
    cout<<s<<" "<<d;
    
}