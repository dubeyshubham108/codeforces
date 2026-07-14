#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    ll n, x, y;   // use ll to avoid overflow
    cin >> n >> x >> y;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    ll sum = accumulate(a.begin(), a.end(), 0LL);
 
    if ((sum + x + y) % 2 == 0) {
        cout << "Alice
";
    } else {
        cout << "Bob
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}