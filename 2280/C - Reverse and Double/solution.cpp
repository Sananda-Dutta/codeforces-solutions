#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int n;
vector<ll> a, d;
 
bool check(ll X) {
    vector<int> bad;
    for (int i = 1; i <= n - 1; i++) {
        if (d[i] > X) {
            bad.push_back(i);
            if (bad.size() > 2) return false;
        }
    }
    if (bad.empty()) return true;
 
    if (bad.size() == 2) {
        int p = bad[0], q = bad[1];
        for (int i = p + 1; i <= q - 1; i++) {
            if (2 * d[i] > X) return false;
        }
        // l = p+1, r = q ; l > 1 and r < n both hold
        if (llabs(a[p] - 2 * a[q]) > X) return false;
        if (llabs(2 * a[p + 1] - a[q + 1]) > X) return false;
        return true;
    }
 
    int p = bad[0];
    // Case A: l = p+1, r from p+1 to n
    for (int r = p + 1; r <= n; r++) {
        bool ok = (llabs(a[p] - 2 * a[r]) <= X);
        if (ok && r < n) ok = (llabs(2 * a[p + 1] - a[r + 1]) <= X);
        if (ok) return true;
        if (r <= n - 1 && 2 * d[r] > X) break; // index r would be inside for next r
    }
    // Case B: r = p, l from p down to 1
    for (int l = p; l >= 1; l--) {
        bool ok = (llabs(2 * a[l] - a[p + 1]) <= X);
        if (ok && l > 1) ok = (llabs(a[l - 1] - 2 * a[p]) <= X);
        if (ok) return true;
        if (l - 1 >= 1 && 2 * d[l - 1] > X) break; // index l-1 would be inside next
    }
    return false;
}
 
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        a.assign(n + 2, 0);
        d.assign(n + 2, 0);
        for (int i = 1; i <= n; i++) scanf("%lld", &a[i]);
        ll mx = 0;
        for (int i = 1; i <= n - 1; i++) {
            d[i] = llabs(a[i] - a[i + 1]);
            mx = max(mx, d[i]);
        }
        ll lo = 0, hi = mx;
        while (lo < hi) {
            ll mid = (lo + hi) / 2;
            if (check(mid)) hi = mid;
            else lo = mid + 1;
        }
        printf("%lld
", lo);
    }
    return 0;
}