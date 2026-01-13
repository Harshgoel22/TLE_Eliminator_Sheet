#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b; cin >> a >> b;
        if(a == b) {
            cout << "0 0\n";
            continue;
        }
        else if((a==0 && b>0) || (a>0 && b==0)) {
            cout << max(a,b) << " 0\n";
            continue; 
        }

        long long maxval = abs(a-b);
        long long minopr = min(a % maxval, maxval - a % maxval);
        cout << maxval << " " << minopr << endl;
    }
    return 0;
}