#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    string ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s.substr(i,3)=="WUB"){
            if(ans!=""){
                cout<<ans<<" ";
                ans="";
            }
            i+=2;
        }
        else ans+=s[i];
    }
    if(ans!="") cout<<ans;
    return 0;
}