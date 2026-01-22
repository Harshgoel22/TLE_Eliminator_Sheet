#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string a, b;
        cin >> a;
        cin >> b;

        int n = a.size(), m = b.size();
        int comsublen = 0;
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int len = 0;
                for(int x=j, y=i; x<m && y<n; x++, y++) {
                    if(b[x]!=a[y]) break;
                    len++;
                }
                comsublen = max(comsublen, len);
            }
        }

        cout << (n+m-2*comsublen) << endl;
    }
    return 0;
}