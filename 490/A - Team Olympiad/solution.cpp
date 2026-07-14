#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];
    vector<int> p = v;
    sort(p.begin(), p.end());
    int a=0, b=0, c=0;
    for(auto i: p) {
        if(i==1) 
            a++;
        else if(i==2)
            b++;
        else
            c++;
    }
    if(a==0 || b==0 || c==0) 
        cout<<0;
    else {
        int k = (min(min(a, b), c));
        cout<<k<<endl;
        int m=1;
        while(m<=k) {
            int p=1, q=1, r=1;
            for(int i=0; i<n; i++) {
                if(v[i]==1 && p==1) {
                    cout<<i+1<<" ";
                    v[i]=-1;
                    p=0;
                } else if(v[i]==2 && q == 1) {
                    cout<<i+1<<" ";
                    v[i]=-1;
                    q=0;
                } else if(v[i]==3 && r==1){
                    cout<<i+1<<" ";
                    v[i]=-1;
                    r=0;
                }
            }
            cout<<endl;
            m++;
        }
    }
    
    
}