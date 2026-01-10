#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        int contsymbmax = 0, runsymb = 0;
        char lastsymb = '#';
        for(auto ch : s) {
            if(lastsymb == '#') {
                runsymb++;
                lastsymb = ch;
            }
            else if(ch == lastsymb) {
                runsymb++;
            }
            else {
                contsymbmax = max(contsymbmax, runsymb);
                runsymb = 1;
                lastsymb = ch;
            }
        }
        contsymbmax = max(contsymbmax, runsymb);
        cout << contsymbmax+1 << endl;
    }
    return 0;
}