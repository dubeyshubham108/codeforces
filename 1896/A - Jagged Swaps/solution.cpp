#include<bits/stdc++.h>
using namespace std;
 
int is_permutation(vector<int> v) {
    int k=0;
    int n = v.size();
    for(int i=1; i<n-1; i++) {
        if(v[i]>v[i-1] || v[i]< v[i+1]) 
            return 1;
    }
    return 0;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
            cin>>v[i];
        if(is_sorted(v.begin(), v.end())) 
            cout<<"Yes
";
        else if (is_permutation(v)) {
            int m = *min_element(v.begin(), v.end());
            if(m==v[0]) 
                cout<<"Yes
";
            else 
                cout<<"No
";
        } else 
            cout<<"No
";
    }
}