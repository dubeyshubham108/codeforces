#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> v(4);
        for(int i=0; i<4; i++)
            cin>>v[i];
        int max = *max_element(v.begin(), v.end());
        auto it = find(v.begin(), v.end(), max);
        int index1 = it - v.begin();
        v[index1] = -1;
        max = *max_element(v.begin(), v.end());
        it = find(v.begin(), v.end(), max);
        int index2 = it - v.begin();
        if((index1>=2 && index2 <=1) || (index1<=1 && index2>=2))
            cout<<"Yes
";
        else
            cout<<"No
";
    }
}