#include<bits/stdc++.h>
using namespace std;
#define ln '
'
 
bool is_all_elem_same(vector<int> v) {
    for(int i=0; i<v.size() - 1; i++) {
        if(v[i]!=v[i+1]) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        if(!is_sorted(v.begin(), v.end())) {
            cout<<0<<ln;
        } else if (is_all_elem_same(v)) {
            cout<<1<<ln;
        } else {
            int d = abs(v[1] - v[0]);
            for(int i=0; i<n-1; i++) {
                d = min(d, abs(v[i+1] - v[i]));
            }
            d = d/2 + 1;
            cout<<d<<ln;
        }
    }
}