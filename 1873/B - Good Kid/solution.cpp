#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int mini=INT_MAX;
        long long pro=1;
        for(int i=0;i<n;i++){
            if(vec[i]<mini) mini=vec[i];
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(vec[i]==mini &&count==0){
                count++;
                pro*=(mini+1);
            }
            else pro*=vec[i];
        }
        cout<<pro<<"
";
        
    }
    return 0;
}