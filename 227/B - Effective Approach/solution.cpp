#include<iostream>
#include<vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    vector<int> ans(n);
    for(int i=0; i<n; i++) 
        cin>>v[i];
    for(int i=0; i<n; i++) 
        ans[v[i] - 1]=i+1;
    int q;
    cin>>q;
    vector<int> no_of_query(q);
    for(int i=0; i<q; i++) 
        cin>>no_of_query[i];
    long long petya=0, vasya=0;
    for(int i=0; i<q; i++) {
        vasya += ans[no_of_query[i] - 1];
        petya += n - ans[no_of_query[i] - 1] + 1;
    }
    cout<<vasya<<" "<<petya;
}
 
 
 