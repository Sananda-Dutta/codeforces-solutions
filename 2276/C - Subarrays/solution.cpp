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
 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        long long ans = 0;
        long long prefixSum = 0;
 
        vector<long long> freq(k, 0);
        freq[0] = 1;
 
        for (int i = 0; i < n; i++) {
            prefixSum += a[i];
 
            if (i >= k) {
                long long oldPrefix = prefixSum;
                // Remove the prefix sum from k+1 positions ago
                // using a separately maintained prefix array below.
            }
        }
 
        vector<long long> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = (pref[i] + a[i]) % k;
        }
 
        fill(freq.begin(), freq.end(), 0);
 
        for (int r = 0; r <= n; r++) {
            if (r >= k + 1) {
                freq[pref[r - k - 1]]++;
            }
 
            ans += freq[pref[r]];
        }
 
        cout << ans << '
';
    }
 
    return 0;
}