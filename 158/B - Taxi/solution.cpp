#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> cnt(5, 0);
 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
 
    int ans = 0;
 
    // Groups of 4
    ans += cnt[4];
 
    // Groups of 3 can accommodate one group of 1
    ans += cnt[3];
    cnt[1] = max(0, cnt[1] - cnt[3]);
 
    // Groups of 2: two groups per taxi
    ans += cnt[2] / 2;
 
    if(cnt[2] % 2 == 1) {
        ans++;
        cnt[1] = max(0, cnt[1] - 2);
    }
 
    // Remaining groups of 1
    ans += (cnt[1] + 3) / 4;
 
    cout << ans << endl;
 
    return 0;
}