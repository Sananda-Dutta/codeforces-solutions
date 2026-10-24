#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    int min_val = 2e9 + 7;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        min_val = min(min_val, x);
    }
    
    // If the smallest element can be reduced to 0 within (n-1) deletions, 
    // the whole array is a good subsequence.
    if (min_val <= n - 1) {
        cout << n << "
";
    } else {
        // Otherwise, no good subsequence exists.
        cout << 0 << "
";
    }
}
 
int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}