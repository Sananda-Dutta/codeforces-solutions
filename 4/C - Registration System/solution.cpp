#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    unordered_map<string,int>mp;
    while(n--){
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end()){
            cout<<s<<mp[s];
            cout<<"
";
        }
        else{
            cout<<"OK"<<"
";
        }
        mp[s]++;
    }
    return 0;
    
}