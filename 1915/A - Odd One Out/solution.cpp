#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ans=0;
        ans=a^b^c;
        cout<<ans<<"
";
    }
    return 0;
}