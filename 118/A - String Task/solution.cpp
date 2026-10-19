#include <bits/stdc++.h>
using namespace std;
 
bool isvowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' ||
            c == 'o' || c == 'u' || c == 'y');
}
 
int main() {
    string s;
    cin >> s;
 
    string ans;
 
    for (int i = 0; i < s.size(); i++) {
        if (isvowel(s[i])) continue;
 
        ans += '.';
        ans += tolower(s[i]);
    }
 
    cout << ans;
    return 0;
}