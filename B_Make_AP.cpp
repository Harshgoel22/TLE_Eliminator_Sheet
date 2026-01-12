#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, c; cin >> a >> b >> c;
        // first case if a and b are correct
        int d1 = b-a, cc = b+d1;
        if(cc%c==0 && (cc!=0 || c==0) && cc/c>0) {
            cout << "YES\n";
            continue;
        }
        // case 2 if b and c are correct
        int d2 = c-b, ca = b-d2;
        if(ca%a==0 && (ca!=0 || a==0) && ca/a>0) {
            cout << "YES\n";
            continue;
        }
        // case 3 if a and c are correct
        int id3 = c-a;
        if(id3%2==0) {
            int d3 = id3/2, cb = a + d3;
            if(cb%b==0 && (cb!=0 || b==0) && cb/b>0) {
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}