#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n,a;
    cin>>n>>a;
    while(a--){
        int digit=n%10;
        if(digit!=0) n-=1;
        else{
            n/=10;
        }
    }
    cout<<n;
    return 0;
}