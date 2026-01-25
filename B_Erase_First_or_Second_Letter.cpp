#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string input; cin >> input;

        int alpha[26] = {0};
        int result = 0;

        for(int i=0; i<n; i++) {
            if(alpha[input[i]-'a'] == 0) {
                result += (n-i);
                alpha[input[i]-'a'] = 1;
            }
        }

        cout << result << endl;
    }
    return 0;
}