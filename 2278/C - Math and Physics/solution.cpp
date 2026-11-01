#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        long long sum = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
 
        bool internal = false;
 
        // Check whether any internal core has mass >= 2
        for (int i = 1; i < n - 1; i++) {
            if (a[i] >= 2) {
                internal = true;
                break;
            }
        }
 
        if (internal) {
            cout << sum - 1 << '
';
        }
        else if (a[0] >= 2 || a[n - 1] >= 2) {
            cout << sum - (n - 1) << '
';
        }
        else {
            cout << -1 << '
';
        }
    }
 
    return 0;
}