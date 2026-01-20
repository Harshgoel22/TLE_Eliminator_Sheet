#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, r, b; cin >> n >> r >> b;
        string result;
        ll comcontr = r/(b+1), rem = r%(b+1);

        int i=0, alternate = 0;
        while(i<n) {
            if(alternate==0) { // R
                int j = (rem>0) ? comcontr + 1 : comcontr;
                while(i<n && j>0) {
                    result.push_back('R');
                    j--;
                    i++;
                }
                rem = max(0ll, rem-1);
                alternate = 1;
            } else {
                result.push_back('B');
                i++;
                alternate = 0;
            }
        }

        cout << result << endl;
    }
    return 0;
}