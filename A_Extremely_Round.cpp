#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int num; cin >> num;
        string strnum = to_string(num);
        int n = strnum.size(), msb = (strnum[0]-'0');
        cout << 9*(n-1) + msb << endl;
    }
    return 0;
}