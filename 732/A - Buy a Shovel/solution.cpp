#include <iostream>
using namespace std;
 
int main() {
    int k, r;
    cin >> k >> r;
 
    for (int i = 1; i <= 10; ++i) {
        int amt = k * i;
        if (amt % 10 == 0 || amt % 10 == r) {
            cout << i << endl;
            return 0;
        }
    }
 
    return 0;
}