#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        ll sum=0;
        for(int i=0; i<n-1; i++) {
            if( (abs(a[i] - a[i+1]) + abs(b[i] - b[i+1])) > (abs(a[i] - b[i+1]) + abs(b[i] - a[i+1]))) 
                swap(a[i+1], b[i+1]);
        }
        for(int i=0; i<n-1; i++) {
            sum+=abs(a[i] - a[i+1]) + abs(b[i] - b[i+1]);
        }
        cout<<sum<<"
";
    }
}
 
 