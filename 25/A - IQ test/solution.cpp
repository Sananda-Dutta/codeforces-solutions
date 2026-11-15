#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int even=0,odd=0;
    int odd_ans=0,even_ans=0;
    for(int i=1;i<=n;i++){
        int ele;
        cin>>ele;
        if(ele%2==0) {
            even_ans=i;
            even++;
        }
        else{
            odd_ans=i;
            odd++;
        }
    }
    if(even>1 && odd==1) cout<<odd_ans<<"
";
    else cout<<even_ans<<"
";
    return 0;
}