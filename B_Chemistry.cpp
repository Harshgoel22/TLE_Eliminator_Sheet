#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        int charcnt[26] = {0}, len = n-k;
        for(auto ch : s) charcnt[ch-'a'] += 1;

        bool check = false, odd = false;
        for(int charnum=0; charnum<26; charnum++) {
            int val = charcnt[charnum];
            if(val%2==1) {
                odd = true;
                val -= 1;
            }
            
            len = max(0, len-val);
        }

        if((len==0) || (len==1 && odd==true)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}