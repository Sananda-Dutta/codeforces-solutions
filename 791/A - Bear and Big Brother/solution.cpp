#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a>b){
        cout<<0;
        return 0;
    }
    else{
        while(a<=b){
           a*=3;
           b*=2;
           ans++;
        }
    }
    cout<<ans;
    return 0;
}