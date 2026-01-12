#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string start, end; 
        cin >> start >> end;
        int n = start.size(), m = end.size();
        vector<int> lastcharidx(26, n);

        int i = n-1;
        bool valid = true;
        for(int j=m-1; j>=0; j--) {
            int lastidxused = lastcharidx[end[j]-'A'];
            // check no occurence of end[j] in b/w [i+1,lastidxused-1]
            for(int k=i+1; k<lastidxused; k++) {
                if(start[k] == end[j]) {
                    valid = false;
                    break;
                }
            }
            if(valid==false) break;
            
            // find its occ in range [0,i]
            while(i>=0 && start[i]!=end[j]) {
                i--;
            }
            if(i>=0 && start[i]==end[j]) lastcharidx[end[j]-'A'] = i--;
            else {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "YES\n" : "NO\n");
    }
    return 0;
}