#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    bool hard=false;
    while(n--){
        int ele;
        cin>>ele;
        if(ele==1) hard=true;
    }
    if(hard) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}