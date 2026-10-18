#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n, count = 0;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
 
            int sum = i * i + j * j;
            int k = sqrt(sum);
 
            if (k <= n && k * k == sum) {
                count++;
            }
        }
    }
 
    cout << count;
    return 0;
}