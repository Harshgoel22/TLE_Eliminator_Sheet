#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long len = 0;
        bool zeroPresent = false, fivePresent = false;

        while(n>0) {
            int digit = n % 10;
            n = n / 10;
            len++;
            if(digit==0) {
                if(zeroPresent==true && n > 0) break;
                else zeroPresent = true;
            } 
            else if(digit==5) {
                if(zeroPresent==true) break;
                else fivePresent = true;
            } 
            else if(digit==7 && fivePresent==true) break;
            else if(digit==2 && fivePresent==true) break;
        }
        
        // cout << total_len << " " << len << endl;
        cout << (len - 2) << endl;
    }
    return 0;
}