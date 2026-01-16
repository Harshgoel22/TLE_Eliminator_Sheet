#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string bin; cin >> bin;
        int i=0, j=0, k=0, n=bin.size(); // i->1 and j->0

        vector<int> isprocessed(n, 0);
        while(k<n && (i<n || j<n)) {
            i = max(i, k+1);
            j = max(j, k+1);

            if(bin[k]=='0') {
                while(i<n && (bin[i]=='0' || isprocessed[i]==1)) i++;
                if(i<n && bin[i]=='1') {
                    isprocessed[i] = 1;
                    i++;
                } else break;
            }
            else {
                while(j<n && (bin[j]=='1' || isprocessed[j]==1)) j++;
                if(j<n && bin[j]=='0') {
                    isprocessed[j] = 1;
                    j++;
                } else break;
            }
            k++;
            while(k<n && isprocessed[k]==1) k++;
        }
        cout << n-k << endl;
    }
    return 0;
}