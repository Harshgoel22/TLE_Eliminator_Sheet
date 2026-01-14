#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int count0 = 0, count1 = 0;

        for(char ch : s) {
            count0 += (ch=='0');
            count1 += (ch=='1');
        }

        cout << ((min(count0, count1) % 2 == 1) ? "DA\n" : "NET\n");
    }
    return 0;
}