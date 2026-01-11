#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        if(n%2==1 || n < 4) cout << "-1\n";
        else {
            long long minres = (n/6ll + (n%6!=0 ? 1 : 0));
            long long maxres = n/4ll;
            cout << minres << " " << maxres << endl;
        }
    }
    return 0;
}