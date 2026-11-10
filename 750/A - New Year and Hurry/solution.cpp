#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k;
    cin>>n>>k;
    int total=240;
    int remaining=total-k;
    int i=1;
    int ans=0;
    int needed=5;
    while((n--) && needed<=remaining){
        ans++;
        i++;
        needed+=(5*i);
    }
    cout<<ans;
    return 0;
}