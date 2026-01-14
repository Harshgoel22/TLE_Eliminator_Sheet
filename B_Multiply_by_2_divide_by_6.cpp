#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n; cin >> n;
        int twos = 0, threes = 0;

        while(n % 2 == 0) {
            n/=2;
            twos++;
        }
        while(n % 3 == 0) {
            n/=3;
            threes++;
        }

        int result = 0;
        if(threes >= twos && n == 1) {
            result += 2*(threes-twos) + twos;
            cout << result << endl;
        }
        else cout << "-1\n";
    }
    return 0;
}