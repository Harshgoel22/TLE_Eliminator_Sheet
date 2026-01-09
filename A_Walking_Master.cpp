#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int dx = c-a, dy = d-b;

        if(dy<0 || (dy>=0 && dx>dy)) {
            cout << "-1\n";
        } else {
            int minsteps = abs(dy) + abs(dx-abs(dy));
            cout << minsteps << endl;
        }
    }
    return 0;
}