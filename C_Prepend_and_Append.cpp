#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string binstr; cin >> binstr;

        int i=0, j=n-1;
        for( ; i<j; i++, j--) {
            if((binstr[i]=='0' && binstr[j]=='1') || (binstr[i]=='1' && binstr[j]=='0')){
                continue;
            }
            else break;
        }

        cout << (j-i+1) << endl;
    }
    return 0;
}