#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t; cin >> t;
    while(t--) {
        ll n, k; cin >> n >> k;
        string input; cin >> input;
        ll result = k, running = 0;
        for(int i=0; i<k; i++) running += (input[i]=='W');

        result = min(result, running);
        int i=0, j=k;
        while(j<n) {
            running -= (input[i]=='W');
            running += (input[j]=='W');
            result = min(result, running);

            i++, j++;
        }

        cout << result << endl;
    }
    return 0;
}