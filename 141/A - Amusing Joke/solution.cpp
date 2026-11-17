#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
 
    int freq[26] = {0};
 
    // Count characters from first string
    for (char ch : s1) {
        freq[ch - 'A']++;
    }
 
    // Count characters from second string
    for (char ch : s2) {
        freq[ch - 'A']++;
    }
 
    // Subtract characters from third string
    for (char ch : s3) {
        freq[ch - 'A']--;
    }
 
    // Check if all frequencies are zero
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
    return 0;
}