#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int open = 0, result = 0;
        for(auto& ch : s) {
            if(ch=='(') open++;
            else {
                if(open==0) result++;
                open = max(open-1,0);
            }
        }
        cout << result << endl;
    }
    return 0;
}