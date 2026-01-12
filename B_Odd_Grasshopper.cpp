#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long x0, n; cin >> x0 >> n;
        long long disp = 0;

        if(n%4==1) disp = n;
        else if(n%4==2) disp = -1;
        else if(n%4==3) disp = -n-1;

        if(x0%2==0) disp = -disp;
        cout << (x0+disp) << endl;
    }
    return 0;
}