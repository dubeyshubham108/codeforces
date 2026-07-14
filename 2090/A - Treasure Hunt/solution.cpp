#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
 
        long long full_rounds = a / (x + y);
        long long total_dug = full_rounds * (x + y);
 
        if (total_dug + x > a) {
            cout << "NO
"; // B digs the treasure
        } else {
            cout << "YES
"; // K digs the treasure
        }
    }
    return 0;
}