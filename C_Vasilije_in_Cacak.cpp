#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k, x; cin >> n >> k >> x;
        long long start = k*(k+1)/2, end = k*(2*n-k+1)/2;
        if(x>=start && x<=end) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}