#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int a, b, n; cin >> a >> b >> n;
        int value[n]; 
        for(int i=0; i<n; i++) cin >> value[i];

        long long result = b;
        for(int i=0; i<n; i++) result +=  min(value[i],a-1);

        cout << result << endl;
    }
    return 0;
}