#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, currCap=0, maxCap=0;
    cin>>n;
    int k=n;
    while(n) {
        int peopleOut, peopleIn; 
        cin>>peopleOut>>peopleIn;
        if(peopleOut==0 && n==k) 
            currCap=peopleIn;
        else
            currCap = currCap - peopleOut + peopleIn;
        if(maxCap<currCap)
            maxCap = currCap;
        n--;
    }
    cout<<maxCap;
}