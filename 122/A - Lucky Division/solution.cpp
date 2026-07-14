#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    if(n%4==0 || n%7==0 || n%47==0 || n%74==0)
        cout<<"YES";
    else {
        while(n) {
            if(n%10!=4 && n%10!=7) {
                cout<<"NO";
                break;
            } else 
                n/=10;
            if(n==0)
                cout<<"YES";
        }
    }
    
}
 
 
 
 
 
 
 
 
 