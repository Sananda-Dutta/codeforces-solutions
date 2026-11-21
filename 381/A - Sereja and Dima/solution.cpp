#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    int sum1=0;
    int sum2=0;
    int l=0,r=n-1;
    int count=0;
    while(count!=n){
        if(count%2==0){
            if(vec[l]>=vec[r]){
                sum1+=vec[l];
                l++;
            }
            else{
                sum1+=vec[r];
                r--;
            }
        }
        else{
            if(vec[l]>=vec[r]){
                sum2+=vec[l];
                l++;
            }
            else{
                sum2+=vec[r];
                r--;
            }
        }
        count++;
    }
    cout<<sum1<<" "<<sum2;
    return 0;
}