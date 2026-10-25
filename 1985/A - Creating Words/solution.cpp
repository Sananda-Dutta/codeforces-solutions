#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s1,s2;
        cin>>s1>>s2;
        swap(s1[0],s2[0]);
        cout<<s1<<" "<<s2;
        cout<<"
";
    }
    return 0;
}