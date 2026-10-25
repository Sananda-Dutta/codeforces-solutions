#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    while(n--){
        int i;
        cin>>i;
        int ans=1;
        int j=0;
        int num=1;
        while(j!=i){
            if(num%3!=0 && num%10!=3){
                ans=num;
                j++;
            }
            num++;
        }
        cout<<ans<<"
";
    }
    return 0;
}