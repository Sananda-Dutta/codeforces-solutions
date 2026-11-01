#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, m;
        cin >> n >> m;
 
        string a, b;
        cin >> a >> b;
 
        int freq[26] = {0};
 
        // Count numerator characters
        for (char c : a) {
            freq[c - 'a']++;
        }
 
        // Subtract denominator characters
        for (char c : b) {
            freq[c - 'a']--;
        }
 
        // Check whether remaining numerator is exactly "six"
        bool ans = true;
 
        for (int i = 0; i < 26; i++) {
            int expected = 0;
 
            if (i == ('s' - 'a') ||
                i == ('i' - 'a') ||
                i == ('x' - 'a')) {
                expected = 1;
            }
 
            if (freq[i] != expected) {
                ans = false;
                break;
            }
        }
 
        cout << (ans ? "YES" : "NO") << endl;
    }
 
    return 0;
}