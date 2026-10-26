#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int a1=(a+b)*c;
    int b1=a*b*c;
    int c1=a+(b*c);
    int d1=a*(b+c);
    int e1=a+b+c;
    int ans1=max(a1,b1);
    int ans2=max(c1,d1);
    int ans3=max(ans1,e1);
    cout<<max(ans3,ans2);
    return 0;
}