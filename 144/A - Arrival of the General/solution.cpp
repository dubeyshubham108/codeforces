#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];
    int ma = *max_element(v.begin(), v.end());
    int mi = *min_element(v.begin(), v.end());
    int max_index, min_index;
    int o=1, y=1;
    for(int i=0, j=n-1; i<n, j>=0; i++, j--) {
        if(v[i]==ma && y==1) {
            max_index = i;
            y=0;
        }
        if(v[j] == mi && o==1) {
            min_index = j;
            o=0;
        }
        if(o==0 && y==0) 
            break;
    }
    if(v[0] == ma && v[n-1] == mi) 
        cout<<0;
    else {
        if(max_index < min_index) 
            cout<<n-min_index + max_index -1;
        else 
            cout<<max_index-min_index + min_index + (n - min_index - 1) - 1;
    }
}
 
 