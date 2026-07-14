#include<iostream>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    bool b = true;
    while(n) {
        if(b) {
            cout<<"I hate ";
            b=!b;
        } else {
            cout<<"I love ";
            b=!b;
        }
        if(n>1) {
            cout<<"that ";
        } else {
            cout<<"it ";
        }
        n--;
    }
}