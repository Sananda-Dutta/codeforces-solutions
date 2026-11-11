#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int crime=0;
    int police=0;
    while(n--){
        int ele;
        cin>>ele;
        if(ele>0){
            police+=ele;
        }
        else if(ele<0 && police>0){
            police--;
        }
        else crime++;
    }
    cout<<crime;
    return 0;
}