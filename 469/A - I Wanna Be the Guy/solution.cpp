#include<bits/stdc++.h>
using namespace std;
int  main(){
    int n;
    cin>>n;
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        mp[i]++;
    }
    
    int p;
    cin>>p;
    vector<int>vec1(p);
    for(int i=0;i<p;i++){
        cin>>vec1[i];
    }
    
    int q;
    cin>>q;
    vector<int>vec2(q);
    for(int i=0;i<q;i++){
        cin>>vec2[i];
    }
    
    for(int i=0;i<vec1.size();i++){
        if(mp.find(vec1[i])!=mp.end()){
            mp.erase(vec1[i]);
        }
        else continue;
    }
    for(int i=0;i<vec2.size();i++){
        if(mp.find(vec2[i])!=mp.end()){
            mp.erase(vec2[i]);
        }
        else continue;
    }
    if(mp.empty()) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    return 0;
    
}