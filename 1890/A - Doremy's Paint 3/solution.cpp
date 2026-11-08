#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        unordered_map<int, int> mp;
 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }
 
        if(mp.size() == 1) {
            cout << "YES
";
        }
        else if(mp.size() == 2) {
            vector<int> freq;
 
            for(auto it : mp) {
                freq.push_back(it.second);
            }
 
            if(n % 2 == 0) {
                if(freq[0] == n/2 && freq[1] == n/2)
                    cout << "YES
";
                else
                    cout << "NO
";
            }
            else {
                if(abs(freq[0] - freq[1]) == 1)
                    cout << "YES
";
                else
                    cout << "NO
";
            }
        }
        else {
            cout << "NO
";
        }
    }
 
    return 0;
}