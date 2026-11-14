#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        unordered_map<long long, long long> mp;
 
        long long count = 0;
 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
 
            long long key = 1LL * x - i;
 
            count += mp[key];
 
            mp[key]++;
        }
 
        cout << count << "
";
    }
 
    return 0;
}