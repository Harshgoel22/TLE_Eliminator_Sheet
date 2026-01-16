#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        ll f1=-1, f2=-1;
        for(ll factor = 2; factor*factor <= n; factor++) {
            if(n % factor == 0) {
                f1 = factor;
                f2 = n/f1;
                break;
            }
        }

        if(f1==-1 || f2==-1) cout << "1 " << n-1 << endl;
        else cout << f2 << " " << 1ll*(f1-1)*f2 << endl;
    }
    return 0;
}