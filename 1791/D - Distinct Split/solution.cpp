#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    vector<int> prefix(n), suffix(n);
 
    int freq[26] = {0};
    int distinct = 0;
 
    // Calculate distinct characters in every prefix
    for (int i = 0; i < n; i++) {
        if (freq[s[i] - 'a'] == 0) {
            distinct++;
        }
 
        freq[s[i] - 'a']++;
        prefix[i] = distinct;
    }
 
    // Reset frequency array
    memset(freq, 0, sizeof(freq));
    distinct = 0;
 
    // Calculate distinct characters in every suffix
    for (int i = n - 1; i >= 0; i--) {
        if (freq[s[i] - 'a'] == 0) {
            distinct++;
        }
 
        freq[s[i] - 'a']++;
        suffix[i] = distinct;
    }
 
    // Find maximum sum of distinct characters
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }
 
    cout << ans << '
';
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}