#include <bits/stdc++.h>
using namespace std;
 
string result(int n,string& s){
    if(s.size()<26) cout<<"NO";
    else{
        unordered_map<char,int>mp;
        for(char c:s){
            mp[tolower(c)]++;
        }
        if(mp.size()==26) {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
}
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    result(n,s);
    return 0;
}