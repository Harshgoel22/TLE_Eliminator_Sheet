#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int arr[n]; for(int i=0; i<n; i++) cin >> arr[i];

        if(k == 4) {
            int twos = 0, result = k-1;
            for(int i=0; i<n; i++) {
                if(arr[i] % 4 == 0) twos+=2;
                else if(arr[i] % 2 == 0) twos++;
                result = min(result, (k - (arr[i] % k)) % k);
            }
            if(n>=2) result = min(result, 2);
            cout << (twos>=2 ? "0\n" : (twos==1 ? (n==1 ? "2\n" : "1\n") : to_string(result)+"\n"));
        } else {
            int result = k - 1;
            for(int i=0; i<n; i++) {
                result = min(result, (k - (arr[i] % k)) % k);
            }
            cout << result << endl;
        }
    }
    return 0;
}