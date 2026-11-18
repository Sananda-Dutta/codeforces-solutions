#include <bits/stdc++.h>
using namespace std;
 
struct Fenwick {
    int n;
    vector<int> bit;
 
    Fenwick(int n) {
        this->n = n;
        bit.assign(n + 2, 0);
    }
 
    void update(int idx, int val) {
        while (idx <= n) {
            bit[idx] ^= val;
            idx += idx & -idx;
        }
    }
 
    int query(int idx) {
        int ans = 0;
 
        while (idx > 0) {
            ans ^= bit[idx];
            idx -= idx & -idx;
        }
 
        return ans;
    }
 
    void rangeUpdate(int l, int r, int val) {
        if (l > r || val == 0) return;
 
        update(l, val);
        update(r + 1, val);
    }
};
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n + 1);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    Fenwick fw(n);
 
    int total = 0;
 
    for (int i = n; i >= 1; i--) {
 
        // Total stones in pile i (only parity)
        int cur = (a[i] % 2) ^ fw.query(i);
 
        // Add parity of moves
        total ^= cur;
 
        // Distribute stones to previous k piles
        int l = max(1, i - k);
        int r = i - 1;
 
        fw.rangeUpdate(l, r, cur);
    }
 
    if (total == 1)
        cout << "Alice
";
    else
        cout << "Bob
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}