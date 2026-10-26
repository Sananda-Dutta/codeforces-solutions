#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        auto getValue = [&]() {
            vector<int> f;
            vector<bool> seen(n + 1, false);
            int mex = 0;
 
            for (int i = 0; i < n; i++) {
                seen[a[i]] = true;
 
                while (seen[mex]) {
                    mex++;
                }
 
                f.push_back(mex);
            }
 
            sort(f.rbegin(), f.rend());
            return f[k - 1];
        };
 
        int original = getValue();
        int best = original;
        int x = -1, y = -1;
 
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(a[i], a[j]);
 
                int current = getValue();
 
                if (current > best) {
                    best = current;
                    x = i;
                    y = j;
                }
 
                swap(a[i], a[j]);
            }
        }
 
        if (x == -1) {
            cout << -1 << '
';
        } else {
            cout << x + 1 << ' ' << y + 1 << '
';
        }
    }
 
    return 0;
}