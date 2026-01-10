#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        long long result = 1, start = 2;
        while(n%start==0) {
            result++;
            start++;
        } 
        cout << result << endl;
    }
    return 0;
}