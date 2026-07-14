#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n, h;
    cin>>n>>h;
    int result=0;
    while(n) {
        int a;
        cin>>a;
        if(a>h)
            result+=2;
        else
            result++;
        n--;
    }
    cout<<result;
}