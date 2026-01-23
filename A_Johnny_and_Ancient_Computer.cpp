#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        if(a > b) swap(a,b);

        if(b%a!=0) {
            cout << "-1\n";
            continue;
        }

        ll f = b/a;
        if((f&(f-1)) != 0) {
            cout << "-1\n";
            continue;
        }

        ll rank = log2(f);
        cout << (rank/3 + (rank%3!=0)) << endl;
    }
    return 0;
}