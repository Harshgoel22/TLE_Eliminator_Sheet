#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, a, b; cin >> n >> a >> b;
        if((a+b)>=n-1) cout << ((a==n && b==n) ? "Yes\n" : "No\n");
        else cout << "Yes\n";
    }
    return 0;
}