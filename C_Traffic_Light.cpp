#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; char curr;
        cin >> n;
        cin >> curr;
        string s; cin >> s;

        if(curr == 'g') {
            cout << "0\n";
            continue;
        }

        vector<int> greenidx;
        for(int i=0; i<n; i++) {
            if(s[i] == 'g') greenidx.push_back(i);
        }
        greenidx.push_back(greenidx[0]+n);
    
        int result = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == curr) {
                int nextgreenidx = *upper_bound(greenidx.begin(), greenidx.end(), i);
                result = max(result, nextgreenidx - i);
            }
        }

        cout << result << endl;
    }
    return 0;
}