#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s="codeforces";
    unordered_map<char,int>mp;
    for(char c:s){
        mp[c]++;
    }
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
        if(mp.find(c)!=mp.end()) cout<<"YES"<<"
";
        else cout<<"NO"<<"
";
    }
    return 0;
}