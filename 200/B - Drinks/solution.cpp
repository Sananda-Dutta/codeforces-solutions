#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    double actual = 0.0;
 
    for (int i = 0; i < n; i++) {
        int per;
        cin >> per;
        actual += per;
    }
 
    cout << fixed << setprecision(10) << actual / n;
 
    return 0;
}