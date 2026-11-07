#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve() {
    int n;
    ll l;
    cin >> n >> l;
 
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    sort(a.begin(), a.end());
 
    // K = l - 1, because every pair product must be < l.
    ll K = l - 1;
 
    // Largest integer s such that s*s <= K.
    ll s = sqrtl(K);
    while ((s + 1) * (s + 1) <= K) s++;
    while (s * s > K) s--;
 
    // Option 1: Make every element <= s.
    ll ans = 0;
 
    for (ll x : a) {
        if (x > s) {
            ans += x - s;
        }
    }
 
    // Option 2: Keep the largest original element as the pivot.
    ll A = a[n - 1];
 
    // Consider pivot's final value x > s.
    // All other elements must be <= floor(K / x).
 
    ll cur = s + 1;
 
    // Maintain sum of max(0, a[i] - q) for i < n-1.
    int pos = n - 2;
    ll sum = 0;
    ll cnt = 0;
 
    while (cur <= A) {
 
        ll q = K / cur;
 
        // All x in [cur, right] have the same quotient.
        ll right;
 
        if (q == 0) {
            right = A;
        } else {
            right = K / q;
        }
 
        ll x = min(A, right);
 
        // As q decreases, add newly affected elements.
        while (pos >= 0 && a[pos] > q) {
            sum += a[pos];
            cnt++;
            pos--;
        }
 
        // Cost:
        // Reduce pivot A to x.
        // Reduce every other element to at most q.
        ll cost = (A - x) + (sum - cnt * q);
 
        ans = min(ans, cost);
 
        cur = right + 1;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}