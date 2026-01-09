#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n], xorval = 0; 
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            xorval = (xorval ^ arr[i]);
        }
        
        if(xorval == 0) cout << "1\n1 " << n << endl;
        else if(n%2==0) cout << "2\n1 " << n << "\n1 " << n << endl;
        else cout << "4\n1 " << n << "\n1 " << n-1 << "\n" << n-1 << " " << n << "\n" << n-1 << " " << n << endl;
    }
    return 0;
}