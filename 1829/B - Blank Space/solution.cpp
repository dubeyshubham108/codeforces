#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, cnt=0, ans=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i]==0) 
                cnt++;
            else {
                ans=max(cnt, ans);
                cnt=0;
            }
        }
        cout<<max(cnt, ans)<<endl;
    }
}