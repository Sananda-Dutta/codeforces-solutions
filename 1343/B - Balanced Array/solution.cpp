#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        int k = n / 2;
 
        if(k % 2 != 0) {
            cout << "NO
";
            continue;
        }
 
        cout << "YES
";
 
        // First half: even numbers
        for(int i = 1; i <= k; i++) {
            cout << 2 * i << " ";
        }
 
        // Second half: first k-1 odd numbers
        for(int i = 1; i < k; i++) {
            cout << 2 * i - 1 << " ";
        }
 
        // Last odd number
        cout << 3 * k - 1 << "
";
    }
 
    return 0;
}