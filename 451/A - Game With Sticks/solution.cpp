#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int step=0;
    while(n!=0 && m!=0){
        n--;
        m--;
        step++;
    }
    if(step%2==0) cout<<"Malvika";
    else cout<<"Akshat";
    return 0;
}