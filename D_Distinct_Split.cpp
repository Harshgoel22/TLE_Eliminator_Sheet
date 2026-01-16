#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;

        long long leftcnt[26] = {0}, rightcnt[26] = {0};
        long long leftunq = 0, rightunq = 0;
        vector<long long> leftsum(n);

        for(int i=0; i<n; i++) {
            int charnum = s[i] - 'a';
            leftcnt[charnum]++;
            if(leftcnt[charnum] == 1) leftunq++;
            leftsum[i] = leftunq;
        }

        vector<long long> rightsum(n);
        for(int i=n-1; i>=0; i--) {
            int charnum = s[i] - 'a';
            rightcnt[charnum]++;
            if(rightcnt[charnum] == 1) rightunq++;
            rightsum[i] = rightunq;
        }

        long long total = 0;
        for(int i=0; i<n-1; i++) {
            total = max(total, leftsum[i]+rightsum[i+1]);
        }

        cout << total << endl;
    }
    return 0;
}