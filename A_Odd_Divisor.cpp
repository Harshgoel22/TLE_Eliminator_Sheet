#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        if(n % 2 == 1) cout << "YES\n";
        else{
            int bits = log2(n);
            long long nn = (1ll << bits);
            if(n == nn) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}