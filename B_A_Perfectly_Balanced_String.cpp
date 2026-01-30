#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vector<bool> firstocc(26, false);
        vector<char> order;
        for(auto& ch : s) {
            if(firstocc[ch-'a'] == false) {
                firstocc[ch-'a'] = true;
                order.push_back(ch);
            }
        } 

        ll i = 0, j = 0, n = s.size(), m = order.size();
        bool flag = true;
        while(i < n) {
            if(s[i] != order[j]) {
                flag = false;
                break;
            } else {
                i++;
                j = (j + 1) % m;
            }
        }

        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}