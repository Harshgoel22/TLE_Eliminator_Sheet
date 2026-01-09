#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; cin >> n;
        int arr[n], arrXor = 0;
        for(int i=0; i<n; i++) {
            cin >> arr[i];
            arrXor = (arrXor ^ arr[i]);
        }

        if(n%2==0) {
            cout << ((arrXor==0) ? "3\n" : "-1\n"); 
        }
        else {
            cout << arrXor << endl;
        }
    }
    return 0;
}