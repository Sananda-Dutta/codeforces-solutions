#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    // Maximum possible square root is 10^6
    const int MAX = 1000000;
    vector<bool> prime(MAX + 1, true);
 
    prime[0] = prime[1] = false;
 
    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                prime[j] = false;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        long long r = sqrtl(a[i]);
 
        if (r * r == a[i] && prime[r]) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}