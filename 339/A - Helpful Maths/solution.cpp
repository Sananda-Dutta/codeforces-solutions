#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    vector<int>vec;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])) vec.push_back(s[i]-'0');
    }
    sort(vec.begin(),vec.end());
    string ans;
    for(int i=0;i<vec.size();i++){
        ans+=(vec[i]+'0');
        ans+='+';
    }
    ans.pop_back();
    cout<<ans;
    
    return 0;
}