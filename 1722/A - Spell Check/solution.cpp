#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        string target = "Timur";
 
        if(n != 5) {
            cout << "NO
";
            continue;
        }
 
        unordered_map<char, int> mp;
 
        for(char c : target) {
            mp[c]++;
        }
 
        for(char c : s) {
            mp[c]--;
        }
 
        bool valid = true;
 
        for(auto it : mp) {
            if(it.second != 0) {
                valid = false;
                break;
            }
        }
 
        cout << (valid ? "YES" : "NO") << "
";
    }
 
    return 0;
}